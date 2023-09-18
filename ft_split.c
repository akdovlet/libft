/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:51:50 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/18 18:12:45 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countword(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_charcount(char const *s, int index, char c)
{
	int	count;

	count = 0;
	while (s[index] && s[index] != c)
	{
		count++;
		index++;
	}
	return (count);
}

char	*ft_strndup(char const *s, int *retindex, int index, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	while (s[index] && i < n)
	{
		dup[i] = s[index];
		i++;
		index++;
	}
	*retindex = index;
	dup[i] = '\0';
	return (dup);
}

void	ft_free(char **strs, int i)
{
	while (i >= 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wordcount;
	char	**splitter;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	wordcount = ft_countword(s, c);
	splitter = malloc(sizeof(char *) * (wordcount + 1));
	while (j < wordcount)
	{
		if (s[i] != c)
		{
			splitter[j] = ft_strndup(s, &i, i, ft_charcount(s, i, c));
			if (!splitter[j])
				return (ft_free(splitter, j), NULL);
			j++;
		}
		else
			i++;
	}
	splitter[j] = 0;
	return (splitter);
}
