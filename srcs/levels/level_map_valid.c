/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_map_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:51:31 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/13 15:21:40 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/level.h"

int	is_map_valid_player(char **map, t_dimensions dimensions)
{
	int	player_count;
	int	i;
	int	j;

	player_count = 0;
	i = 0;
	while (i < dimensions.height)
	{
		j = 0;
		while (j < dimensions.width)
		{
			if (map[i][j] == 'P')
				player_count++;
			j++;
		}
		i++;
	}
	if (player_count != 1)
		return (0);
	return (1);
}

int	is_map_valid_exit(char **map, t_dimensions dimensions)
{
	int	exit_count;
	int	i;
	int	j;

	exit_count = 0;
	i = 0;
	while (i < dimensions.height)
	{
		j = 0;
		while (j < dimensions.width)
		{
			if (map[i][j] == 'E')
				exit_count++;
			j++;
		}
		i++;
	}
	if (exit_count != 1)
		return (0);
	return (1);
}

int	is_map_valid_collect(char **map, t_dimensions dimensions)
{
	int	collect_count;
	int	i;
	int	j;

	collect_count = 0;
	i = 0;
	while (i < dimensions.height)
	{
		j = 0;
		while (j < dimensions.width)
		{
			if (map[i][j] == 'C')
				collect_count++;
			j++;
		}
		i++;
	}
	if (collect_count < 1)
		return (0);
	return (1);
}

int	is_map_valid_wall(char **map, t_dimensions dimensions)
{
	int	i;
	int	j;

	i = 0;
	while (i < dimensions.height)
	{
		j = 0;
		while (j < dimensions.width)
		{
			if (map[0][j] != '1' || map[dimensions.height - 1][j] != '1'
				|| map[i][0] != '1' || map[i][dimensions.width - 1] != '1')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_map_valid(char **map, t_dimensions dimensions)
{
	if (is_map_valid_player(map, dimensions)
		&& is_map_valid_exit(map, dimensions)
		&& is_map_valid_collect(map, dimensions)
		&& is_map_valid_wall(map, dimensions))
		return (1);
	return (0);
}
