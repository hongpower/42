/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:07:39 by jishong           #+#    #+#             */
/*   Updated: 2022/06/04 23:35:15 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

long long	ft_cnt_letters(char *word)
{
	long long	n;

	n = 0;
	while (word[n])
		n++;
	return (n);
}

void	ft_putstr(char *ary, long size, char *sep, char **strs)
{
	long long	i;
	long long	j;
	long long	cnt;
	long long	sep_len;

	i = 0;
	j = 0;
	cnt = 0;
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ary[cnt++] = strs[i][j++];
		j = 0;
		while (j < sep_len && !(i == size - 1))
			ary[cnt++] = sep[j++];
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*ary;
	long long	sep_len;
	long long	i;
	long long	n_letters;

	i = 0;
	sep_len = 0;
	n_letters = 0;
	if (size == 0)
	{
		ary = malloc(sizeof(char) * 1);
		ary[0] = 0;
		return (ary);
	}
	while (sep[sep_len])
		sep_len++;
	while (i < (long long)size)
		n_letters += ft_cnt_letters(strs[i++]);
	ary = malloc(sizeof(char) * n_letters + ((long long)size - 1) * sep_len);
	ft_putstr(ary, size, sep, strs);
	return (ary);
}
