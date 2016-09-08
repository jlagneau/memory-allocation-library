/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_alloc_mem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 09:59:39 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 14:45:40 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_malloc.h>

static void		show_large(t_alloc *large)
{
	ft_putstr("LARGE : 0x");
	ft_putnbr_base((unsigned long)large, 16);
	ft_putendl("");
}

static void		show_small(t_alloc *small)
{
	ft_putstr("SMALL : 0x");
	ft_putnbr_base((unsigned long)small, 16);
	ft_putendl("");
}

static void 	show_tiny(t_alloc *tiny)
{
	ft_putstr("TINY : 0x");
	ft_putnbr_base((unsigned long)tiny, 16);
	ft_putendl("");
}

void			show_alloc_mem(void)
{
	t_alloc_mem		*alloc_mem;

	alloc_mem = get_allocated_mem();
	ft_putendl("Show allocated memory.");
	show_tiny(alloc_mem->tiny);
	show_small(alloc_mem->small);
	show_large(alloc_mem->large);
}