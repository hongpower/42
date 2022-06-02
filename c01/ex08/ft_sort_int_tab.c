/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 02:59:40 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 03:21:03 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start_idx;
	int	min_val;
	int	min_idx;
	int	temp;
	int	cnt;

	start_idx = 0;
	while (start_idx < size)
	{
		min_val = 2147483647;
		cnt = start_idx;
		while (cnt < size)
		{
			if (tab[cnt] < min_val)
			{
				min_val = tab[cnt];
				min_idx = cnt;
			}
			cnt++;
		}
		temp = tab[start_idx];
		tab[start_idx] = min_val;
		tab[min_idx] = temp;
		start_idx++;
	}
}
