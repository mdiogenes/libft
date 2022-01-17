/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:08:32 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/13 14:12:28 by msoler-e         ###   ########.fr       */
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
	
	charac = 'f';

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
}
