/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:45:22 by jishong           #+#    #+#             */
/*   Updated: 2022/06/04 20:06:13 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	diff;
	long	i;

	if (min >= max)
		return (0);
	diff = (long)max - (long)min;
	if (diff < 0)
		diff *= -1;
	*range = malloc(sizeof(int) * diff);
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (diff);
}
