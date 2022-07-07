/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:49 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 15:55:12 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen3(char *s1);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*ary;

	i = 0;
	len = ft_strlen(s1);
	ary = malloc(len + 1);
	if (!ary)
		return (0);
	while (i < len)
	{
		ary[i] = s1[i];
		i++;
	}
	ary[i] = 0;
	return (ary);
}

size_t	ft_strlen3(char *s1)
{
	size_t	n;

	n = 0;
	while (*s1)
		s1++;
		n++;
	return (n);
}
