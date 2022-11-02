/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:23:12 by oboutarf          #+#    #+#             */
/*   Updated: 2022/11/02 12:42:12 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void       ft_error(char *error_message)
{
    int	i;

	i = -1;
	while (error_message[++i])
    	write(1, &error_message[i], 1);
}