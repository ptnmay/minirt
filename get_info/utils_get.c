/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:33:03 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/28 04:09:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

int	color2int(int r, int g, int b)
{
	if (r > 255)
		r = 255;
	else if (r < 0)
		r = 0;
	if (g > 255)
		g = 255;
	else if (g < 0)
		g = 0;
	if (b > 255)
		b = 255;
	else if (b < 0)
		b = 0;
	return (r << 16 | g << 8 | b);
}

void	get_vec3(char **xyz, t_vec3 *pos)
{
	pos->x = ft_atof(xyz[0]);
	pos->y = ft_atof(xyz[1]);
	pos->z = ft_atof(xyz[2]);
}

void	get_point(char **xyz, t_point *pos)
{
	pos->x = ft_atof(xyz[0]);
	pos->y = ft_atof(xyz[1]);
	pos->z = ft_atof(xyz[2]);
}

void	get_color(char **colour, int *color)
{
	t_color	col;

	col.x = ft_atoi(colour[0]);
	col.y = ft_atoi(colour[1]);
	col.z = ft_atoi(colour[2]);
	*color = color2int(col.x, col.y, col.z);
}

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

// void	get_vec3(char **xyz, t_vec3 *pos)
// {
// 	pos->x = ft_atof(xyz[0]);
// 	pos->y = ft_atof(xyz[1]);
// 	pos->z = ft_atof(xyz[2]);
// }

// void	get_point(char **xyz, t_point *pos)
// {
// 	pos->x = ft_atof(xyz[0]);
// 	pos->y = ft_atof(xyz[1]);
// 	pos->z = ft_atof(xyz[2]);
// }

// void	get_color(char **colour, t_color *color)
// {
// 	color->x = ft_atoi(colour[0]);
// 	color->y = ft_atoi(colour[1]);
// 	color->z = ft_atoi(colour[2]);
// }

// int	*get_digit(char *digit, int	*color)
// {
// 	*color = ft_atoi(digit);
// 	return (color);
// }

// double	*get_decimal(char *dec, double *decimal)
// {
// 	*decimal = ft_atof(dec);
// 	return (decimal);
// }
