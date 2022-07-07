/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:20:59 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 15:54:48 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t_dst;
	unsigned int	n;
	unsigned char	tmp;

	n = 0;
	t_dst = dst;
	while (n < len)
	{
		tmp = ((unsigned char *)src)[n];
		t_dst[n++] = tmp;
	}
	return (dst);
}
