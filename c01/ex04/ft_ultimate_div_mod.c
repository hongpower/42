/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 02:21:12 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 02:24:50 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
	printf("%d", *a);
	printf("%d", *b);	
}

int	main(void)
{
	int	a;
	int	b;

	a = 50;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
}

