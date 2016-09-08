/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:20:48 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 14:27:49 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_malloc.h>

void	*malloc(size_t size)
{
	ft_putstr("malloc at "__FILE__" of ");
	ft_putnbr((int)size);
	ft_putstr(" bytes.\n");
	show_alloc_mem();
	return (NULL);
}
