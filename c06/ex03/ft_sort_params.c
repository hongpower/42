/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:14:52 by jishong           #+#    #+#             */
/*   Updated: 2022/06/04 12:54:09 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
	{
		write(1, &ary[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **argv)
{
	char	*temp;
	int		min_idx;
	int		i;
	int		start;

	start = 1;
	while (start < ac)
	{
		i = start;
		min_idx = start;
		while (i < ac)
		{
			if (ft_chk_smaller(argv, min_idx, i))
				min_idx = i;
			i++;
		}
		temp = argv[min_idx];
		argv[min_idx] = argv[start];
		argv[start] = temp;
		ft_print_char(argv[start]);
		start++;
	}
	return (0);
}
