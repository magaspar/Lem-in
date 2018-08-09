/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wstrlen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:39:51 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:39:52 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlen(wchar_t *str)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0')
			len += ft_wcharlen(str[i]);
		i++;
	}
	return (len);
}
