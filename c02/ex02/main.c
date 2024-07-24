/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:43:15 by REDACTED             #+#    #+#             */
/*   Updated: 2024/07/06 17:15:06 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main (void)
{
	char a[] = "Hihihihahaha";
	char b[] = "H1h1h1 h4h4h4";
 
	ft_str_is_alpha(a);
	ft_str_is_alpha(b);

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	return 0;
}
