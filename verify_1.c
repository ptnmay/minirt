/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:52:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/14 17:38:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	verify_c(char **chop)
{
	char	**ori;
	char	**dir;
	int		i;

	i = 0;
	verify_len(chop, 4);
	ori = ft_split(chop[1], ',');
	dir = ft_split(chop[2], ',');
	//-----------
	printf(BCYN"C ok\n"RESET); //del
	printf(BGRN"go check info\n\n"RESET); //del
	//-----------
	verify_len(ori, 3);
	printf(BCYN"ori num ok, len 3\n"RESET); //del
	verify_len(dir, 3);
	while (dir[i])
	{
		if (ft_atof(ori[i]) > -1.0 && ft_atof(ori[i]) < 1.0)
			error(BYEL"dir between -1.0 - 1.0", 0);
		i++;
	}
	printf(BCYN"dir num ok, len 3\n"RESET); //del
	verify_len(&chop[3], 1);
	printf(BCYN"fov num ok, len 3\n"RESET); //del

}

void	verify_l(char **chop)
{
	verify_len(chop, 4);
	printf(BCYN"L ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
}

void	verify_sp(char **chop)
{
	verify_len(chop, 4);
	printf(BCYN"SP ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
}

void	verify_pl(char **chop)
{
	verify_len(chop, 4);
	printf(BCYN"PL ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
}
