/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:37:51 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:37:52 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *strdst;

	strdst = dst;
	while (*src != '\0' && len > 0)
	{
		*strdst++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*strdst++ = '\0';
		len--;
	}
	return (dst);
}
