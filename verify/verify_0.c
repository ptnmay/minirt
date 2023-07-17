/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/17 22:19:21 by psaeyang         ###   ########.fr       */
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
	verify_len(chop, 6);
	printf(BCYN"CY ok\n"RESET); //del
}
