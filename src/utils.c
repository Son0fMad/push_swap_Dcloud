/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:53:28 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/21 22:47:50 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(char *s)
{
	if (!s)
		ft_putendl_fd("Error", 2);
	else
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd(s, 2);
	}
	exit(1);
}

int	ft_size_stack(t_list *st)
{
	int	len;

	len = 0;
	if (!st)
		return (0);
	while (st)
	{
		st = st->next;
		len++;
	}
	return (len);
}

void	print_stack(t_list *st, char *s)
{
	ft_putstr_fd(s, 1);
	if (!st)
		ft_putendl_fd("empty", 1);
	while (st)
	{
		ft_putnbr_fd(st->num, 1);
		if (st->next)
			ft_putstr_fd(", ", 1);
		else
			ft_putendl_fd("", 1);
		st = st->next;
	}
}
