/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:08:32 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 16:28:20 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char	charac;
	char	cadena[]="Vet aqui un gat vet aquif un gos i aquest conte ja sha fos i sino et fots"; 
	char	cadena2[]="Vet fqui un gat vet aqui un gos i aquest conte ja sha fos sino et fots"; 
	char	*str;
	char	*dst;
	int		num;
	charac = 'f';
	str = &cadena[0];
	num = 0;
	//tretzena funcio
	printf("\n el caracter a transformar es, %c\n",charac);
	printf("\n ft_toupper\n");
	charac = ft_toupper(charac);
	printf("\n caracter passat  majuscula es, %c\n",charac);

	//catorzena funcio
	printf("\n el caracter a transformar es, %c\n",charac);
	printf("\n ft_tolower\n");
	charac = ft_tolower(charac);
	printf("\n caracter passat a minuscula es, %c\n",charac);

	//quinzena funcio
	printf("\n el caracter a buscar es, %c\n",charac);
	printf("\n ft_strchr\n");
	dst = ft_strchr(str, charac);
	if (dst == 0)
		printf("\n caracter no trobat\n");
	else
		printf("\n caracter trobat segueix el string, %s\n",dst);

	//sizena funcio
	printf("\n el caracter a buscar es, %c\n",charac);
	printf("\n ft_strrchr\n");
	dst = ft_strrchr(str, charac);
	if (dst == 0)
		printf("\n caracter no trobat\n");
	else
		printf("\n lultim caracter trobat segueix el string, %s\n",dst);

	//setena funcio
	dst = &cadena2[0];
	printf("\n la primera cadena es, %s\n",str);
	printf("\n la segona cadena es, %s\n",dst);
	printf("\n ft_strncmp\n");
	num = ft_strncmp(str, dst, 10);
	if (num == 0)
		printf("\n cadenes iguals num= %d\n",num);
	if (num > 0)
		printf("\n str2 es menor que str1  num= %d\n",num);
	if (num < 0)
		printf("\n str1 es menor que str2 num= %d\n",num);

	//vuitena funcio
	printf("\n el caracter a buscar es, %c\n",charac);
	printf("\n ft_memchr\n");
	dst = ft_memchr(str, charac, 50);
	if (dst == 0)
		printf("\n caracter no trobat\n");
	else
		printf("\n lultim caracter trobat segueix el string, %s\n",dst);
}
