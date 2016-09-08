/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:39:42 by jlagneau          #+#    #+#             */
/*   Updated: 2016/09/07 13:04:28 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}