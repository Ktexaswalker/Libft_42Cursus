/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:22:24 by hmartine          #+#    #+#             */
/*   Updated: 2022/01/22 17:39:39 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_memcpy(void* dst, const void* src, size_t n);

void*	ft_memcpy(void* dst, const void* src, size_t n)
{
	size_t	num;

	num = 0;
	while (num < n)
	{
		((unsigned char*) dst)[num] = ((unsigned char*) src)[num];
		num++;
	}
	return (dst);
}

int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	aa[20] = "Como estas tu?";
	char	b[20] = "Hola que tal?";
	char	bb[20] = "Como estas tu?";
	printf("Original: %s, %s\n", a, aa);
	printf("-> %s\n", memcpy(a, aa, 10));
	printf("Creada:   %s, %s\n", b, bb);
	printf("-> %s\n", ft_memcpy(b, bb, 10));
	return (0);
}
