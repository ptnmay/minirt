/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/13 03:29:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	verify_a(char **chop)
{
	int		i;
	char	**color;

	i = 0;
	verify_len(chop, 3);
	printf(BCYN"A ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
	if ((chop[1][0] == '0' || chop[1][0] == '1') && chop[1][1] == '.')
	{
		while (ft_atoi(&chop[1][2]) != i && i != 11)
			i++;
		if (i == 10 || (chop[1][0] == '1' && chop[1][2] != '0'))
			error(BYEL"ratio not correct"RESET, NULL, 0);
	}
	else
		error(BYEL"ratio not correct"RESET, NULL, 0);
	printf(BMAG"ratio ok next\n"RESET);

	color = ft_split(chop[2], ',');
	i = 0;
	verify_len(color, 3);
	while (i < 3)
	{
		if (ft_atoi(color[i]) > 255 || color[i][0] == '-')
			error(BYEL"color not correct"RESET, color, 0);
		i++;
	}
	printf(BCYN"color ok, ambi checked. all ok\n"RESET);
}

void	verify_cy(char **chop)
{
	verify_len(chop, 5);
	printf(BCYN"CY ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
}
