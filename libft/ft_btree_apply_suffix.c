/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_btree_apply_suffix.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:29:22 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:29:24 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
			ft_btree_apply_suffix(root->left, applyf);
		if (root->right)
			ft_btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
