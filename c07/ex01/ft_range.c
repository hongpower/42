/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:23:23 by jishong           #+#    #+#             */
/*   Updated: 2022/06/04 20:05:58 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	diff;
	int		*ary;
	long	i;

	if (min >= max)
		return (0);
	diff = (long)max - (long)min;
	if (diff < 0)
		diff *= -1;
	ary = malloc(sizeof(int) * diff);
	if (!ary)
		return (0);
	i = 0;
	while (min < max)
		ary[i++] = min++;
	return (ary);
}
