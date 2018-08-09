/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itos_upper.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:30:57 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:30:59 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ret_neg(int nbr, int ret)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ret++;
	}
	return (ret);
}

int				ft_itos_upper(int nbr, int base)
{
	int		cmp;
	int		tmp;
	int		ret;
	char	buff[4096];
	char	letter[36];

	cmp = 0;
	ret = 0;
	ft_strcpy(letter, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	ret = ret_neg(nbr, ret);
	while (nbr != 0 || cmp == 0)
	{
		tmp = nbr % base;
		tmp = (tmp < 0) ? -tmp : tmp;
		buff[cmp] = letter[tmp];
		nbr = nbr / base;
		cmp++;
	}
	while (--cmp >= 0)
	{
		ft_putchar(buff[cmp]);
		ret++;
	}
	return (ret);
}
