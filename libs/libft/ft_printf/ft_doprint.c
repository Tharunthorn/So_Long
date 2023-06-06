/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:23:49 by thmusik           #+#    #+#             */
/*   Updated: 2023/06/07 00:12:58 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

unsigned int	ft_doprint(const char *format, va_list datalist)
{
	unsigned int	outputlenght;
	register char	formatindex;

	outputlenght = 0;
	formatindex = *format;
	while (formatindex != '\0')
	{
		if (formatindex != '%')
		{
			format++;
			outputlenght += ft_putchar(formatindex);
			formatindex = *format;
			continue ;
		}
		formatindex = *++format;
		outputlenght += ft_formatprint(formatindex, datalist);
		formatindex = *++format;
	}
	return (outputlenght);
}
