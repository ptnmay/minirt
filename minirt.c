/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 06:20:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/21 04:27:27 by psaeyang         ###   ########.fr       */
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
	// paser = malloc(sizeof(t_data));
	paser = init();
	// (void)data;
	// data = get_info(av[1]);
}



	//check ac == 2; *
	//check file .rt; *
		//check len av[i] < 6 or 5?;
		//check av[0 - 5] == A, C, L, pl, sp, cy;
		//check av[0][i] is
		//check av[1][i] is
		//check av[2][i] is
		//check av[3][i] is
		//check av[4][i] is
		//check av[5][i] is
	//if check ok -> split to struct
		//struct for A -> av[0]
		//struct for C -> av[1]
		//struct for L -> av[2]
		//struct for pl -> av[3]
		//strcut fot sp -> av[4]
		//struct for cy -> av[5]
