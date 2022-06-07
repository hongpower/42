/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 00:06:18 by jishong           #+#    #+#             */
/*   Updated: 2022/06/08 00:26:09 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cal(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
	{
		if (b == 0)	
		{
			write(1, "Stop : division by zero", 22);
			return (0);
		}
		return (a / b);
	}
	else if (op == '%')
	{
		if (b == 0)
		{
			write(1, "Stop : modulo by zero", 20);
			return (0);
		}
		return (a % b);
	}
	return (0);
}
