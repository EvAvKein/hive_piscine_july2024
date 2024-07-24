/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:38:48 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 11:29:45 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	length;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	length = max - min;
	range = malloc(sizeof(int) * length);
	if (range == NULL)
		return (range);
	i = 0;
	while (min != max)
		range[i++] = min++;
	return (range);
}
