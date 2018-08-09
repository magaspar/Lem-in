/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utils.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:27:09 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:27:11 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/lemin.h"

int				ft_inttablen(int *tab)
{
	int		i;

	i = 0;
	while (tab[i] != -1)
		i++;
	return (i);
}

int				*ft_inttabdup(int *s1)
{
	int		*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	k = ft_inttablen(s1);
	if (!(s2 = malloc(sizeof(int) * (k + 1))))
		return (NULL);
	s2[k] = -1;
	while (s1[i] != -1)
		s2[j++] = s1[i++];
	return (s2);
}

int				ft_diese(t_lem *e)
{
	if (!ft_strncmp(e->line, "##", 2))
	{
		if (!ft_strcmp(e->line, "##start"))
			e->start_end = 1;
		else if (!ft_strcmp(e->line, "##end"))
			e->start_end = 2;
		if (e->start_end == 1 && e->start != -1)
			return (-1);
		else if (e->start_end == 2 && e->end != -1)
			return (-1);
	}
	return (0);
}

int				ft_error(t_lem *e)
{
	free_env(&e);
	ft_printf("ERROR\n");
	return (-1);
}

int				init_env(t_lem **e)
{
	if (!(*e = malloc(sizeof(t_lem))))
		return (-1);
	(*e)->line = NULL;
	(*e)->save = NULL;
	(*e)->stop = 0;
	(*e)->data = NULL;
	(*e)->nb_room = 0;
	(*e)->start_end = 0;
	(*e)->total_nb_links = 0;
	(*e)->error = 0;
	(*e)->room = 0;
	(*e)->start = -1;
	(*e)->end = -1;
	(*e)->poss_to_play = 0;
	(*e)->nb_path = 0;
	(*e)->all_path = NULL;
	(*e)->play = NULL;
	(*e)->ants_arrived = 0;
	return (0);
}
