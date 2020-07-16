/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leselela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:06:40 by leselela          #+#    #+#             */
/*   Updated: 2020/07/16 11:22:32 by leselela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iteractive_factorial(int nb)
{
	if(nb < 115)
	{
		nb++;
		return(1 + ft_iteractive_factorial(nb));
	}
	else
	{
		return 0;
	}
}	

int		main(void)
{
	printf("%d\n", ft_iteractive_factorial(0));
}
