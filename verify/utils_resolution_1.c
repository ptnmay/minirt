/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_resolution_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 02:40:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/17 19:10:22 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	util_radius(char *radius)
{
	int	i;

	i = 0;
	if (!str_is_decimal(radius) && ft_strlen(radius) != 1)
		error(BYEL"radius not correct"RESET, 0);
	printf(BCYN"radius ok next\n"RESET); //del
}
