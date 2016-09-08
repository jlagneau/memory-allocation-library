/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:40:36 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/26 16:02:44 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

static char		*ft_strip_front_spaces(char *s)
{
	t_size		begin;

	begin = 0;
	while (ft_isspace(s[begin]))
		begin++;
	return (s + begin);
}

static char		*ft_strip_back_spaces(char *s)
{
	t_size		last;

	last = ft_strlen(s) - 1;
	while (ft_isspace(s[last]))
	{
		s[last] = '\0';
		last--;
	}
	return (s);
}

char			*ft_strtrim(char const *s)
{
	char		*tmp;

	tmp = ft_strdup(s);
	tmp = ft_strip_front_spaces(tmp);
	tmp = ft_strip_back_spaces(tmp);
	return (tmp);
}
