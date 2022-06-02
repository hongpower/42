/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:55:11 by jishong           #+#    #+#             */
/*   Updated: 2022/05/28 22:43:51 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	count_len(char *ary)
{
	unsigned int	len;

	len = 0;
	while (*(ary + len) != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	cnt;

	dest_len = count_len(dest);
	src_len = count_len(src);
	cnt = 0;
	while (cnt < src_len)
	{
		dest[dest_len] = src[cnt];
		cnt++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
