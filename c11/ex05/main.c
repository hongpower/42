/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 23:09:15 by jishong           #+#    #+#             */
/*   Updated: 2022/06/08 00:32:08 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_cal.c"
#include "ft_atoi.c"

int	chk_valid_op(char op)
{
	char	operator_ary[5];
	int	i;

	i = 0;
	operator_ary[0] = '+';
	operator_ary[1] = '-';
	//operator_ary = {'+', '-', '/', '%', '*'};
	while (operator_ary[i])
	{
		if (op == operator_ary[i])
			return (1);
		i++;
	}
	write(1, "0", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int ans;

	i = 0;
	if (argc != 4)
		return (0);
	if (!chk_valid_op(argv[2][0]))
		return (0);
	ans = ft_cal(ft_atoi(argv[0]), ft_atoi(argv[1]), argv[2][0]);
	return (ans);
}
