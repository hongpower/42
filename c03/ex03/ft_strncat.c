/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:48:51 by jishong           #+#    #+#             */
/*   Updated: 2022/05/28 00:34:24 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	count_length(char *ary)
{
	int	len;

	len = 0;
	while (*(ary + len) != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	cnt;

	dest_len = count_length(dest);
	src_len = count_length(src);
	cnt = 0;
	while (cnt < src_len && cnt < nb)
	{
		dest[dest_len] = src[cnt];
		cnt++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
