/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:25:40 by framiran          #+#    #+#             */
/*   Updated: 2025/05/06 16:27:29 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nmb, int uppercase)
{
	int		written_chars;
	char	*hexa;

	written_chars = 0;
	if (uppercase)
		hexa = "0123456789ABCDEF";
	else
		hexa = "0123456789abcdef";
	if (nmb >= 16)
		written_chars += ft_print_hex(nmb / 16, uppercase);
	written_chars += ft_print_char(hexa[nmb % 16]);
	return (written_chars);
}
