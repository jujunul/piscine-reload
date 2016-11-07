/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:59:08 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/07 05:59:13 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void		ft_putchar(char c);

void		ft_print_numbers(void);
{
	char	machin;
	
	machin = '0';
	while (machin <= '9')
		ft_putchar(machin++);
}