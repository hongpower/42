/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:52:30 by jishong           #+#    #+#             */
/*   Updated: 2022/06/08 19:06:24 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chk_smaller(char **ary, int min_idx, int idx)
{
	int	i;

	i = 0;
	while (ary[idx][i] || ary[min_idx][i])
	{
		if (ary[idx][i] < ary[min_idx][i])
			return (idx);
		else if (ary[idx][i] > ary[min_idx][i])
			return (0);
		i++;
	}
	return (0);
}

void	ft_print_char(char *ary)
{
	int	i;

	i = 0;
	while (ary[i])
		i++;
}

int	ft_cnt_tab(char **tab)
{
	int	cnt;

	cnt = 0;
	while (tab[cnt])
		cnt++;
	return (cnt);
}

void	ft_sort_string_tab(char **tab)
{
	char	*temp;
	int		min_idx;
	int		i;
	int		start;
	int		len;

	len = ft_cnt_tab(tab);
	start = 0;
	while (start < len)
	{
		i = start;
		min_idx = start;
		while (i < len)
		{
			if (ft_chk_smaller(tab, min_idx, i))
				min_idx = i;
			i++;
		}
		temp = tab[min_idx];
		tab[min_idx] = tab[start];
		tab[start] = temp;
		ft_print_char(tab[start]);
		start++;
	}
	tab[len] = 0;
}
