/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:32:03 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:32:04 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strcdst;
	const char	*strsrc;
	int			i;

	i = 0;
	strcdst = dst;
	strsrc = src;
	while (n--)
	{
		strcdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
