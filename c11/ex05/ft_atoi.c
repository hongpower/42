/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:02:22 by jishong           #+#    #+#             */
/*   Updated: 2022/06/02 12:25:11 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	ans;

	sign = 1;
	ans = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (sign * ans);
}
