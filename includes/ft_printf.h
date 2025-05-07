/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:03:37 by framiran          #+#    #+#             */
/*   Updated: 2025/05/07 14:25:40 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_handle_format(char c, va_list args);
int	ft_print_int(int n);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_hex(unsigned int n, int uppercase);
int	ft_print_ptr(void *ptr);
int	ft_print_unsigned(unsigned int n);

#endif
