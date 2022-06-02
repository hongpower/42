/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:21:06 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 00:44:04 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_idx;

int	ft_recur(int g_idx, char *ary, int n)
{
	int	max;
	int	temp;

	if (g_idx >= n)
		return (0);
	max = 10 - n + g_idx;
	if (g_idx != 0)
		ary[g_idx] = (ary[g_idx - 1]) + 1;
	while (ary[g_idx] < max + '0')
	{
		temp = g_idx;
		ft_recur(++temp, ary, n);
		write(1, ary, n);
		write(1, ", ", 2);
		ary[g_idx] = (ary[g_idx]) + 1;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	char	ary[10];

	if (n >= 10 || n <= 0)
		return ;
	g_idx = 0;
	while (g_idx < n)
	{
		ary[g_idx] = g_idx + '0';
		g_idx++;
	}
	g_idx = 0;
	ft_recur(g_idx, ary, n);
	write(1, ary, n);
}

int	main(void)
{
	ft_print_combn(4);
}
