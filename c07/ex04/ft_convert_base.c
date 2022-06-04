/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:01:05 by jishong           #+#    #+#             */
/*   Updated: 2022/06/04 23:50:50 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_chk_once(char *base);
int		ft_chk_valid(char *base);
long	ft_recur(char *str, char *base, long ans, long base_n);
char	*ft_atoi(char *str, long *sign);
int		ft_atoi_base(char *str, char *base);

void	ft_putchar(char c, char *ary)
{
	long	i;

	i = 0;
	while (ary[i] != '\0')
		i++;
	ary[i] = c;
}

void	ft_recur_nb(long nbr_n, long nb, char *base, char *ary)
{
	long	base_n;
	
	base_n = 0;
	while (base[base_n])
		base_n++;
	/*if (nb < 0)
		printf("%c", ary[0]);*/
	if (nb != 0)
	{
		if (nb < 0)
			ft_recur_nb(nbr_n, nb * -1 / base_n, base, ary);
		else
			ft_recur_nb(nbr_n, nb / base_n, base, ary);
		ft_putchar(base[nb % base_n], ary);
	}
}

void	ft_putnbr(long new_nbr_n, long nb, char *base, char *ary)
{
	long	new_nb;

	/*if (nb < 0)
		new_nb = nb * -1;
	else*/
	new_nb = nb;
	if (new_nb == 0)
		ft_putchar(new_nb, ary);
	else
		ft_recur_nb(new_nbr_n, new_nb, base, ary);
}

long	ft_cnt_len(long new_nbr)
{
	long	temp;
	long	new_nbr_n;

	new_nbr_n = 0;
	if (new_nbr < 0)
	{
		new_nbr *= -1;
		new_nbr_n++;
	}
	temp = new_nbr;
	while (temp > 0)
	{
		temp = temp / 10;
		new_nbr_n++;
	}
	return (new_nbr_n++);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	// 보완할 부분 : malloc은 나중에 만들기 왜냐하면  진수마다 크기가 다를 테니까 하 ㅜㅜㅜㅜㅜ 아니면 따로 세던가...
	long	new_nbr_n;
	long	new_nbr;
	char	*ary;

	new_nbr_n = 0;
	new_nbr = ft_atoi_base(nbr, base_from);
	if (new_nbr)
	{
		new_nbr_n = ft_cnt_len(new_nbr);
		printf("new_nbr_n : %ld\n", new_nbr_n);
		ary = malloc(new_nbr_n * sizeof(char));
		if (new_nbr < 0)
			ary[0] = '-';
		ft_putnbr(new_nbr_n, new_nbr, base_to, ary);
		return (ary);
	}
	return (0);
}
