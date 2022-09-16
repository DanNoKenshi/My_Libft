/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dan <dan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:19:23 by dan               #+#    #+#             */
/*   Updated: 2022/09/11 19:22:32 by dan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}