/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:19:41 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 03:20:53 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_print_ary(int *tab)
{
	printf("%d",tab[0]);
	printf("%d",tab[1]);
	printf("%d",tab[2]);
	printf("%d",tab[3]);
	printf("%d",tab[4]);
	printf("%d",tab[5]);
	printf("%d",tab[6]);
}

int	main(void)
{
	int tab[] = {5,2,8,3,7,9,1};
	int size;

	size = 7;
	ft_sort_int_tab(tab, 7);
	ft_print_ary(tab);
}
