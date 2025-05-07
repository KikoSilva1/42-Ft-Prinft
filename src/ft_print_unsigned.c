/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:26:09 by framiran          #+#    #+#             */
/*   Updated: 2025/05/07 14:31:00 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calculate_divisions(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	int_power(int base, int exp)
{
	int	result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

int	ft_print_unsigned(unsigned int n)
{
	unsigned int	number;
	int				written_chars;
	int				max_divisions;

	written_chars = 0;
	if (n == 0)
	{
		written_chars += ft_print_char('0');
		return (written_chars);
	}
	max_divisions = calculate_divisions(n);
	while (max_divisions > 0)
	{
		number = n / int_power(10, max_divisions - 1);
		written_chars += ft_print_char('0' + number % 10);
		max_divisions--;
	}
	return (written_chars);
}
