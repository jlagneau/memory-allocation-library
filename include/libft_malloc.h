/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_malloc.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:22:49 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 14:28:12 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MALLOC_H
# define LIBFT_MALLOC_H

# ifdef LIBFT_MALLOC_INTERNAL
#  include <libft.h>

#  define TINY_SIZE		256
#  define SMALL_SIZE	1024
#  define LARGE_SIZE	4096

typedef struct			s_alloc
{
	size_t				size;
	void				*data;
}						t_alloc;

typedef struct			s_alloc_mem
{
	t_alloc				*tiny;
	t_alloc				*small;
	t_alloc				*large;
}						t_alloc_mem;

t_alloc_mem				*get_allocated_mem(void);
void					*create_alloc(size_t size);

# endif

void					*malloc(size_t size);
void					*realloc(void *ptr, size_t size);
void					free(void *ptr);
void					show_alloc_mem(void);

#endif
