/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:25:25 by jishong           #+#    #+#             */
/*   Updated: 2022/06/08 19:37:17 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ary;
	int	i;

	i = 0;
	ary = malloc(sizeof(int) * length);
	while (i < length)
	{
		ary[i] = f(tab[i]);
		i++;
	}
	return (ary);
}
