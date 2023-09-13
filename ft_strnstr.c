/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:27:55 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/13 21:21:41 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			j++;
			if (!little[j])
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int main()
// {
// 	char str[] = "Come find me motherfucker";
// 	char tf[] = "xe";
// 	char str2[] = "Come find me motherfucker";
// 	char tf2[] = "xe";
// 	printf("%s\n", ft_strnstr(str, tf, 5));
// 	printf("%s\n", strnstr(str2, tf2, 4));
// }
