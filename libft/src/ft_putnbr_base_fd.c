/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:18:41 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 11:58:04 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>

void	ft_putnbr_base_fd(unsigned long n, unsigned int base, int fd)
{
	if (n >= base)
		ft_putnbr_base_fd(n / base, base, fd);
	ft_putchar_fd((n % base >= 10) ? n % base - 10 + 'A' : n % base + '0', fd);
}
