/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wstrdup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:39:35 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:39:36 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrdup(wchar_t *s1)
{
	wchar_t	*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	k = ft_wstrlen(s1);
	if (!(s2 = (wchar_t *)malloc(sizeof(wchar_t) * (k + 1))))
		return (NULL);
	while (s1[i])
		s2[j++] = s1[i++];
	s2[j] = '\0';
	return (s2);
}
