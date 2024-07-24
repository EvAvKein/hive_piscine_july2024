/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:32:34 by REDACTED           #+#    #+#             */
/*   Updated: 2024/06/27 16:46:07 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	int		index;
	char	alphabet[26];	

	letter = 'a';
	index = 0;
	while (letter <= 'z')
		alphabet[index++] = letter++;
	write(1, alphabet, 26);
}
