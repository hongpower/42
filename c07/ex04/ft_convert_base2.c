/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:17:37 by jishong           #+#    #+#             */
/*   Updated: 2022/06/04 23:38:04 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chk_once(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_chk_valid(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	if (i < 1)
		return (0);
	if (ft_chk_once(base))
		return (1);
	else
		return (0);
}

long	ft_recur(char *str, char *base, long ans, long base_n)
{
	long	i;

	i = 0;
	if (*str)
	{
		while (*str != base[i] && *str)
			i++;
		if (i >= base_n)
			return (ans);
		ans = ans * base_n + i;
		str++;
		ans = ft_recur(str, base, ans, base_n);
	}
	return (ans);
}

char	*ft_atoi(char *str, long *sign)
{
	int	ans;

	*sign = 1;
	ans = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	long	sign;
	long	base_n;
	long	ans;

	sign = 1;
	base_n = 0;
	str = ft_atoi(str, &sign);
	if (*str)
	{
		if (ft_chk_valid(base))
		{
			while (base[base_n])
				base_n++;
			if (*str == '-')
			{
				sign *= -1;
				str++;
			}	
			ans = (ft_recur(str, base, 0, base_n) * sign);
			return ((int)ans);
		}
	}
	return (0);
}
