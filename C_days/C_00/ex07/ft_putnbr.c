/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:34:23 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/18 03:30:01 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>:w

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(iint nb)
{
	long	b;

	b = nb;
	if (b < 0)
	{
		b = b * -1;
		ft_putchar('-');
	}
	if (b >= 10)
	{
		ft_putnbr(b / 10);
		ft_putnbr(b % 10);
	}
	else
	{
		ft_putchar(b + '0');
	}
}
