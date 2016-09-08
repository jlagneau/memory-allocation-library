/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:18 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 17:38:51 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>

char		*ft_strchr(const char *s, int c)
{
	while (*s != (const char)c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char*)s);
}
