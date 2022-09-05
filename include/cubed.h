/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:59:47 by aalvarez          #+#    #+#             */
/*   Updated: 2022/09/06 00:26:08 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBED_H
# define CUBED_H

# include "Libft_extended/libft.h"

typedef struct s_info
{
	int		file_fd;
	int		file_size;
	char	*file;
}	t_info;

typedef struct s_color
{
	int		ceiling_integer;
	int		floor_integer;
	int		color_r;
	int		color_g;
	int		color_b;
}	t_color;

typedef struct s_data
{
	char	*north_texture;
	char	*south_texture;
	char	*east_texture;
	char	*west_texture;
}	t_data;

/* User input errors */
int		ft_input_errors(int argc, char *file);
int		ft_file_errors(t_info *info, t_data *data, t_color *color);
int		ft_fill_data(t_data *data, char *line);
int		ft_invalidmap_line(char **file_content);
int		ft_invalidcolor_line(t_color *color, char **file_content);

//TODO change get_next_line place in the program
char	*ft_get_next_line(int fd);

/* Different general utilities functions */
void	ft_freedata(t_data *data);
void	ft_init_structs(t_data *data, t_color *color);
void	ft_trim_data(t_data *data);

#endif
