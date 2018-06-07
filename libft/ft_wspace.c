/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wspace.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:12:44 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/07 14:13:12 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_wspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
