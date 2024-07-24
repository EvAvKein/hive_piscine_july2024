/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: REDACTED <REDACTED@redacted.hive.email>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:04:56 by REDACTED          #+#    #+#             */
/*   Updated: 2024/07/14 20:41:36 by REDACTED         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntli.h>

int	ft_strlen(int length, char *key);
int     dict_parser(char *file, numbers_dict *dict);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


//for counting the string
int	ft_stringlength(char *x)
{
	int	i;

	i = 0;
	while (i != '\0')
	{
		i++;
	}
	return (i);
}
//manual print but i think we can extract the exact string from number.dict
char	ft_numtoalpha(char *x)
{
	if (x == "0")
		write(1, "zero", 4);
	if (x == "1")
		write(1, "one", 3);
	if (x == "2")
		write(1, "two", 3);
	if (x == "3")
		write(1, "three", 5);
	if (x == "4")
		write(1, "four", 4);
	if (x == "5")
		write(1, "five", 4);
	if (x == "6")
		write(1, "six", 3);
	if (x == "7")
		write(1, "seven", 5);
	if (x == "8")
		write(1, "eight", 5);
	if (x == "9")
		write(1, "nine", 4);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int miniatoi(char *str)
{
	int	i;
	int	num;
	int len;
	char key[1024];

	i = 0;
	num = 0;
	len = 0;
	while(str[len] != '\0')
		len++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = str[i] - '0';
		ft_strlen(len - i, key);
		i++;
	}
}

int	write_value(int length, char *key)
{
	int	l;
	int	position;

	l = length;
	

	if(l == 3)
		write(1, keyring[20], 7);
	if(l >= 4 &&  l <= 6)
		write(1, "thousand", 8);
	if(l >= 7 && l <= 9)
		write(1, "million", 8);
	if(l >= 10 && l <= 12)
		write(1, "trillion", 8);
	if(l >= 13 && l <= 15)
		write(1, "quadrillion", 11);
	if(l >= 16 && l <= 18)
		write(1, "quintillion", 11);
	if(l >= 19 && l <= 21)
		write(1, "sextillion", 10);
	if(l >= 22 && l <= 24)
		write(1, "septillion", 10);
	if(l >= 25 && l <= 27)
		write(1, "octillion", 9);
	if(l >= 28 && l <= 30)
		write(1, "nonillion", 9);
	if(l >= 31 && l <= 33)
		write(1, "decillion", 9);
	if(l >= 34 && l <= 36)
		write(1, "undecillion", 11);
}


char    *ft_strstr(char *str, char *to_find);

int main(int argc, char *argv[])
{
	char	*keyring[41];
	char	*file_name;
	char	*buffer;
	int	fd;

	if (argc < 1 || argc > 2)
	{
		printf("\nInvalid argument count!!\n");
		return (1);
	}

	if (argc == 2)
		file_name = argv[1];

	if (!file_name)
		file_name = "numbers.dict";
	
	buffer = malloc(1024);
	fd = open(file_name, 0_RDWR);
	if(fd == -1)
	{
		printf("\nError opening file!!\n");
		return (1);
	}
	dict_parser(fd, keyring);

    	return 0;
}
