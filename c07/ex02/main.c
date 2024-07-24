/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:55:41 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 11:28:50 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	length;
	int	*str;
	int	i;
	
	length = ft_ultimate_range(&str, -5, 6);
	printf("length = %d\n", length);
	i = 0;
	while (i < length)
	{
		printf("%d ", str[i]);
		i++;
	}	
	return (0);
} 
