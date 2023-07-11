/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:54:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/11 18:53:16 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	verify_a(char **chop)
{
	verify_len(chop, 3);
	printf(BGRN"go check info\n"RESET);
}

void	verify_cy(char **chop)
{
	verify_len(chop, 5);
	printf(BGRN"go check info\n"RESET);
}
