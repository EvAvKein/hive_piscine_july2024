/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:46:20 by REDACTED           #+#    #+#             */
/*   Updated: 2024/06/27 17:08:50 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;
	int		index;
	char	nums[10];

	number = 0;
	index = 0;
	while (number <= 9)
		nums[index++] = number++ + '0';
	write(1, nums, 10);
}
