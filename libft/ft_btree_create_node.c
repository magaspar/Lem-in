/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_btree_create_node.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:29:28 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:29:29 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_btree	*ft_btree_create_node(void *item)
{
	t_btree *tree;

	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = NULL;
		tree->right = NULL;
		tree->item = item;
	}
	return (tree);
}
