/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:37:59 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:38:01 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, size_t j, size_t n)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!(ret = ft_strnew(n + 1)))
		return (NULL);
	ret[n] = '\0';
	while (n)
	{
		ret[i++] = str[j++];
		n--;
	}
	free(str);
	return (ret);
}
