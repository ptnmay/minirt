/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:33:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 02:25:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

// double	*get_coordinates(char *c, double *coordinates)
// {
	
// }

int	*get_digit(char *digit, int	*color)
{
	*color = ft_atoi(digit);
	return (color);
}

double	*get_decimal(char *dec, double *decimal)
{
	*decimal = ft_atof(dec);
	return (decimal);
}
