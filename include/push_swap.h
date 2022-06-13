/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:33:01 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/23 00:10:30 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>

# include "../libft/libft.h"
# include "get_next_line.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_ps
{
	t_list	*st_a;
	t_list	*st_b;
	size_t	size_a;
	size_t	size_b;
	int		*arr;
}				t_ps;

void	ft_error(char *s);
int		check_number(char *s);
void	print_stack(t_list *st, char *s);
int		check_double(t_list **st_a, int x);
int		is_sorted(t_list **st_a);
void	init_struct(t_ps *s_ps);
void	pst(t_ps *s_ps);
void	ft_swap(t_list **list, char *s);
void	ft_push(t_list **from, t_list **to, char *s);
void	ft_rot(t_list **list, char *s);
void	ft_rot_rev(t_list **list, char *s);
void	rr(t_list **list_a, t_list **list_b, char *s);
void	rrr(t_list **list_a, t_list **list_b, char *s);
void	ss(t_list **list_a, t_list **list_b, char *s);
void	sort_three(t_list **st);
void	push_stack(t_ps *s_ps);
void	sort_five(t_ps *s_ps, int argc);
int		*arr_sort(int argc, char **argv);
void	assign_right_index(t_ps *s_ps);
size_t	find_max_index(t_list *s_list);
int		ft_size_stack(t_list *st);
void	big_sort(t_ps *s_ps);
void	more_arguments(int argc, char **argv, t_ps *s_ps);
void	validation(int argc, char **argv, t_ps *s_ps);
void	cndnls_for_next_movements(char *buff, t_ps *s_ps);
void	more_arguments_bonus(int argc, char **argv, t_ps *s_ps);

#endif
