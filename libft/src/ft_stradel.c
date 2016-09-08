/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 19:20:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
#include <stdlib.h>

void	ft_stradel(char ***a)
{
	char	**tmp;

	tmp = *a;
	while (*tmp)
	{
		ft_strdel(&(*tmp));
		tmp++;
	}
	free(*a);
	*a = NULL;
}
