/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:12:31 by REDACTED           #+#    #+#             */
/*   Updated: 2024/07/14 20:18:54 by REDACTED          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.c>
#include "ft_header.h"

char    *ft_strstr(char *str, char *to_find);
char	*ft_strcat(char *dest, char *src);

char	*keyset(char *keyring[41])
{
	char *part1[20];
	char *part2[21];
	
	part1 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
        "11", "12", "13", "14", "15", "16", "17", "18", "19"};

	part2 = {"20", "30", "40", "50", "60", "70", "80", "90", "100", "1000",
	"1000000", "1000000000", "1000000000000", "1000000000000000",
	"1000000000000000000", "1000000000000000000000",
	"1000000000000000000000000", "1000000000000000000000000000",
	"1000000000000000000000000000000", "1000000000000000000000000000000000",
	"1000000000000000000000000000000000000"};

	ft_strcat(keyring, part1);
	ft_strcat(keyring, part2);

	return (keyring);
}

char    *extract_until_end(char *string)
{
        int     i;
        int     value_i;
        int     result_i;
        char    *result;

        i = 0;
        result_i = 0;
        while(string[i] != '\n')
        {
                value_i = 0;
                if(string[i] == ' ' && string[i + 1] == ' ')
                        i++;
                else
                {
                        while (result[result_i][value_i])
                                value_i++;
                        result = malloc(sizeof(char) * value_i + 1);
                        result[result_i] = string[i];
                        i++;
                        result_i++;

                }
        }
        result[result_i] = '\0';
        return (&result);
}

int	dict_parser(char *file, numbers_dict *dict)
{
	int key_i = 0;
	int line_i = 0;
	int lines = 8;
	int char_i = 0;

	char* key;
	char* value;

	char* file_remainder;

	while (keys[key_i])
	{
		file_remainder = ft_strstr(file, keys[key_i]);


		while (file_remainder[line_i] != ':')
			line_i++;
		line_i++;

		while (file_remainder[line_i] == ' ')
			line_i++;
				
		while (file_remainder[line_i] != '\n' || file_remainder[line_i] != 0)
			*dict[keys[key_i]] = extract_until_end(file_remainder[line_i++]);
		
		key_i++;
	}

	return (0);
}
