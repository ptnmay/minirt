/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:08:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/13 03:29:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

void	error(char *s,char **str, int mode)
{
	int	i;
	// int	j;

	i = 0;
	// j = 0;
	ft_putendl_fd(s, 2);
	if (mode == 0 && str == NULL)
		exit(0);
	else if (mode == 1)
	{
		while(str[i])
		{
			// while(str[i][j])
			// {
			// 	free(str[i][j]);
			// 	j++;
			// }
			free(str[i]);
			i++;
		}
		exit(0);
	}
}
