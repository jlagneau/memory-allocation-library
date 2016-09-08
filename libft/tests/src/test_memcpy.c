/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/03 13:52:07 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/03 13:52:07 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char		*unit_test1(void)
{
	char		origin_src[100];
	char		origin_dst[100];
	char		custom_src[100];
	char		custom_dst[100];

	memset(origin_src, 42, 100);
	memset(custom_src, 42, 100);
	TEST_ASSERT(
		"Verify ft_memcpy return",
		ft_memcpy(custom_dst, custom_src, 100) == custom_dst);
	memcpy(origin_dst, origin_src, 100);
	TEST_ASSERT(
		"Compare ft_memcpy values with original",
		memcmp(origin_dst, custom_dst, 100) == 0);
	return (NULL);
}

char			*test_memcpy(void)
{
	TEST_RUN(unit_test1);
	return (NULL);
}
