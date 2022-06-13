/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:54:17 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/23 00:27:20 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	check_number(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]) && s[i] != ' ')
			ft_error("Incorrect input");
		i++;
	}
	return (0);
}

int	is_sorted(t_list **st_a)
{
	t_list	*temp;

	temp = *st_a;
	while (temp && temp->next)
	{
		if (temp->num < temp->next->num)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

int	check_double(t_list **st_a, int x)
{
	t_list	*temp;

	if (*st_a == NULL)
		return (0);
	temp = *st_a;
	while (temp)
	{
		if (temp->num == x)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	validation(int argc, char **argv, t_ps *s_ps)
{
	int		i;
	int		num;
	t_list	*new;

	new = NULL;
	i = 1;
	while (i < argc)
	{
		check_number(argv[i]);
		if (ft_atoi_ps(argv[i], &num))
			ft_error("Wrong input");
		if (check_double(&s_ps->st_a, num))
			ft_error("Duplicate numbers");
		new = ft_lstnew(num);
		if (!new)
			ft_error("Memory was not allocated");
		ft_lstadd_back(&s_ps->st_a, new);
		s_ps->size_a++;
		i++;
	}
	if (is_sorted(&s_ps->st_a))
		ft_error("Stack is already sorted");
}
