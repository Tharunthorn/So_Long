/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:02:14 by thmusik           #+#    #+#             */
/*   Updated: 2023/06/07 00:13:27 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list			datalist;
	unsigned int	outputlenght;

	va_start(datalist, format);
	outputlenght = ft_doprint(format, datalist);
	va_end(datalist);
	return (outputlenght);
}
