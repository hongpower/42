/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:01:47 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 01:13:43 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	g_cnt;

int	ft_check_num(int nb)
{
	int	temp;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if ((nb >= 10) && (nb % 10 == 0))
	{
		temp = nb;
		while ((temp % 10) == 0)
		{
			temp = temp / 10;
			g_cnt++;
		}
	}
	return (nb);
}

void	ft_print_zero(void)
{
	while (g_cnt != 0)
	{
		write(1, "0", 1);
		g_cnt--;
	}
}

int	ft_count_len(int nb)
{
	int	len_num;

	len_num = 1;
	while (nb / len_num != 0)
		len_num *= 10;
	len_num /= 10;
	return (len_num);
}

void	ft_putnbr(int nb)
{
	int	len_num;
	int	num;
	int	c;

	g_cnt = 0;
	if (nb <= -2147483647 || nb >= 2147483647 || nb == 0)
	{
		if (nb == 0)
			write(1, "0", 1);
		else if (nb == -2147483647)
			write(1, &nb, 10);
		return ;
	}
	nb = ft_check_num(nb);
	len_num = ft_count_len(nb);
	while (nb != 0)
	{
		num = nb / len_num;
		c = num + '0';
		write(1, &c, 1);
		nb = nb - num * len_num;
		len_num /= 10;
	}
	ft_print_zero();
}
