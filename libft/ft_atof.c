/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:30:41 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/14 16:27:26 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	ans;
	double	neg;
	double	dot;

	ans = 0;
	neg = 1;
	dot = 0.1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (*str == '.')
	{
		str++;
		while (*str && *str >= '0' && *str <= '9')
		{
			ans += (dot * (*str - '0'));
			dot /= 10;
			str++;
		}
	}
	return (ans * neg);
}

int	main()
{
	char const *num = "120.22";
	float f = ft_atof(num);
	float real_f = atof(num);
	printf("ft_atof > %f\n", f);
	printf("real atof %f\n", real_f);
}
