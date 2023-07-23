/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:08:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 05:08:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paser.h"

void	erase_split(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

void	error(char *s, int mode)
{
	// int	i;
	// int	j;
	// i = 0;
	// j = 0;
	ft_putendl_fd(s, 2);
	if (mode == 0)
		exit(0);
	// else if (mode == 1)
	// {
	// 	while(str[i])
	// 	{
	// 		// while(str[i][j])
	// 		// {
	// 		// 	free(str[i][j]);
	// 		// 	j++;
	// 		// }
	// 		free(str[i]);
	// 		i++;
	// 	}
	// 	exit(0);
	// }
}
