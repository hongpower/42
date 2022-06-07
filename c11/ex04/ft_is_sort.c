/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:50:24 by jishong           #+#    #+#             */
/*   Updated: 2022/06/07 23:04:36 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	order;
	int sign;
	int	i;

	order = 0;
	sign = 0;
	i = 0;
	while (i < length - 1)
	{
		sign = f(tab[i], tab[i + 1]);
		if (sign != 0 && order == 0)
		{
			if (sign > 0)
				order = 1;
			else
				order = -1;
			printf("order : %d\n", order);
		}
		else if (sign > 0 && order < 0)
			return (0);
		else if (sign < 0 && order > 0)
			return (0);
		i++;
	}
	return (1);
}
