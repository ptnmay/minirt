/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:08:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/27 09:18:22 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paser.h"

void	erase_split(char **av)
{
	// while (*av)
	// 	free(*av++);
	// free (av);
	int	i;

	i = 0;
	if (av == NULL)
		return ;
	while (av[i] != NULL)
	{
		free(av[i]);
		i++;
	}
	free(av);
	// printf("erase_split done :)\n");
}

void	free_error(char *s, char **free)
{
	erase_split(free);
	error(s);
}

void	error(char *s)
{
	ft_putendl_fd(s, 2);
		exit(0);
}
