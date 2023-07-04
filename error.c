/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 23:08:48 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/04 23:15:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "./libft/libft.h"

int	error(char *s, int i)
{
	if (i == 0)
	{
		printf("%s\n", s);
		return (0);
	}
	else if (i == 1)
		printf("1 \n");
	else if (i == 2)
		printf("2\n");
	else if (i == 3)
		printf("3 \n");
	else if (i == 4)
		printf("4 \n");
	else if (i == 5)
		printf("5 \n");
	else if (i == 6)
		printf("6 \n");
	// return (1);
}
