/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:25:35 by framiran          #+#    #+#             */
/*   Updated: 2025/05/06 16:35:56 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	/*if (c == 'p')
		return ft_print_ptr(va_arg(args, void *));*/
	if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	/*if (c == 'u')
		return ft_print_unsigned(va_arg(args, unsigned int));*/
	if (c == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	if (c == '%')
		return write(1, "%", 1);
	return 0;
}
