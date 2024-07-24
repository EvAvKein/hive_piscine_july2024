/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:55:41 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 11:35:05 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int	*test;
	int	i;
	int	min = -3;
	int	max = 9;

	i = 0;
	test = ft_range(min, max);
	while (test[i] || (test[i] == 0 && test[i + 1] == 1))
	{
		printf("%d",test[i]);
		i++;
	}

	return (0);
}
