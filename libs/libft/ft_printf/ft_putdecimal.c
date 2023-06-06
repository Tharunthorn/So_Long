/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:09:53 by thmusik           #+#    #+#             */
/*   Updated: 2023/06/07 00:14:11 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	ft_putdecimal(int n)
{
	int		len;
	char	*number;

	number = ft_itoa(n);
	ft_putstr_fd(number, 1);
	len = ft_strlen(number);
	free(number);
	return (len);
}
