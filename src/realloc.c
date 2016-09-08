/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:24:37 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 09:44:22 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_malloc.h>

void	*realloc(void *ptr, size_t size)
{
	ft_putstr("realloc at "__FILE__" of ");
	ft_putnbr((int)size);
	ft_putstr(" bytes.\n");
	(void)ptr;
	return (NULL);
}
