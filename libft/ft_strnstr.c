/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:29:03 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 15:55:43 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	char	*tmp;

	tmp = (char *)haystack;
	while (len && *tmp)
	{
		if (tmp[0] == needle[0])
		{
			j = 0;
			while (needle[j] && tmp[j] && needle[j] == tmp[j] && j < len)
				j++;
			if (!needle[j])
				return (tmp);
		}
		len--;
		tmp++;
	}
	return (0);
}
