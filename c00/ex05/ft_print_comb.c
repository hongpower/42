/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:36:35 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 00:35:45 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if ((a != '7') || (b != '8') || (c != '9'))
					write(1, ", ", 2);
				c++;
			}
			b++;
			c = b + 1;
		}
		b = a + 1;
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
