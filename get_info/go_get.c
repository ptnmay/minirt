/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:56:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/25 05:14:50 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	go_get_l(char **chop, t_vars *paser)
{
	t_light	*light;
	char	**split;

	light = malloc(sizeof(t_light));
	split = ft_split(chop[1], ',');
	get_point(split, &light->origin);
	// get_decimal(split[0], &light->origin.x);
	// get_decimal(split[1], &light->origin.y);
	// get_decimal(split[2], &light->origin.z);
	// erase_split(split);
	get_decimal(chop[2], &light->brightness);
	erase_split(chop);
	paser->light = *light;
}

void	go_get_c(char **chop, t_vars *paser)
{
	t_camera	*camera;
	char		**split;

	camera = malloc(sizeof(t_camera));
	split = ft_split(chop[1], ',');
	get_point(split, &camera->origin);
	// get_decimal(split[0], &camera->origin.x);
	// get_decimal(split[1], &camera->origin.y);
	// get_decimal(split[2], &camera->origin.z);
	// erase_split(split);
	split = ft_split(chop[2], ',');
	get_vec3(split, &camera->direction);
	// get_decimal(split[0], &camera->direction.x);
	// get_decimal(split[1], &camera->direction.y);
	// get_decimal(split[2], &camera->direction.z);
	// erase_split(split);
	get_decimal(chop[3], &camera->fov);
	erase_split(chop);
	paser->camera = *camera;
}

void	go_get_a(char **chop, t_vars *paser)
{
	t_ambient	*ambi;
	char		**split;

	ambi = malloc(sizeof(t_ambient));
	split = ft_split(chop[2], ',');
	get_decimal(chop[1], &ambi->ratio);
	get_color(split, &ambi->color);
	erase_split(chop);
	paser->ambient = *ambi;
}
