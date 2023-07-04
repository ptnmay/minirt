/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:13:19 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/05 01:10:23 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "./libft/libft.h"

int verify_file(int ac, char **av)
{
	if (ac == 2 && ft_strncmp(ft_strrchr(av[1], '.'), "rt", 4))
	{
		printf("input ok\n");
		return (1);
	}
	return(0);
}
