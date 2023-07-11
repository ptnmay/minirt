/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:13:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/11 16:38:26 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
		

void	verify_line(char *line)
{
	char	**chopchop;

	chopchop = split_blank(line);
	printf(BMAG"%s\n"RESET, chopchop[0]);
	printf(BMAG"%s\n"RESET, chopchop[1]);
	printf(BMAG"%s\n"RESET, chopchop[2]);
	printf(BMAG"%s\n"RESET, chopchop[3]);
	// printf(BYEL">>> i'm here <<<\n"RESET); //debug
	
}

void	goinfile(int fd)
 {
	char	*gotline;
	
	gotline = get_next_line(fd);
	if (gotline == NULL)
		error(BRED"cannot get_line"RESET,0);
	while (gotline)
	{
		if (gotline[0] == 0)
			error(BRED"line wrong"RESET,0);
		else
		{
			verify_line(gotline);
			// break ;
		}
	}
	
 }

void	verify_file(char **av)
{
	int		fd;
	char	*rt;

	rt = ft_strrchr(av[1], '.');
	if (!(rt && ft_strncmp(ft_strrchr(av[1], '.'), ".rt", 4) == 0))
	{
		error(BRED"file not correct Σ(￣ロ￣lll)"RESET, 0);
	}
	else
	{
		printf(BBLU"file .rt correct (─‿‿─)\n"RESET);
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			error(BRED"cannot open file Σ(￣ロ￣lll)"RESET, 0);
		goinfile(fd);
		close(fd);
	}
}
