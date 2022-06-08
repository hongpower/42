/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jishong <jishong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:46:28 by jishong           #+#    #+#             */
/*   Updated: 2022/06/08 18:48:23 by jishong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define OPERATORS "+-*/%"

int				ft_atoi(char *str);
int				sum(int a, int b);
int				subtract(int a, int b);
int				multiply(int a, int b);
int				divide(int a, int b);
int				modulo(int a, int b);
unsigned int	ft_neg_to_pos(int nb);
void			ft_putchar(int n);
void			ft_recur(unsigned int nb);
void			ft_putnbr(int nb);

typedef int	(*t_ops)(int, int);

#endif
