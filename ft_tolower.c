/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdas-nev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:34:43 by rdas-nev          #+#    #+#             */
/*   Updated: 2022/02/15 10:38:56 by rdas-nev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c += 32;
	return (c);
}
