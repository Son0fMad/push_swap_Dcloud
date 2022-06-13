/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:51:25 by dcloud            #+#    #+#             */
/*   Updated: 2022/02/23 00:12:58 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*arr_sort(int argc, char **argv)
{
	int	i;
	int	j;
	int	*arr;

	j = 0;
	i = 1;
	arr = malloc(sizeof(int) * (argc - 1));
	if (!arr)
		return (NULL);
	while (i < argc)
		ft_atoi_ps(argv[i++], &arr[j++]);
	i = 0;
	while (i != argc - 1)
	{
		j = 0;
		while (j != argc - 2)
		{
			if (arr[j] > arr[j + 1])
				ft_swap_int(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	return (arr);
}
