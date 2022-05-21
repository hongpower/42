/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:39:50 by jishong           #+#    #+#             */
/*   Updated: 2022/05/21 15:42:11 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1) && ((c == 1) || (c == x)))
				ft_putchar('o');
			else if ((r == y) && ((c == 1) || (c == x)))
				ft_putchar('o');
			else if ((r == 1) || (r == y))
				ft_putchar('-');
			else if ((c == 1) || (c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
		hey
	}
}
