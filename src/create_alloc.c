/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_alloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 10:36:16 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 15:55:37 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_malloc.h>
#include <sys/mman.h>

void 	*create_alloc(size_t size)
{
	int		prot;
	int		flags;
	void	*tmp;

	prot = PROT_READ | PROT_WRITE;
	flags = MAP_ANON | MAP_PRIVATE;
	tmp = mmap(NULL, size, prot, flags, -1, 0);
	ft_bzero(tmp, size);
	return (tmp);
}
