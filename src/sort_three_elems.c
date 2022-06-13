/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_elems.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:53:33 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/21 23:46:14 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_list **st)
{
	while (!((*st)->num < (*st)->next->num && (*st)->next->num < \
			(*st)->next->next->num && (*st)->num < (*st)->next->next->num))
	{
		if ((*st)->num > (*st)->next->num && (*st)->next->num < \
			(*st)->next->next->num && (*st)->num < (*st)->next->next->num)
			ft_swap(st, "sa");
		else if ((*st)->num < (*st)->next->num && (*st)->next->num > \
				(*st)->next->next->num && (*st)->num < (*st)->next->next->num)
			ft_rot_rev(st, "rra");
		else if ((*st)->num < (*st)->next->num && (*st)->next->num > \
				(*st)->next->next->num && (*st)->num < (*st)->next->next->num)
		{
			ft_rot_rev(st, "rra");
			ft_swap(st, "sa");
		}
		else if ((*st)->num > (*st)->next->num && (*st)->next->num < \
				(*st)->next->next->num && (*st)->num > (*st)->next->next->num)
			ft_rot(st, "ra");
		else if ((*st)->num > (*st)->next->num && (*st)->next->num > \
				(*st)->next->next->num && (*st)->num > (*st)->next->next->num)
		{
			ft_rot(st, "ra");
			ft_swap(st, "sa");
		}
	}
}
