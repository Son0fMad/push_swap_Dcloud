/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:53:43 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/23 00:26:27 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	more_arguments(int argc, char **argv, t_ps *s_ps)
{
	if (argc > 2)
	{
		init_struct(s_ps);
		validation(argc, argv, s_ps);
		s_ps->arr = arr_sort(argc, argv);
		if (argc == 3)
			ft_rot(&s_ps->st_a, "ra");
		else if (argc == 4)
			sort_three(&s_ps->st_a);
		else if (argc == 5 || argc == 6)
			sort_five(s_ps, argc);
		else if (argc > 6)
			big_sort(s_ps);
	}
}

int	main(int argc, char **argv)
{
	t_ps	s_ps;
	char	*s;
	int		i;

	if (argc == 1)
		ft_error("Empty input");
	if (argc == 2)
	{
		s = "a ";
		argv[1] = ft_strjoin(s, argv[1]);
		argv = ft_split(argv[1], ' ');
		if (argv[0] == NULL)
			exit(0);
		i = 1;
		argc = 1;
		while (argv[i])
		{
			check_number(argv[i]);
			argc++;
			i++;
		}
	}
	more_arguments(argc, argv, &s_ps);
}
