/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:51:33 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/07 05:52:41 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void		ft_putchar(char c);

void		ft_print_alphabet(void)
{
	char truc;
	
	truc = 'a';
	while (truc <= 'z')
		ft_putchar(truc++);
}