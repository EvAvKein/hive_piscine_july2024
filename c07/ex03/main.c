/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:04:18 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 16:08:42 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *strs[26] = {"abc", "defg", "hijk", "lmnop"};
	char *arr;	
	arr = ft_strjoin(4, strs, "-+-");
	printf("Before free = %s\n", arr);
	free(arr);
	printf("After free = %s\n", arr); 

	return (0);
}
