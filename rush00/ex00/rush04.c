/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jisuhongeism@gmail.co>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:05:21 by jishong           #+#    #+#             */
/*   Updated: 2022/05/21 13:51:12 by jishong          ###   ########.fr       */
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
			if ((r == 1 && c == 1) || (r == y && c == x && y != 1 && x != 1))
				ft_putchar('A');
			else if ((r == y && c == 1) || (r == 1 && c == x && x != 1))
				ft_putchar('C');
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
