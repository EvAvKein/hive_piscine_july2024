/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:06:31 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/08 09:06:59 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main()
{
	int	positive = 104;
	int	negative = -1234;
	int	zero = 0;
	char	c = '\n';

	ft_putnbr(positive);
	write(1, &c, 1);
	ft_putnbr(negative);
	write(1, &c, 1);
	ft_putnbr(zero);
	write(1, &c, 1);
	ft_putnbr(-2147483648);
	write(1, &c, 1);
	ft_putnbr(2147483647);

	return 0;
}

