/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josaykos <josaykos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:44:25 by josaykos          #+#    #+#             */
/*   Updated: 2019/11/09 11:38:31 by josaykos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (c >= 0 && c <= 255)
	{
		if (c >= 65 && c <= 90)
			return (c += 32);
	}
	else
		return ((unsigned int)c);
	return (c);
}
