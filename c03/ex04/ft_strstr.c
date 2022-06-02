/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:59:40 by jishong           #+#    #+#             */
/*   Updated: 2022/05/30 21:08:40 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_if_substr(char *str, char *to_find, int i)
{
	int	cnt;

	cnt = 0;
	while (to_find[cnt])
	{
		if (str[i] != to_find[cnt])
			return (0);
		cnt++;
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	first_letter;
	int		i;
	int		chk;

	if (*to_find == '\0')
		return (str);
	first_letter = to_find[0];
	i = 0;
	while (str[i])
	{
		if (str[i] == first_letter)
		{
			chk = check_if_substr(str, to_find, i);
			if (chk)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
