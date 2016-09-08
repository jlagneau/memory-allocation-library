/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:35:38 by jlagneau          #+#    #+#             */
/*   Updated: 2016/07/13 06:08:54 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
#include <ft_math.h>

int				ft_atoi(const char *str)
{
	int			is_negative;
	int			ret;
	int			num_size;
	int			pos;

	pos = 0;
	while (ft_isspace(str[pos]))
		pos++;
	is_negative = 0;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			is_negative = 1;
		pos++;
	}
	num_size = 0;
	while (ft_isdigit(str[pos + num_size]))
		num_size++;
	ret = 0;
	while (num_size-- > 0)
		ret += (str[pos++] - '0') * ft_int_power(10, num_size);
	return ((is_negative) ? -ret : ret);
}
