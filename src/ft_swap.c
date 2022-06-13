/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:53:45 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/21 21:01:37 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_list **list, char *s)
{
	t_list	*tmp;

	if (s)
		ft_putendl_fd(s, 1);
	if (*list && (*list)->next)
	{
		tmp = (*list)->next;
		(*list)->next = tmp->next;
		tmp->next = *list;
		*list = tmp;
	}
}

void	ss(t_list **list_a, t_list **list_b, char *s)
{
	ft_swap(list_a, s);
	ft_swap(list_b, NULL);
}
