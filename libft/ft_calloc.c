/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:56:48 by jishong           #+#    #+#             */
/*   Updated: 2022/07/07 16:29:58 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ary;
	size_t			n;

	n = 0;
	ary = (void *)malloc(size * count);
	if (!ary)
		return (ary);
	ft_bzero(ary, count);
	return (ary);
}
