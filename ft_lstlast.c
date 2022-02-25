/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:30:36 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/02/24 15:57:16 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	temp;

	if (!lst)
		return (NULL);
	temp.next = lst;
	while (temp.next -> next != NULL)
	{
		temp.next = temp.next -> next;
	}
	return (temp.next);
}
