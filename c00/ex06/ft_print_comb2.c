/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:48:53 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 00:09:27 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_int_to_char(int i)
{
	char	ten;
	char	one;

	ten = i / 10 + '0';
	one = i % 10 + '0';
	ft_putstr(ten, one);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 1;
	while (f <= 98)
	{
		while (s <= 99)
		{
			ft_int_to_char(f);
			write(1, " ", 1);
			ft_int_to_char(s);
			if (f != 98 || s != 99)
				write(1, ", ", 2);
			s++;
		}
	f++;
	s = f + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
