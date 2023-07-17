/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paser.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 04:06:57 by psaeyang          #+#    #+#             */
/*   Updated: 2023/07/17 19:10:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PASER_H
# define PASER_H

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <stdbool.h>
# include "./libft/libft.h"
# include "color.h"


typedef struct s_point
{
	double		x;
	double		y;
	double		z;
}				t_point;

typedef struct s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

typedef struct s_vec2
{
	double		x;
	double		y;
}				t_vec2;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		end;
}	t_data;

typedef struct s_ray
{
	t_point	origin;
	t_vec3	direction;
}	t_ray;

typedef struct s_camera
{
	t_point	origin; //x,y,z
	t_vec3	direction; //-1,1
	float	fov; //0-180
}	t_camera;

typedef struct s_camera_plane
{
	t_point	center;
	t_vec3	normal;
	float	width;
	float	height;
	t_vec3	right;
	t_vec3	down;
	t_point	top_left;
}	t_camera_plane;

typedef struct s_ambient
{
	float	ratio; //0.0-1.0
	int		color; //0-255
}	t_ambient;

typedef struct s_light
{
	t_point	origin; //x,y,z
	float	brightness; //0.0-1.0
	int		color; //0-255 bonus
}	t_light;

typedef struct s_sphere
{
	t_point	center; //x,y,z
	float	radius; //?
	int		color; //0-255
}	t_sphere;

typedef struct s_plane
{
	t_point	center;
	t_vec3	normal;
	int		color;
}	t_plane;

typedef struct s_cylinder
{
	t_point	center;
	t_vec3	normal;
	float	radius;
	float	height;
	int		color;
}	t_cylinder;

typedef enum e_obj_type
{
	SPHERE,
	CYLINDER,
	PLANE,
}	t_obj_type;

typedef struct s_obj
{
	t_obj_type	type;
	void		*obj;
}	t_obj;

typedef struct s_vars {
	void			*mlx;
	void			*win;
	t_data			img;
	t_camera		camera;
	t_camera_plane	cam_plane;
	t_light			light;
	t_ambient		ambient;
	t_list			*obj_list;
}	t_vars;


void	error(char *s, int mode);
void	verify_file(char **av);
void	verify_a(char **chop);
void	verify_c(char **chop);
void	verify_l(char **chop);
void	verify_sp(char **chop);
void	verify_pl(char **chop);
void	verify_cy(char **chop);
void	verify_len(char **line, int len);

//utils_resolution_0
void	util_ori(char **origin);
void	util_dir(char *direction);
void	util_fov(char *fov);
void	util_ratio(char **ratio, int index);
void	util_color(char **color);

//utils_resolution_1
void	util_radius(char *radius);


//utils_0
int		twod_is_decimal(char **str);
int		twod_is_digit(char **str);
int		str_is_digit(char *str);
int		str_is_decimal(char *str);


#endif
