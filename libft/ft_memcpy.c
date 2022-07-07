/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:36:50 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 15:54:23 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	temp;
	unsigned char	*t_dst;

	temp = 0;
	t_dst = dst;
	while (temp < n)
	{
		t_dst[temp] = ((unsigned char *)src)[temp];
		temp++;
	}
	return (t_dst);
}
