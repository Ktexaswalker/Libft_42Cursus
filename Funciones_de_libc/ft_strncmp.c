/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:19:47 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:38:22 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_strncmp(const char* s1, const char* s2, size_t n);
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	num;

	num = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while ((num < n) && ((p1[num] != '\0') || (p2[num] != '\0')))
	{
		if (p1[num] != p2[num])
			return (p1[num] - p2[num]);
		num++;
	}
	return (0);
}

/*
int	main(void)
{
	char	a[5] = "ABZD";
	char	b[5] = "ABEC";
	char	aa[5] = "ABZD";
	char	bb[5] = "ABEC";
	char	c[5] = "JKH"; 
	char	d[5] = "JK";
	char	cc[5] = "JKH";
	char	dd[5] = "JK";
	char	e[5] = "jkh";
	char	f[5] = "jk";
	char	ee[5] = "jkh";
	char	ff[5] = "jk";

	printf("Original: %d\n", strncmp(a, b, 5));
	printf("Creada:   %d\n", ft_strncmp(aa, bb, 5));
	printf("Original: %d\n", strncmp(c, d, 3));
	printf("Creada:   %d\n", ft_strncmp(cc, dd, 3));
	printf("Original: %d\n", strncmp(e,f, 2));
	printf("Creada:   %d\n", ft_strncmp(ee, ff, 2));
}
*/
