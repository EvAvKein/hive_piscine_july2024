/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:17:48 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/09 17:52:39 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	handle_edgecases(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr(int nb)
{
	char	str[20];
	int		i;
	int		negative;

	if (handle_edgecases(nb))
		return ;
	if (nb < 0)
	{
		negative = 1;
		nb = -nb;
	}
	else
		negative = 0;
	str[19] = '\0';
	i = 19;
	while (nb != 0)
	{
		str[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (negative == 1)
		str[--i] = '-';
	write(1, &str[i], ft_strlen(&str[i]));
}
