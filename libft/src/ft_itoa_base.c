/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 10:58:27 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/08 14:15:00 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

char	*ft_itoa_base(unsigned int n, unsigned int base)
{
	char	str[255];
	int		rem;
	int		i;

	i = 0;
	if (base == 10)
		return ft_itoa(n);
	if (n == 0)
		return ft_strdup("0");
	while (n != 0)
	{
		rem = n % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		n /= base;
	}
	str[i] = '\0';
	return ft_strdup(ft_strrev(str));
}
