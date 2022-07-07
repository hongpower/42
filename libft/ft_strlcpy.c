/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:07:41 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 15:55:32 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dtsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = 0;
	if (dtsize > 0)
	{
		while (src[i] != '\0' && i < dtsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[len_src])
		len_src++;
	return (len_src);
}
