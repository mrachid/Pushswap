/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 23:32:02 by mrachid           #+#    #+#             */
/*   Updated: 2014/05/16 17:31:51 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

void			ft_fill(t_list **l, int nb)
{
	t_list		*tmp;
	t_list		*new;

	tmp = NULL;
	new = NULL;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return ;
	new->nb = nb;
	new->next = NULL;
	tmp = *l;
	if (!tmp)
		*l = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

t_list			*ft_fill_one(t_list **l, int nb)
{
	t_list		*new;

	new = NULL;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->nb = nb;
	new->next = *l;
	return (new);
}
