/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handle_option.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/12 17:40:32 by magaspar     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/12 17:40:34 by magaspar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_option(t_ptf *s)
{
	int	k;
	int	hashtag;

	k = -1;
	hashtag = 0;
	if (s->option)
		while (s->option[++k] != '\0')
		{
			if (s->option[k] == '#' && !hashtag)
			{
				if (s->conv == 'x' && s->arg[0] != '\0' && !s->arg_null)
					s->arg = ft_strjoin("0x", s->arg, 2);
				else if (s->conv == 'X' && s->arg[0] != '\0' && !s->arg_null)
					s->arg = ft_strjoin("0X", s->arg, 2);
				else if ((s->conv == 'o' || s->conv == 'O') && s->arg[0] != '0')
					s->arg = ft_strjoin("0", s->arg, 2);
				hashtag++;
			}
			else if (s->option[k] == ' ' && s->arg[0] != '-' && s->conv != 'u'
						&& s->arg[0] != ' ')
				s->arg = ft_strjoin(" ", s->arg, 2);
			else if (s->option[k] == '+' && s->arg[0] != '-' && s->conv != 'o'
					&& s->conv != 'O' && s->arg[0] != '+')
				s->arg = ft_strjoin("+", s->arg, 2);
		}
}
