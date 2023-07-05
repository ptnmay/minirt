/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 04:06:57 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/05 08:10:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include "./libft/libft.h"
# include "color.h"
typedef struct s_data
{
	char	**oneline;
} t_data;


void	verify_file(char **av);
void	error(char *s, int mode);
// void	error(char *s, t_data *data, int mode);
t_data	*get_info(char *info);


#endif
