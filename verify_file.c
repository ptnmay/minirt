/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:13:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/05 08:10:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

// t_data	*get_info(char *info)
// {
// 	int	fd;

// 	fd = open(info[1], O_RDONLY);
// 	if (!fd)
// 		error("fd error", 1);
// 	return()
// }

void	verify_file(char **av)
{
	char	*rt;

	rt = ft_strrchr(av[1], '.');
	if (!(rt && ft_strncmp(ft_strrchr(av[1], '.'), ".rt", 3) == 0))
	{
		error(BRED"file not correct Σ(￣ロ￣lll)"RESET, 0);
	}
	else
		printf(BBLU"file .rt correct (─‿‿─)\n"RESET);
}
