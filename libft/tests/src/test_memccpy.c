/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 01:52:03 by jlagneau          #+#    #+#             */
/*   Updated: 2016/01/11 13:40:56 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char			*g_src = "This is a test";

static char		*unit_test1(void)
{
	char		dst[100];
	char		*origin;
	char		*custom;

	custom = ft_memccpy(dst, g_src, 'a', 100);
	origin = memccpy(dst, g_src, 'a', 100);
	TEST_ASSERT(
		"Compare return of ft_memccpy with original",
		custom == origin);
	custom = ft_memccpy(dst, g_src, 'Z', 100);
	TEST_ASSERT(
		"Verify return of ft_memccpy for char not found",
		custom == NULL);
	custom = ft_memccpy(dst, g_src, 0, 0);
	origin = memccpy(dst, g_src, 0, 0);
	TEST_ASSERT(
		"Compare return of ft_memccpy with original for char and size = 0",
		custom == origin);
	return (NULL);
}

static char		*unit_test2(void)
{
	char		origin[100];
	char		custom[100];

	bzero(origin, 100);
	bzero(custom, 100);
	ft_memccpy(custom, g_src, 'a', 100);
	memccpy(origin, g_src, 'a', 100);
	TEST_ASSERT(
		"Compare dest of ft_memccpy with original",
		memcmp(origin, custom, 100) == 0);
	return (NULL);
}

char			*test_memccpy(void)
{
	TEST_RUN(unit_test1);
	TEST_RUN(unit_test2);
	return (NULL);
}
