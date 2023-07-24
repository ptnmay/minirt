/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:13:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/24 22:56:10 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../paser.h"

void	verify_len(char **line, int len)
{
	int	i;

	i = 0;
	while (line[i])
		i++;
	if (i != len)
		free_error(BYEL"--len not correct--"RESET, line);
	printf(BMAG"--len correct--\n"RESET);
}

void	verify_line(char *line)
{
	char	**chopchop;

	chopchop = split_blank(line);
	if (chopchop[0][0] == 'A')
		verify_a(chopchop);
	else if (chopchop[0][0] == 'C')
		verify_c(chopchop);
	else if (chopchop[0][0] == 'L')
		verify_l(chopchop);
	else if (chopchop[0][0] == 's' && chopchop[0][1] == 'p')
		verify_sp(chopchop);
	else if (chopchop[0][0] == 'p' && chopchop[0][1] == 'l')
		verify_pl(chopchop);
	else if (chopchop[0][0] == 'c' && chopchop[0][1] == 'y')
		verify_cy(chopchop);
	else
		free_error(BRED"info wrong"RESET, chopchop);
}

void	goinfile(int fd)
{
	int			i;
	char		*gotline;
	static int	cnt;
	int	j;

	i = 0;
	j = 0;
	gotline = get_next_line(fd);
	if (gotline == NULL)
		error(BRED"cannot get_line"RESET);
	cnt = ft_splitcntt(gotline);
	while (gotline && i < cnt)
	// while (j < 2)
	{
		printf("gotline == %s\n", gotline);
		if (i_c_comment(gotline) == 0)
			verify_line(gotline);
		i++;
		// j++;
		free(gotline); //add
		gotline = get_next_line(fd);
		cnt = ft_splitcntt(gotline);
		i = 0;
	}
}

void	verify_file(char **av)
{
	int		fd;
	char	*rt;

	rt = ft_strrchr(av[1], '.');
	if (!(rt && ft_strncmp(ft_strrchr(av[1], '.'), ".rt", 4) == 0))
		error(BRED"file not correct Σ(￣ロ￣lll)"RESET);
	else
	{
		printf(BBLU"file .rt correct (─‿‿─)\n"RESET);
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
			error(BRED"cannot open file Σ(￣ロ￣lll)"RESET);
		goinfile(fd);
		close(fd);
	}
}
