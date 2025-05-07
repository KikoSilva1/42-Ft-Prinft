/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:26:06 by framiran          #+#    #+#             */
/*   Updated: 2025/05/06 16:44:35 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char* str)
{
	int	i;

	if (!str)
		return (ft_print_str("(null)"));

	i = 0;
	while(str[i])
	{
		ft_print_char(str[i]);
		i++;
	}
	return (i);
}
