/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:56:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 02:34:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

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
	
	paser->camera = *camera;
}

void	go_get_a(char **chop, t_vars *paser)
{
	t_ambient	*ambi;

	ambi = malloc(sizeof(t_ambient));
	get_decimal(chop[1], &ambi->ratio);
	get_digit(chop[2], &ambi->color);
	paser->ambient = *ambi;
}