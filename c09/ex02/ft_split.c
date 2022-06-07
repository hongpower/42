/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:04:27 by jishong           #+#    #+#             */
/*   Updated: 2022/06/06 18:23:28 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_is_char(char c, char *charset)
{
	long	n;
	long	len_sep;

	len_sep = 0;
	while (charset[len_sep])
		len_sep++;
	n = 0;
	while (n < len_sep)
	{
		if (c == charset[n])
			return (0);
		n++;
	}
	return (1);
}

long	ft_cnt_words(char *str, char *charset)
{
	long	i;
	long	word_cnt;

	word_cnt = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_char(str[i], charset) && !ft_is_char(str[i + 1], charset))
			word_cnt++;
		i++;
	}
	return (word_cnt);
}

void	ft_fill_ary(char **end, char **start, char **inner_array, long i)
{
	long	j;

	*inner_array = malloc(sizeof(char) * ((*end) - (*start) + 1));
	j = 0;
	while (*start < (*end - i))
		(*inner_array)[j++] = *((*start)++);
	(*inner_array)[j] = '\0';
}

void	ft_put_letter(char *str, char *charset, char **ary)
{
	char	*start_i;
	char	*end_i;
	long	cnt;
	long	i;

	i = 0;
	cnt = 0;
	start_i = str;
	while (*str)
	{
		if (!ft_is_char(*str, charset) && ft_is_char(*(str + 1), charset))
		{
			end_i = str;
			ft_fill_ary(&end_i, &start_i, &(ary[cnt]), i);
			i = 0;
			cnt++;
			start_i = str + 1;
		}
		else if (!ft_is_char(*str, charset))
			i++;
		str++;
	}
	if (ft_is_char(*(str - 1), charset))
		ft_fill_ary(&str, &start_i, &ary[cnt], i);
}

char	**ft_split(char *str, char *charset)
{
	long	str_len;
	long	word_cnt;
	char	**ary;

	str_len = 0;
	while (str[str_len])
		str_len++;
	while (!ft_is_char(*str, charset))
		str++;
	word_cnt = ft_cnt_words(str, charset);
	str_len = 0;
	while (str[str_len])
		str_len++;
	if (ft_is_char(str[str_len - 1], charset))
		word_cnt++;
	ary = malloc(sizeof(char *) * (word_cnt + 1));
	ft_put_letter(str, charset, ary);
	ary[word_cnt] = 0;
	return (ary);
}
