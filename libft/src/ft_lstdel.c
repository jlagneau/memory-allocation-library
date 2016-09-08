/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:11:12 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/01 21:15:17 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_def.h>
#include <ft_mem.h>
#include <ft_list.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, t_size))
{
	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		*alst = (*alst)->next;
	}
	ft_memdel((void**)alst);
	*alst = NULL;
}
