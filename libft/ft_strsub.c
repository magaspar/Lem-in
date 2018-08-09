/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:38:58 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:38:59 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ret;

	i = 0;
	if (s == 0)
		return (NULL);
	if (!(ret = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len--)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
