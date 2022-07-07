/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:31:35 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 16:15:53 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dtsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	temp;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	temp = dst_len;
	i = 0;
	if (dst_len > dtsize)
		return (src_len + dtsize);
	while (temp < dtsize - 1 && src[i])
		dst[temp++] = src[i++];
	dst[temp] = '\0';
	return (src_len + dst_len);
}
