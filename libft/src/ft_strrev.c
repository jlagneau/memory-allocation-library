/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 11:15:34 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/07 12:57:02 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>

char    *ft_strrev(char *s)
{
    char    *start;
    char    *end;
    char    tmp;

	if (*s == '\0')
		return (s);
    start = s;
    end = start + ft_strlen(s) - 1;
    while (start < end)
    {
        tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
    return (s);
}
