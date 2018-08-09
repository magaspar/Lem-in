/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_partlen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:32:26 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:32:27 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_partlen(char *str, int i, char *comp)
{
	int	j;
	int	f;
	int	ret;

	ret = 0;
	f = 1;
	while (f)
	{
		j = 0;
		f = 0;
		while (comp[j] != '\0')
		{
			if (str[i] == comp[j])
			{
				f = 1;
				ret++;
			}
			j++;
		}
		i++;
	}
	return (ret);
}
