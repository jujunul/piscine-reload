/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:51:04 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/07 13:53:19 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}