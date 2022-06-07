/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:55:41 by jishong           #+#    #+#             */
/*   Updated: 2022/06/07 15:14:38 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnum(int nb)
{
	char	temp;

	if (nb == 0)
		return ;
	ft_putnum(nb / 10);
	temp = (nb % 10) + '0';
	write(1, &temp, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		if (par[i].size != 0)
			ft_putnum(par[i].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
