/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrachid <mrachid@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 23:32:41 by mrachid           #+#    #+#             */
/*   Updated: 2014/05/16 18:14:49 by mrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

static void				ft_first(int v, t_list *la, t_list *lb)
{
	t_list			*tmp;
	t_list			*tmpb;

	tmp = la;
	tmpb = lb;
	if (v == 1)
	{
		write(1, "\nLA = ", 6);
		while (tmp)
		{
			ft_putnbr(tmp->nb);
			ft_putchar(' ');
			tmp = tmp->next;
		}
		write(1, "\nLB = ", 7);
		while (tmpb)
		{
			ft_putnbr(tmpb->nb);
			ft_putchar(' ');
			tmpb = tmpb->next;
		}
		write(1, "\n", 1);
	}
}

static void				ft_second(int v, t_list *la, t_list *lb)
{
	t_list			*tmp;
	t_list			*tmpb;

	tmp = la;
	tmpb = lb;
	if (v == 1)
	{
		write(1, "\nLA = ", 6);
		while (tmp)
		{
			ft_putnbr(tmp->nb);
			ft_putchar(' ');
			tmp = tmp->next;
		}
		write(1, "\nLB = ", 7);
		while (tmpb)
		{
			ft_putnbr(tmpb->nb);
			ft_putchar(' ');
			tmpb = tmpb->next;
		}
		write(1, "\n", 1);
	}
}

static t_list			*ft_sort(t_list *lb, t_list *tmp, int v)
{
	while (lb)
	{
		tmp = ft_pa(lb, &tmp, v);
		lb = lb->next;
		if (v == 1)
			ft_second(v, tmp, lb);
	}
	return (tmp);
}

void					ft_hearts(t_list *la, t_list *lb, int v)
{
	t_list			*tmp;

	tmp = la;
	while (ft_is_order(tmp) == -1)
	{
		if (ft_minimal(tmp->nb, tmp) == 1)
		{
			lb = ft_pb(tmp, &lb);
			tmp = tmp->next;
		}
		else
			tmp = ft_ra(tmp);
		if (ft_is_order(tmp) == -1)
			ft_putchar(' ');
		ft_first(v, tmp, lb);
	}
	tmp = ft_sort(lb, tmp, v);
}
