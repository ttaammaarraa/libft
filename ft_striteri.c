/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main (3).c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taabu-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:51:41 by taabu-fe          #+#    #+#             */
/*   Updated: 2024/09/14 14:52:04 by taabu-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(f)(i, &s[i]);
		i++;
	}
}
