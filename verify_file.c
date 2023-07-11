/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:13:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/11 14:41:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
		

void	verify_line(char *line)
{
	char	**chopchop;

	chopchop = ft_split(line, ' ');
	printf("%s\n", chopchop[0]);
	
}

void	goinfile(int fd)
 {
	char	*gotline;
	
	gotline = get_next_line(fd);
	printf(BYEL">>> i'm here <<<\n"RESET);
	if (gotline == NULL)
		error(BRED"cannot get_line"RESET,0);

	while (gotline)
	{
		if (gotline[0])
			verify_line(gotline);
		else
			error(BRED"line wrong"RESET,0);
		
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
	}
}
