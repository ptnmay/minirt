/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:36:09 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/16 03:04:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../data.h"

int	str_is_digit(char **str)
{
	int	i;
	int	j;
	int	dot;

	i = 0;
	j = 0;
	dot = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]) || str[i][j] == '.')
			{
				if (str[i][j] == '.')
					dot = 1;
				j++;
			}
		}
		i++;
		// if (dot == 1)
	}
	return (-1);
}