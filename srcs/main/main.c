/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:02:41 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 17:53:10 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"

int	main(int argc, char **argv)
{
	t_game	game;
	t_level	level;
	char	*map_file;

	if (argc != 2)
		return (0);
	map_file = (char *)malloc(sizeof(char) * ft_strlen(argv[1]) + 1);
	if (!map_file)
		return (0);
	ft_strlcpy(map_file, argv[1], ft_strlen(argv[1]) + 1);
	level = level_init(map_file);
	game = game_init(level);
	game_run(game);
	return (0);
}
