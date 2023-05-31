/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:03:44 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/31 10:42:54 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game.h"

int	main(int argc, char **argv)
{
	game	*game_main;

	if (argc < 2)
		return (1);
	game_main = (game *)malloc(sizeof(game));
	initialize_game(game_main, argv[1]);
	game_start(game_main);
	free(game_main->window);
	free(game_main->map);
	return (0);
}