/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_brightness.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 04:19:50 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/17 04:29:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	util_ratio_light(char **brightness)
{
	int	i;

	i = 0;
	if ((brightness[2][0] == '0' || brightness[2][0] == '1')
	&& brightness[2][1] == '.' && ft_strlen(brightness[1]) == 3)
	{
		while (ft_atoi(&brightness[2][2]) != i && i != 11)
			i++;
		if (i == 10 || (brightness[2][0] == '1' && brightness[1][2] != '0'))
			error(BYEL"brightness not correct"RESET, 0);
	}
	else
		error(BYEL"brightness not correct"RESET, 0);
	printf(BCYN"brightness ok next\n"RESET); //del
}