/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:14:06 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/09 14:59:21 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *stock;
	int len;
	int i;

	if (min >= max)
		return (NULL);
	len = max - min + 1;
	if (!(stock = (int *)malloc(sizeof(int) * (len))))
		return (NULL);
	i = 0;
	while (min != max)
	{
		stock[i] = min;
		i++;
		min++;
	}
	return (stock);
}
