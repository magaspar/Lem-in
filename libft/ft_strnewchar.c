/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnewchar.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:38:23 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:38:24 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnewchar(int size, char c)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (size--)
		str[i++] = c;
	str[i] = '\0';
	return (str);
}
