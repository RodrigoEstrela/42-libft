/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:16:15 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/02/24 15:50:22 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	temp;

	temp.next = lst;
	i = 0;
	while (temp.next != NULL)
	{
		i++;
		temp.next = temp.next -> next;
	}
	return (i);
}
