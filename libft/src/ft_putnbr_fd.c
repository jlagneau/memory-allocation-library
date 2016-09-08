/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:55 by jlagneau          #+#    #+#             */
/*   Updated: 2016/08/09 22:17:18 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>

void	ft_putnbr_fd(int n, int fd)
{
	const int	sign = (n < 0) ? -1 : 1;

	if (sign == -1)
		ft_putchar_fd('-', fd);
	if (n < -9 || n > 9)
		ft_putnbr_fd(n / 10 * sign, fd);
	ft_putchar_fd(n % 10 * sign + '0', fd);
}
