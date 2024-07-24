/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:23:28 by REDACTED           #+#    #+#             */
/*   Updated: 2024/06/27 16:13:52 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	int		index;
	char	alphabet[26];

	letter = 'z';
	index = 0;
	while (letter >= 'a')
		alphabet[index++] = letter--;
	write(1, alphabet, 26);
}
