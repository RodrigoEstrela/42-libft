/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:50:51 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/02/24 17:35:54 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

/*int main()
{
	t_list lst = [["adwdawd"],["wadawd"],["dawd"]];
	t_list *new = ft_lstnew(ft_strdup("OK"));
	ft_lstadd_back(lst, new);
}*/
