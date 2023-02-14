/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:14:09 by malasaha          #+#    #+#             */
/*   Updated: 2021/10/30 19:46:52 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	ilkson;

	ilkson = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a' && str[count] <= 'z') && ilkson == 0)
		{
			str[count] = str[count] - 32;
			ilkson++;
		}		
		else if ((str[count] >= 'A' && str[count] <= 'Z') && ilkson >= 1 )
			str[count] = str[count] + 32;
		else if ((str[count] < '0' || str[count] > '9')
			&& (str[count] < 'A' || str[count] > 'Z')
			&& (str[count] < 'a' || str[count] > 'z'))
			ilkson = 0;
		else
			ilkson++;
		count++;
	}
	return (str);
}
