/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:52:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/17 19:10:05 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	verify_c(char **chop)
{
	char	**ori;
	char	**dir;
	int		i;

	i = 0;
	verify_len(chop, 4);
	ori = ft_split(chop[1], ',');
	dir = ft_split(chop[2], ',');
	printf(BCYN"C ok\n"RESET); //del
	util_ori(ori);
	printf(BCYN"ori num ok, len 3\n"RESET); //del
	verify_len(dir, 3);
	while (i != 3)
	{
		util_dir(dir[i]);
		i++;
	}
	printf(BCYN"dir num ok, len 3\n"RESET); //del
	verify_len(&chop[3], 1);
	util_fov(chop[3]);
	printf(BCYN"fov num ok, len 3\n"RESET); //del
	printf(BWHT"===============================\n"RESET); //del
}

void	verify_l(char **chop)
{
	char	**origin;

	verify_len(chop, 3);
	origin = ft_split(chop[1], ',');
	printf(BCYN"L ok\n"RESET);
	util_ori(origin);
	util_ratio(chop, 2);
	printf(BWHT"===============================\n"RESET); //del
}

void	verify_sp(char **chop)
{
	char	**center;

	center = ft_split(chop[1], ',');
	verify_len(chop, 4);
	printf(BCYN"SP ok\n"RESET);
	util_ori(center);
	util_radius(chop[2]);
	printf(BWHT"===============================\n"RESET); //del
}

void	verify_pl(char **chop)
{
	verify_len(chop, 4);
	printf(BCYN"PL ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
	printf(BWHT"===============================\n"RESET); //del
}
