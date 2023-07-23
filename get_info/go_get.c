/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:56:46 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 01:15:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

double	*get_decimal(char *dec, double *decimal)
{
	*decimal = ft_atof(dec);
	printf("get_decimal | decimal == %f\n", *decimal);
	return (decimal);
}

void	go_get_a(char **chop, t_vars *paser)
{
	t_ambient	*ambi;

	ambi = malloc(sizeof(t_ambient));
	printf("go_get_a | chop[1] == %s\n", chop[1]);
	get_decimal(chop[1], &ambi->ratio);
	printf("get_a | decimal == %f\n", ambi->ratio);
	paser->ambient = *ambi;
	(void)paser;
}