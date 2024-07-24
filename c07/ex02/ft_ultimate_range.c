/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:38:48 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 11:27:15 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		length;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	arr = malloc((sizeof(int) * length));
	*range = arr;
	if (arr == NULL)
		return (-1);
	i = 0;
	while (min != max)
		arr[i++] = min++;
	return (length);
}
