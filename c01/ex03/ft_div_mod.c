/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 02:17:19 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 02:20:54 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d", *div);
	printf("%d", *mod);
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 50;
	b = 15;

	ft_div_mod(a, b, &div, &mod);
}
