/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:53:40 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/21 23:04:25 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_struct(t_ps *s_ps)
{
	s_ps->st_b = NULL;
	s_ps->st_a = NULL;
	s_ps->size_a = 0;
	s_ps->size_b = 0;
	s_ps->arr = NULL;
}
