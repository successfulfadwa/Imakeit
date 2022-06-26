/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:23:16 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/26 05:29:37 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

char *stpcpy(char * dst, char * src)
{
    int i ;
    i=0;
    while (src[i]!='\0')
    {
        dst[i]== src[i];
        i++;
    }
    dst[i]=='\0';
    return(dst);
}