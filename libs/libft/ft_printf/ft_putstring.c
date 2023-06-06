/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:13:08 by thmusik           #+#    #+#             */
/*   Updated: 2023/06/07 00:14:47 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	ft_putstring(char *s)
{
	if (s)
	{
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}
