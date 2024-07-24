/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:27:24 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/18 13:34:31 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlength(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	length = ft_strlength(src);
	dest = (char *) malloc(sizeof(char) * length);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tabs;

	i = 0;
	if (ac < 0)
		ac = 0;
	tabs = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tabs)
		return (NULL);
	while (i < ac)
	{
		tabs[i].copy = ft_strdup(av[i]);
		if (tabs[i].copy == NULL)
			return (NULL);
		tabs[i].size = ft_strlength(av[i]);
		tabs[i].str = av[i];
		i++;
	}
	tabs[i].str = 0;
	tabs[i].copy = 0;
	tabs[i].size = 0;
	return (tabs);
}
