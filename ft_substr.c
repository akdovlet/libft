/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:41:37 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/13 21:15:19 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*sub;

	i = 0;
	size = (len - start) + 1;
	sub = malloc(sizeof(char) * size);
	if (!sub)
		return (NULL);
	while (size--)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[] = "You don't negotiate with weakness";
// 	printf("%s\n", ft_substr(str, 0, strlen(str)));
// }
