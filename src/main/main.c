/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:03:44 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/03 12:39:46 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game.h"

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc < 2)
		return (1);
	game = (t_game *)malloc(sizeof(t_game));
	if (!game_main)
		return (1);
	game->window = (t_game_window *)malloc(sizeof(t_game_window));
	if (!game->window)
		return (1);
	game->map = (t_game_map *)malloc(sizeof(t_game_map));
	if (!game->map)
		return (1);
	initialize_game(game, argv[1]);
	game_start(game);
	return (0);
}
