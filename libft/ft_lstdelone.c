/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdelone.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:31:10 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:31:11 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstdelone(t_ptf **s)
{
	if (s && *s)
	{
		if ((*s)->arg)
			ft_strdel(&(*s)->arg);
		if ((*s)->warg)
			free((*s)->warg);
		if ((*s)->option)
			ft_strdel(&(*s)->option);
	}
}
