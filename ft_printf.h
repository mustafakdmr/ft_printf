/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakdemir <hakdemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:43:02 by hakdemir          #+#    #+#             */
/*   Updated: 2024/12/18 10:43:02 by hakdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *a, ...);
int	ft_print_str(char *c);
int	ft_print_nbr(int n);
int	ft_print_char(int c);
int	ft_print_unsigned_nbr(unsigned int n);
int	ft_print_hex(void *arg);
int	ft_print_x(unsigned int nb, int type);
int	ft_base(unsigned long nb, char *alpha);

#endif
