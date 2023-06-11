/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:02:41 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/11 10:55:06 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		return (0);
	game = game_init(argv[1]);
	game_run(game);
	return (0);
}
