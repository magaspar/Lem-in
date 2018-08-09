/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:36:42 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:36:44 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*s2;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	k = ft_strlen(s1);
	if (!(s2 = (char*)malloc(sizeof(char) * (k + 1))))
		return (NULL);
	s2[k] = '\0';
	while (s1[i])
		s2[j++] = s1[i++];
	return (s2);
}
