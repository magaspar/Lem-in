/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:31:42 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:31:44 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *strdst;
	unsigned char *strsrc;

	strdst = (unsigned char*)dst;
	strsrc = (unsigned char*)src;
	while (n--)
	{
		if (*strsrc == (unsigned char)c)
		{
			*strdst++ = *strsrc++;
			return (strdst);
		}
		*strdst++ = *strsrc++;
	}
	return (NULL);
}
