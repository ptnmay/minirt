/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/17 03:05:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"


void	verify_a(char **chop)
{
	int		i;
	char	**color;

	i = 0;
	verify_len(chop, 3);
	printf(BCYN"A ok\n"RESET); //del
	printf(BRED"ratio --> %s\n"RESET, chop[1]);
	printf(BRED"ratio len == %zu\n"RESET, ft_strlen(chop[1]));
	util_ratio(chop);
	color = ft_split(chop[2], ',');
	verify_len(color, 3);
	util_color(color);
	// while (i < 3)
	// {
	// 	if (ft_atoi(color[i]) > 255 || color[i][0] == '-' || ft_strchr(color[i], '.') != NULL)
	// 		error(BYEL"color not correct"RESET, 0);
	// 	i++;
	// }
	printf(BCYN"color ok, ambi checked. all ok\n"RESET); //del
	printf(BWHT"===============================\n"RESET);
}

void	verify_cy(char **chop)
{
	verify_len(chop, 5);
	printf(BCYN"CY ok\n"RESET); //del
	printf(BGRN"go check info\n\n"RESET); //del
}
