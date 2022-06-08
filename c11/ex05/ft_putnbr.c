/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:35:41 by jishong           #+#    #+#             */
/*   Updated: 2022/06/02 16:26:55 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_neg_to_pos(int nb)
{
	unsigned int	temp;

	write(1, "-", 1);
	temp = -1 * nb;
	return (temp);
}

void	ft_putchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_recur(unsigned int nb)
{
	if (nb > 0)
	{
		ft_recur(nb / 10);
		ft_putchar(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	new_nb;

	if (nb < 0)
		new_nb = ft_neg_to_pos(nb);
	else
		new_nb = nb;
	if (new_nb == 0)
		ft_putchar(new_nb);
	else
		ft_recur(new_nb);
}
