/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocated_mem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 10:02:13 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 14:44:19 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_malloc.h>
#include <unistd.h>

static t_alloc	*set_alloc(size_t size)
{
	t_alloc		*alloc;
	size_t		mmap_size;

	mmap_size = (sizeof(t_alloc) + size) * 100 * getpagesize();
	alloc = (t_alloc*)create_alloc(mmap_size);
	return (alloc);
}

t_alloc_mem		*get_allocated_mem(void)
{
	static t_alloc_mem		*alloc_mem = NULL;

	if (alloc_mem == NULL)
	{
		alloc_mem = (t_alloc_mem*)create_alloc(sizeof(t_alloc_mem));
		alloc_mem->tiny = set_alloc(TINY_SIZE);
		alloc_mem->small = set_alloc(SMALL_SIZE);
		alloc_mem->large = NULL;
	}
	return (alloc_mem);
}
