/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_verify01.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:08:00 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/15 23:21:02 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../data.h"

void	util_c_dir(char *direction)
{
	if (direction[0] == '-')
	{
		if (direction[1] != '1' || (direction[2] == '.' && direction[3] != '0'))
			error(BYEL"dir between -1.0 - 1.0", 0);
	}
	else
	{
		if (ft_atof(direction) > 1.0)
			error(BYEL"dir between -1.0 - 1.0", 0);
	}
}

void	util_c_ori(char **ori)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (i < 3)
	{
		if (ft_atof(ori[i]) == 0)
			error(BYEL"error ori num"RESET, 0);
		printf("%f\n", ft_atof(ori[i]));
		i++;
	}
}
