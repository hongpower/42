/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 02:38:57 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 04:19:57 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev_tab[2147483647];
	int cnt;
	int idx;

	idx = size;
	cnt = 0;
	idx--;
	while (cnt < size)
	{
		rev_tab[cnt] = tab[idx];
		cnt++;
		idx--;
	}
	while (idx < size)
	{
		tab[idx] = rev_tab[idx];
		idx++;
	}
}

void	ft_print_ary(int *tab)
{
	printf("%d",tab[0]);

	printf("%d",tab[1]);
	printf("%d",tab[2]);

	printf("%d",tab[3]);

	printf("%d",tab[4]);

	printf("%d",tab[5]);

	printf("%d",tab[6]);

}

int	main(void)
{
	int	tab[] = {5, 2, 8, 3, 7, 9, 1};
	int size;

	size = 7;
	ft_rev_int_tab(tab, 7);
	ft_print_ary(tab);
}
