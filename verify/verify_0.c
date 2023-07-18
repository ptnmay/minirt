/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/18 15:49:40 by psaeyang         ###   ########.fr       */
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
	util_ratio(chop, 1);
	color = ft_split(chop[2], ',');
	util_color(color, 3);
	printf(BGRN"ambi checked. all ok\n"RESET); //del
	printf(BWHT"===============================\n"RESET); //del
}

void	verify_cy(char **chop)
{
	char	**center;
	char	**normal;
	char	**color;
	
	verify_len(chop, 6);
	center = ft_split(chop[1], ',');
	normal = ft_split(chop[2], ',');
	color = ft_split(chop[5], ',');
	printf(BCYN"CY ok\n"RESET); //del
}
