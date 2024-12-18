/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakdemir <hakdemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:43:28 by hakdemir          #+#    #+#             */
/*   Updated: 2024/12/18 10:43:30 by hakdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *c)
{
	int	count;
	int	i;

	if (!c)
		return (ft_print_str("(null)"));
	i = 0;
	count = 0;
	while (c[i])
	{
		count += ft_print_char(c[i]);
		i++;
	}
	return (count);
}
