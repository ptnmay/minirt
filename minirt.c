/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 06:20:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 02:37:44 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paser.h"

int main(int ac, char **av)
{
	t_vars	*paser;

	paser = NULL;
	if (ac != 2)
		error(BRED"wrong ac Σ(￣ロ￣lll)"RESET, 0);
	verify_file(av);
	paser = malloc(sizeof(t_vars));
	get_info(paser, av[1]);
	//ambi
	// printf(BWHT"paser->ambient.ratio == %f\n"RESET, paser->ambient.ratio);
	// printf(BWHT"paser->ambient.color == %d\n"RESET, paser->ambient.color);
	//camera
	printf(BMAG"paser->camera.origin.x == %f\n"RESET, paser->camera.origin.x);
	printf(BMAG"paser->camera.origin.y == %f\n"RESET, paser->camera.origin.y);
	printf(BMAG"paser->camera.origin.z == %f\n"RESET, paser->camera.origin.z);
	printf(BGRN"paser->camera.direction.x == %f\n"RESET, paser->camera.direction.x);
	printf(BGRN"paser->camera.direction.y == %f\n"RESET, paser->camera.direction.y);
	printf(BGRN"paser->camera.direction.z == %f\n"RESET, paser->camera.direction.z);
	// printf(BBLU"paser->camera.fov == %d\n", paser->camera.fov);
	//light
	
	
}

	//if check ok -> split to struct
		//struct for A -> av[0]
		//struct for C -> av[1]
		//struct for L -> av[2]
		//struct for pl -> av[3]
		//strcut fot sp -> av[4]
		//struct for cy -> av[5]
