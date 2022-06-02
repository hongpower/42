/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:38:07 by jishong           #+#    #+#             */
/*   Updated: 2022/06/02 19:27:03 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	ans = nb;
	i = nb;
	while (i != 1)
	{
		ans = ans * (i - 1);
		i--;
	}
	return (ans);
}
