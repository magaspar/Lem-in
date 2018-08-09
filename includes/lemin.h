/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lemin.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:23:05 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:23:08 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H
# include "../libft/ft_printf.h"
# include <fcntl.h>

typedef struct	s_room
{
	char		*name;
	int			room_x;
	int			room_y;
	int			*links;
	int			nb_links;
	int			dist_s;
	int			dist_e;
	int			**path;
	int			nb_path;
	int			ant;
	int			floor;
}				t_room;

typedef struct	s_lem
{
	int			nb_ants;
	int			nb_room;
	int			start;
	int			end;
	char		*line;
	char		*save;
	int			start_end;
	int			stop;
	int			total_nb_links;
	int			error;
	int			room;
	int			**all_path;
	int			**play;
	int			nb_path;
	int			poss_to_play;
	int			ants_arrived;
	t_room		*data;
}				t_lem;

int				init_env(t_lem **e);
int				ft_check_room_name(t_lem *e, char *name, int o);
int				ft_check_room_coord(t_lem *e, int x, int y);
int				ft_init_room(char *name, t_lem *e, int x, int y);
void			ft_free_tmp(char **tmp);
char			**ft_get_room(t_lem *e);
int				ft_diese(t_lem *e);
int				ft_parse(t_lem *e, char **t);
int				ft_error(t_lem *e);
char			**ft_get_links(t_lem *e);
int				ft_init_links(t_lem *e, int i, int j);
int				make_matrice(t_lem *e);
int				algo_main(t_lem *e);
void			free_env(t_lem **e);
void			ft_intdel(int **as);
int				data_sort(t_lem *e, int *equiv);
void			data_scan(t_lem *e, int *equiv);
int				ft_inttablen(int *tab);
int				algo_next(t_lem *e, int i, int j);
int				**count_plays(int **paths, int **poss, t_lem *e, int index);
void			sort_all_path(t_lem *e, int **paths);
int				data_to_tmp(int a, int b, t_room *tmp, t_lem *e);
int				tmp_to_data(int a, int b, t_room *tmp, t_lem *e);
int				ft_sorting(t_lem *e);
int				*ft_inttabjoin(int *s1, int *s2, int i);
int				check_double(t_lem *e);
void			ft_free_tmp(char **tmp);
void			ft_free_play(int **to_free);
int				*ft_inttabadd(int *s1, int k);
int				*ft_inttabdup(int *s1);
int				move_ants(t_lem *e, int play, int nb_paths, int a);
int				ft_inttablen(int *tab);

#endif
