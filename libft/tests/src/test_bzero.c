/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/03 13:47:08 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/03 13:47:08 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char		*unit_test1(void)
{
	char		origin[100];
	char		custom[100];

	bzero(origin, 100);
	ft_bzero(custom, 100);
	TEST_ASSERT(
		"Compare ft_bzero values with original",
		memcmp(origin, custom, 100) == 0);
	custom[0] = 1;
	ft_bzero(custom, 0);
	TEST_ASSERT(
		"Check for ft_bzero with size 0",
		custom[0] == 1);
	return (NULL);
}

char			*test_bzero(void)
{
	TEST_RUN(unit_test1);
	return (NULL);
}
