/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jisuhongeism@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:10:04 by jishong           #+#    #+#             */
/*   Updated: 2022/05/23 00:31:28 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pass;
	char	no;

	pass = 'P';
	no = 'N';
	if (n < 0)
		write(1, &no, 1);
	else
		write(1, &pass, 1);
}

int	main(void)
{
	int	n;

	n = 0;
	ft_is_negative(n);
}
