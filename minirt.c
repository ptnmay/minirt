/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 06:20:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 06:12:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paser.h"

int	main(int ac, char **av)
{
	t_vars	*paser;

	paser = NULL;
	if (ac != 2)
		error(BRED"wrong ac Σ(￣ロ￣lll)"RESET);
	verify_file(av);
	paser = malloc(sizeof(t_vars));
	get_info(paser, av[1]);
	print_ambi(paser);
	print_camera(paser);
	print_light(paser);
	print_sp(paser);
	print_pl(paser);
	print_cy(paser);
}
