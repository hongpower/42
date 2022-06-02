/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:11:48 by jishong           #+#    #+#             */
/*   Updated: 2022/05/30 19:24:20 by jishong          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	temp;

	dest_len = count_len(dest);
	src_len = count_len(src);
	if (dest_len > size)
		return (src_len + size);
	cnt = 0;
	temp = dest_len;
	while (temp + 1 < size && src[cnt] != '\0')
	{
		dest[temp] = src[cnt];
		cnt++;
		temp++;
	}	
	dest[temp] = '\0';
	return (src_len + dest_len);
}
