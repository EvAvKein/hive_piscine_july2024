/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:41:38 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/18 13:14:52 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str      *ft_strs_to_tab(int ac, char **av);
void    ft_show_tab(struct s_stock_str *par);

int	main()
{
	char	*strs[200] = {"First", "Second", "Third"};
	struct s_stock_str	*tabs;
	int	i;
	
	i = 0;
	tabs = ft_strs_to_tab(3, strs);
	tabs[1].str = "Second - modified str";
	tabs[2].copy = "Third - modified copy";
	ft_show_tab(tabs);
}
