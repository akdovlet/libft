/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 00:29:24 by akdovlet          #+#    #+#             */
/*   Updated: 2023/09/11 00:35:14 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t my_strlen(const char *str) {
    size_t len = 0;
    const char *ptr = str;

    // Unroll the loop by 8
    while (1) {
        if (!ptr[0]) return len;
        if (!ptr[1]) return len + 1;
        if (!ptr[2]) return len + 2;
        if (!ptr[3]) return len + 3;
        if (!ptr[4]) return len + 4;
        if (!ptr[5]) return len + 5;
        if (!ptr[6]) return len + 6;
        if (!ptr[7]) return len + 7;
        
        ptr += 8;
        len += 8;
    }
}

#include <stdio.h>

int main()
{
	char *str = "HEY SALUT COMMETN CA VA";
	printf("%ld\n", my_strlen(str));
}
