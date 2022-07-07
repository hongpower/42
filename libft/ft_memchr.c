/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:15:21 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 16:04:49 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (*tmp && n)
	{
		if (*tmp == (unsigned char)c)
			break ;
		n--;
		tmp++;
	}
	if (n == 0)
		return (0);
	return (tmp);
}
