/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:43:33 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/07 13:49:14 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_numbers(void)
{
	char	machin;

	machin = '0';
	while (machin <= '9')
		ft_putchar(machin++);
}
