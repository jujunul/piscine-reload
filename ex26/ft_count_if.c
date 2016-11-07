/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 13:34:15 by juthierr          #+#    #+#             */
/*   Updated: 2016/09/12 13:36:18 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((f(tab[i])) == 1)
			count++;
		i++;
	}
	return (count);
}