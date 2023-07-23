/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:56:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 05:09:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	go_get_sp(char **chop, t_vars *paser)
{
	t_sphere	*sphere;
	char		**split;

	sphere = malloc(sizeof(t_sphere));
	split = ft_split(chop[1], ',');
	get_decimal(split[0], &sphere->center.x);
	get_decimal(split[1], &sphere->center.y);
	get_decimal(split[2], &sphere->center.z);
	erase_split(split);
	get_decimal(chop[2], &sphere->radius);
	split = ft_split(chop[3], ',');
	get_digit(split[0], &sphere->color.x);
	get_digit(split[1], &sphere->color.y);
	get_digit(split[2], &sphere->color.z);
	erase_split(split);
	paser->sp = sphere;
}

void	go_get_l(char **chop, t_vars *paser)
{
	t_light	*light;
	char	**split;

	light = malloc(sizeof(t_light));
	split = ft_split(chop[1], ',');
	get_decimal(split[0], &light->origin.x);
	get_decimal(split[1], &light->origin.y);
	get_decimal(split[2], &light->origin.z);
	erase_split(split);
	get_decimal(chop[2], &light->brightness);
	paser->light = *light;
}

void	go_get_c(char **chop, t_vars *paser)
{
	t_camera	*camera;
	char		**split;

	camera = malloc(sizeof(t_camera));
	split = ft_split(chop[1], ',');
	get_decimal(split[0], &camera->origin.x);
	get_decimal(split[1], &camera->origin.y);
	get_decimal(split[2], &camera->origin.z);
	erase_split(split);
	split = ft_split(chop[2], ',');
	get_decimal(split[0], &camera->direction.x);
	get_decimal(split[1], &camera->direction.y);
	get_decimal(split[2], &camera->direction.z);
	erase_split(split);
	get_decimal(chop[3], &camera->fov);
	paser->camera = *camera;
}

void	go_get_a(char **chop, t_vars *paser)
{
	t_ambient	*ambi;
	char		**split;

	ambi = malloc(sizeof(t_ambient));
	split = ft_split(chop[2], ',');
	get_decimal(chop[1], &ambi->ratio);
	get_digit(split[0], &ambi->color.x);
	get_digit(split[1], &ambi->color.y);
	get_digit(split[2], &ambi->color.z);
	erase_split(split);
	paser->ambient = *ambi;
}
