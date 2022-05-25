/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:16:39 by jishong           #+#    #+#             */
/*   Updated: 2022/05/25 23:45:09 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;
	int		temp;
	int		first;
	int		second;

	i = 0;
	temp = 100;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{	
			write(1, "\\", 1);
			first = str[i] / 16;
			second = str[i] % 16;
			write(1, &hex[first], 1);
			write(1, &hex[second], 1);
		}		
		else
			write(1, &str[i], 1);
	i++;
	}
}

int main()
{
	char *str1 = "asdff\nsdfasdf";
	char *str2 = "\x80";
	char *str3 = "\xff";

	ft_putstr_non_printable(str1);
	write(1, "\n", 1);
	ft_putstr_non_printable(str2);

	printf("unsigned char 80 = %d\n", (unsigned char)*str2);
	printf("char = 80 %d\n", *str2);
	printf("unsigned char ff = %d\n", (unsigned char)*str3);
	printf("char = ff %d\n", *str3);
}
