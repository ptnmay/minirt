/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_get_more.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 04:36:47 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/27 08:37:24 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	go_get_cy(char **chop, t_vars *paser)
{
	t_cylinder	*cy;
	char		**split;

	cy = malloc(sizeof(t_cylinder));
	split = ft_split(chop[1], ',');
	get_point(split, &cy->center);
	split = ft_split(chop[2], ',');
	get_vec3(split, &cy->normal);
	get_decimal(chop[3], &cy->radius);
	get_decimal(chop[4], &cy->height);
	split = ft_split(chop[5], ',');
	get_color(split, &cy->color);
	paser->cy = cy;
}

void	go_get_pl(char **chop, t_vars *paser)
{
	t_plane	*plane;
	char	**split;

	plane = malloc(sizeof(t_plane));
	split = ft_split(chop[1], ',');
	get_point(split, &plane->center);
	split = ft_split(chop[2], ',');
	get_vec3(split, &plane->normal);
	split = ft_split(chop[3], ',');
	get_color(split, &plane->color);
	erase_split(split);
	paser->pl = plane;
}

void	go_get_sp(char **chop, t_vars *paser)
{
	t_sphere	*sphere;
	char		**split;

	sphere = malloc(sizeof(t_sphere));
	split = ft_split(chop[1], ',');
	get_point(split, &sphere->center);
	get_decimal(chop[2], &sphere->radius);
	split = ft_split(chop[3], ',');
	get_color(split, &sphere->color);
	erase_split(split);
	paser->sp = sphere;
}
