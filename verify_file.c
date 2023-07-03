/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:13:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/04 06:26:30 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "./libft/libft.h"

int verify_file(int ac, char **av)
{
	if (ac != 2 || (!ft_strncmp(ft_strrchr(av[1], '.'), "rt", 4)))
	{
		printf("wrong input\n");
		return (0);
	}
	return(1);
}
