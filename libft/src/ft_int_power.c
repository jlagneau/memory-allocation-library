/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_power.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 04:57:22 by jlagneau          #+#    #+#             */
/*   Updated: 2016/07/13 06:07:55 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_int_power(int base, unsigned int exp)
{
	int	result;

	result = 1;
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return (result);
}
