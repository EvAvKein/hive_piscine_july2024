/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:36:19 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/18 11:13:41 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
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

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
