/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   free.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:25:53 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:25:54 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/lemin.h"

void			ft_intdel(int **as)
{
	if (as && *as)
	{
		free(*as);
		(*as) = NULL;
	}
}

void			free_env(t_lem **e)
{
	int i;
	int j;

	i = -1;
	while (++i < (*e)->nb_room)
	{
		j = -1;
		ft_strdel(&(*e)->data[i].name);
		ft_intdel(&(*e)->data[i].links);
		while (++j < (*e)->data[i].nb_path)
			ft_intdel(&(*e)->data[i].path[j]);
		free((*e)->data[i].path);
	}
	free((*e)->data);
	j = -1;
	while ((*e)->play && ++j < ft_inttablen((*e)->all_path[(*e)->poss_to_play]))
		ft_intdel(&(*e)->play[j]);
	free((*e)->play);
	j = -1;
	while ((*e)->all_path && ++j < (*e)->nb_path)
		ft_intdel(&(*e)->all_path[j]);
	free((*e)->all_path);
	ft_strdel(&(*e)->line);
	ft_strdel(&(*e)->save);
	free(*e);
}

void			ft_free_tmp(char **tmp)
{
	int i;

	i = 0;
	if (tmp == NULL)
		return ;
	while (tmp[i])
	{
		ft_strdel(&tmp[i]);
		i++;
	}
	free(tmp);
	tmp = NULL;
}

void			ft_free_play(int **to_free)
{
	int i;

	i = -1;
	if (to_free == NULL)
		return ;
	while (to_free[++i] != NULL)
		ft_intdel(&to_free[i]);
	free(to_free);
	to_free = NULL;
}
