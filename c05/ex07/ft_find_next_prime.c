/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 23:08:13 by jishong           #+#    #+#             */
/*   Updated: 2022/06/02 23:33:42 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_prime(int nb)
{
	int	n;

	while (nb < 214748367)
	{
		n = 2;
		while (n < nb / 2)
		{
			n = 2;
			while (n < nb / 2)
			{
				if (nb % n == 0)
					break ;
				n++;
			}
			if (nb % n != 0)
				return (nb);
			nb++;
		}
		return (nb);
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb > 1)
	{
		while (n < nb / 2)
		{
			if (nb % n == 0)
			{
				nb = ft_prime(nb);
				return (nb);
			}
			n++;
		}
		return (nb);
	}
	return (2);
}
