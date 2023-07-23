/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_get_more.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 04:36:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 05:13:41 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	go_get_cy(char **chop, t_vars *paser)
{
	t_cylinder	*cy;
	char		**split;

	cy = malloc(sizeof(t_cylinder));
	split = ft_split(chop[1], ',');
	get_decimal(split[0], &cy->center.x);
	get_decimal(split[1], &cy->center.y);
	get_decimal(split[2], &cy->center.z);
	erase_split(split);
	split = ft_split(chop[2], ',');
	get_decimal(split[0], &cy->normal.x);
	get_decimal(split[1], &cy->normal.y);
	get_decimal(split[2], &cy->normal.z);
	erase_split(split);
	get_decimal(chop[3], &cy->radius);
	get_decimal(chop[4], &cy->height);
	split = ft_split(chop[5], ',');
	get_digit(split[0], &cy->color.x);
	get_digit(split[1], &cy->color.y);
	get_digit(split[2], &cy->color.z);
	erase_split(split);
	paser->cy = cy;
}

void	go_get_pl(char **chop, t_vars *paser)
{
	t_plane	*plane;
	char	**split;

	plane = malloc(sizeof(t_plane));
	split = ft_split(chop[1], ',');
	get_decimal(split[0], &plane->center.x);
	get_decimal(split[1], &plane->center.y);
	get_decimal(split[2], &plane->center.z);
	erase_split(split);
	split = ft_split(chop[2], ',');
	get_decimal(split[0], &plane->normal.x);
	get_decimal(split[1], &plane->normal.y);
	get_decimal(split[2], &plane->normal.z);
	erase_split(split);
	split = ft_split(chop[3], ',');
	get_digit(split[0], &plane->color.x);
	get_digit(split[1], &plane->color.y);
	get_digit(split[2], &plane->color.z);
	erase_split(split);
	paser->pl = plane;
}