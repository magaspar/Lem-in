/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_wstrnewchar.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:40:07 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:40:08 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

wchar_t		*ft_wstrnewchar(int size, wchar_t c)
{
	wchar_t		*str;
	int			i;

	i = 0;
	if (!(str = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1))))
		return (NULL);
	while (size--)
		str[i++] = c;
	str[i] = '\0';
	return (str);
}
