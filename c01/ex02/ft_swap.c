/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 02:13:47 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 02:17:00 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	printf("%d", *a);
	printf("%d", *b);
}

