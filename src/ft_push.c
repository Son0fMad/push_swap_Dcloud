/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:53:50 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/21 20:46:29 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_list **from, t_list **to, char *s)
{
	t_list	*temp;

	if (s)
		ft_putendl_fd(s, 1);
	if (*from)
	{
		temp = (*from)->next;
		ft_lstadd_front(to, *from);
		*from = temp;
	}
}
