/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 08:31:38 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/16 10:02:32 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	handle_edgecases(int size, char **strs, char *combined)
{
	if (size <= 0)
	{
		combined = malloc(sizeof(char));
		combined[0] = '\0';
		return (1);
	}
	if (size == 1)
	{
		combined = malloc(sizeof(char) * 2);
		combined = strs[0];
		return (1);
	}
	return (0);
}

int	strs_len(int size, char **strs)
{
	int		str_i;
	int		char_i;
	int		combined_i;

	str_i = 0;
	combined_i = 0;
	while (str_i < size)
	{
		char_i = 0;
		while (strs[str_i][char_i])
		{
			char_i++;
			combined_i++;
		}
		str_i++;
	}
	return (combined_i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*combined;
	int		combined_size;
	int		strs_i;
	int		char_i;
	int		combined_i;

	combined = "";
	if (handle_edgecases(size, strs, combined))
		return (combined);
	combined_size = strs_len(size, strs) + strs_len(1, &sep) * (size - 1);
	combined = malloc(sizeof(char) * combined_size + 1);
	strs_i = 0;
	combined_i = 0;
	while (combined_i < combined_size)
	{
		char_i = 0;
		while (strs_i && sep[char_i])
			combined[combined_i++] = sep[char_i++];
		char_i = 0;
		while (strs[strs_i][char_i])
			combined[combined_i++] = strs[strs_i][char_i++];
		strs_i++;
	}
	combined[combined_i] = '\0';
	return (combined);
}
