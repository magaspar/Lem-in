/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_btree_apply_infix.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:29:11 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:29:12 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
			ft_btree_apply_infix(root->left, applyf);
		applyf(root->item);
		if (root->right)
			ft_btree_apply_infix(root->right, applyf);
	}
}
