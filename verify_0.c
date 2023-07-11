/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/12 02:01:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	verify_a(char **chop)
{
	//size 0.0-1.0 double
	//color 0-255 int
	verify_len(chop, 3);
	printf(BCYN"A ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
}

void	verify_cy(char **chop)
{
	verify_len(chop, 5);
	printf(BCYN"CY ok\n"RESET);
	printf(BGRN"go check info\n\n"RESET);
}
