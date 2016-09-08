/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:32:44 by jlagneau          #+#    #+#             */
/*   Updated: 2016/04/25 17:13:10 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ft_str.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (write(fd, s, ft_strlen(s)) == -1)
		perror(__FILE__);
}
