/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 19:28:03 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/07 16:22:37 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int test;
	long int racine;

	test = 0;
	racine = 0;
	while (racine <= nb)
	{
		test = racine * racine;
		if (test == nb)
			return (racine);
		racine++;
	}
	return (0);
}

int main(void)
{
	printf("%d\n", ft_sqrt(182979856));
	return (0);
}
