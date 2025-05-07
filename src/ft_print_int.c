/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:25:50 by framiran          #+#    #+#             */
/*   Updated: 2025/05/07 12:44:37 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calculate_divisions(int n)
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

int	ft_print_int(int n)
{
	int	number;
	int	written_chars;
	int	max_divisions;

	written_chars = 0;
	if (n == -2147483648)
	{
		return (ft_print_str("-2147483648"));
	}
	if (n < 0)
	{
		written_chars += ft_print_char('-');
		n = -n;
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
