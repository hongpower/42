/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:28:38 by jishong           #+#    #+#             */
/*   Updated: 2022/06/02 22:02:26 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_nth_n(int *ary, int index)
{
	int	temp;

	if (index > 0)
	{
		temp = ary[0] + ary[1];
		ary[0] = ary[1];
		ary[1] = temp;
		ft_get_nth_n(ary, --index);
	}
	return (ary[0]);
}

int	ft_fibonacci(int index)
{	
	int	ary[2];

	ary[0] = 0;
	ary[1] = 1;
	if (index < 0)
		return (-1);
	return (ft_get_nth_n(ary, index));
}
