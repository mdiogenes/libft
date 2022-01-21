/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:54:52 by msoler-e          #+#    #+#             */
/*   Updated: 2022/01/21 14:39:17 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newone;

	newone = malloc(sizeof(t_list));
	if (!newone)
		return (0);
	newone->content = content;
	newone->next = 0;
	return (newone);
}
