/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:22:17 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/01 15:57:48 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_str.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	t_size	len;

	ret = NULL;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = ft_strnew(len)))
		return (NULL);
	ret = ft_strcat(ret, s1);
	ret = ft_strcat(ret, s2);
	return (ret);
}
