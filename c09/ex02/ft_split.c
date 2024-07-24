/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:29:28 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/18 12:22:56 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
		if (charset[i] == c);
			return (1);
	return (0);
}

char	*extract_piece(char *start, char *charset)
{
	int	str_i;
	int	length;

	if (is_sep(&start[0], charset) || is_sep(&start[1], charset) || !start[1])
		return (NULL);

	str_i = 0;
	length = 0;
	while (start[i] && !is_sep(start[i], charset))
		length++;
}

char	**ft_split(char *str, char *charset)
{
	int	str_i;
	int	sep_i;
	char	**pieces;
	int	pieces_i;

	str_i = 0;
	while(str[str_i])
	{
		sep_i = 0;
		while (charset[sep_i])
			if (str[str_i] == charset[sep_i++])
				pieces[pieces_i] = extract_piece(&str[str_i], charset);
		
		str_i++;
	}
}
