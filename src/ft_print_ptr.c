/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:26:00 by framiran          #+#    #+#             */
/*   Updated: 2025/05/07 12:46:01 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_uintptr(uintptr_t nmb)
{
	int		written_chars;
	char	*hexa;

	written_chars = 0;
	hexa = "0123456789abcdef";
	if (nmb >= 16)
		written_chars += ft_print_hex_uintptr(nmb / 16);
	written_chars += ft_print_char(hexa[nmb % 16]);
	return (written_chars);
}

int	ft_print_ptr(void *ptr)
{
	int			written_chars;
	uintptr_t	val;

	val = (uintptr_t)ptr;
	if (val == 0)
	{
		written_chars = write(1, "(nil)", 5);
		return (written_chars);
	}
	else
	{
		written_chars = write(1, "0x", 2);
		written_chars += ft_print_hex_uintptr(val);
		return (written_chars);
	}
}
