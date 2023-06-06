/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:17:53 by thmusik           #+#    #+#             */
/*   Updated: 2023/06/07 00:25:23 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

unsigned int	ft_doprint(const char *format, va_list datalist);

int				ft_formatprint(register char format, va_list data);

int				ft_printf(const char *format, ...);

int				ft_putchar(char c);

int				ft_putdecimal(int n);

int				ft_putpointer(unsigned long long ptr);

int				ft_putstring(char *s);

int				ft_putudecimal(unsigned int n);

#endif
