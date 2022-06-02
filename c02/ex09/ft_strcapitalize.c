/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:46:57 by jishong           #+#    #+#             */
/*   Updated: 2022/05/25 22:50:37 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] <= 122 && str[i] >= 97)
		str[i] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-')
		{
			if (str[i] <= 122 && str[i] >= 97)
				str[i] -= 32;
		}
		else
		{
			if (str[i] <= 90 && str[i] >= 65)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
