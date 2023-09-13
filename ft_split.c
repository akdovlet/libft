/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celeste <celeste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:51:50 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/13 17:32:41 by celeste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charcheck(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

size_t	ft_countwords(const char *s, char c)
{
	size_t		i;
	size_t		count;

	i = -1;
	count = 0;
	while (s[++i] && i < ft_strlen(s))
	{
		if (s[i] && !ft_charcheck(s[i], c))
		{
			count++;
			while (s[i] && !ft_charcheck(s[i], c))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_sdup(const char *s, char c, size_t index, size_t *retindex)
{
	unsigned int	ccount;
	size_t			start;
	size_t			i;
	char			*sdup;

	ccount = 0;
	start = index;
	i = 0;
	while (s[start] && !ft_charcheck(s[start], c))
	{
		ccount++;
		start++;
	}
	sdup = malloc(sizeof(char) * (ccount + 1));
	if (!sdup)
		return (NULL);
	while (s[index] && !ft_charcheck(s[index], c))
		sdup[i++] = s[index++];
	*retindex = index;
	sdup[i] = '\0';
	return (sdup);
}

char	*ft_free(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	**splitter;

	i = -1;
	j = 0;
	size = ft_countwords(s, c);
	splitter = malloc(sizeof(char *) * (size + 1));
	if (!splitter)
		return (NULL);
	while (j < size && s[++i])
	{
		if (s[i] && !ft_charcheck(s[i], c))
		{
			splitter[j] = ft_sdup(s, c, i, &i);
			if (!splitter[j++])
				return (ft_free(splitter, j), NULL);
		}
		else
			i++;
	}
	splitter[j] = 0;
	return (splitter);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		int	i;
// 		char **split;
// 		i = -1;
// 		split = ft_split(av[1], av[2][0]);
// 		while (split[++i])
// 			printf("%s\n", split[i]);
// 		ft_free(split, i);
// 	}
// }