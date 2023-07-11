/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:52:52 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/12 01:48:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	verify_c(char **chop)
{
	verify_len(chop, 4);
	printf(BCYN"C ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
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