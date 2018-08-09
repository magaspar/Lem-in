/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_elem.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:29:52 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:30:00 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list2	*ft_create_elem(void *data)
{
	t_list2 *list;

	list = (t_list2*)malloc(sizeof(t_list2));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
