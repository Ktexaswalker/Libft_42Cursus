/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:56:04 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:20:18 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_memchr(const void* s, int c, size_t n);
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		if (*p != '\0')
		{
			if (*p == c)
				return (p);
			p++;
		}
		n--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	b[20] = "Como estas Tu?";
	char*	punteroA;
	char*	punteroAA;
	char*	punteroB;
	char*	punteroBB;
	char*	punteroC;
	char*	punteroCC;

	punteroA = (char*)memchr(a, 113, 4);
	punteroAA = (char*)ft_memchr(a, 113, 4);
	punteroB = (char*)memchr(a, 113, 6);
	punteroBB = (char*)ft_memchr(a, 113, 6);
	punteroC = (char*)memchr(b, 111, 20);
	punteroCC = (char*)ft_memchr(b, 111, 20);
	printf("Original: %s\nCreada:   %s\n", punteroA, punteroAA);
	printf("Original: %s\nCreada:   %s\n", punteroB, punteroBB);
	printf("Original: %s\nCreada:   %s\n", punteroC, punteroCC);
	return (0);
}
*/
