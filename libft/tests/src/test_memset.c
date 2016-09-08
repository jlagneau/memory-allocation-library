/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/03 03:34:10 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/03 03:34:10 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char		*unit_test1(void)
{
	char		origin[100];
	char		custom[100];

	TEST_ASSERT(
		"Compare ft_memset return with original",
		ft_memset(origin, 42, 100) == memset(origin, 42, 100));
	ft_memset(custom, 42, 100);
	TEST_ASSERT(
		"Compare ft_memset values with original",
		memcmp(origin, custom, 100) == 0);
	custom[0] = 1;
	ft_memset(custom, 0, 0);
	TEST_ASSERT(
		"Check for ft_memset with size 0",
		custom[0] == 1);
	return (NULL);
}

char			*test_memset(void)
{
	TEST_RUN(unit_test1);
	return (NULL);
}
