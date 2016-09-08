/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:08:36 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/25 15:39:03 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_str.h>

char	*ft_strsub(char const *s, unsigned int start, t_size len)
{
	char	*sub;
	t_size	i;

	if (!(sub = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len-- > 0)
	{
		sub[i] = *(s + start + i);
		i++;
	}
	return (sub);
}
