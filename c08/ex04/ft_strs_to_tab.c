/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:11:45 by jishong           #+#    #+#             */
/*   Updated: 2022/06/07 15:14:44 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_cpy(char *src, char *dest)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*struct_ary;
	int					i;

	struct_ary = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!struct_ary)
		return (0);
	i = 0;
	while (i < ac)
	{
		struct_ary[i].size = ft_strlen(av[i]);
		struct_ary[i].str = av[i];
		struct_ary[i].copy = malloc(sizeof(char) * (struct_ary[i].size + 1));
		if (!struct_ary[i].copy)
			return (0);
		ft_cpy(av[i], struct_ary[i].copy);
		i++;
	}
	struct_ary[i].str = 0;
	return (struct_ary);
}
