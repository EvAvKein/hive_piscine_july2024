/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:15:07 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/12 12:47:38 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main()
{
	int	one = 1;
	int	two = 2;
	int	*swap1 = &one;
	int	*swap2 = &two;


	ft_putstr("putchar: ");
	ft_putchar('E');
	printf("\n");
	ft_swap(swap1, swap2);
	printf("swap (first had 1, second had 2): %d %d\n", one, two);
	ft_putstr("putstr printed this :)");
	printf("\n");
	printf("strlen (of \"Hello world\"): %d\n", ft_strlen("Hello world"));
	printf("strcmp (of \"1239\" and \"1234\"): %d\n", ft_strcmp("1239", "1234"));
}
