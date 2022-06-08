/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 23:09:15 by jishong           #+#    #+#             */
/*   Updated: 2022/06/08 18:51:48 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <unistd.h>

int	chk_valid_op(char *op)
{
	int	i;

	i = 0;
	if (op[1])
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (OPERATORS[i])
	{
		if (op[0] == OPERATORS[i])
			return (1);
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}

int	ft_op_to_idx(char op)
{
	if (op == '+')
		return (0);
	else if (op == '-')
		return (1);
	else if (op == '*')
		return (2);
	else if (op == '/')
		return (3);
	return (4);
}

void	ft_cal(int a, int b, char op)
{
	t_ops	op_ary[5];
	int		idx;
	int		ans;

	op_ary[0] = sum;
	op_ary[1] = subtract;
	op_ary[2] = multiply;
	op_ary[3] = divide;
	op_ary[4] = modulo;
	idx = ft_op_to_idx(op);
	ans = op_ary[idx](a, b);
	ft_putnbr(ans);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	if (argc != 4)
		return (0);
	if (!chk_valid_op(argv[2]))
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '/' && b == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (argv[2][0] == '%' && b == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_cal(a, b, argv[2][0]);
		write(1, "\n", 1);
	}
	return (1);
}
