/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:15:26 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 15:55:47 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	unsigned long	i;

	i = 0;
	temp = (char *)s;
	while (temp[i])
		i++;
	temp = temp + i + 1;
	while (i > 0)
	{
		if (*temp == (char)c)
			return (temp);
		temp--;
		i--;
	}
	return (0);
}
