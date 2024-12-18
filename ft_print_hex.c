/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakdemir <hakdemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:43:38 by hakdemir          #+#    #+#             */
/*   Updated: 2024/12/18 10:43:38 by hakdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(void *arg)
{
	int				count;
	unsigned long	address;
	char			*alpha;

	alpha = "0123456789abcdef";
	address = (unsigned long)arg;
	count = 0;
	if (address == 0)
	{
		count += ft_print_str("(nil)");
	}
	else
	{
		count += ft_print_str("0x");
		count += ft_base(address, alpha);
	}
	return (count);
}
