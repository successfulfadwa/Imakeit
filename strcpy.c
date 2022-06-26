/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:23:16 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/26 05:40:44 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

char *ft_strcpy(char * dst, char * src)
{
    int i ;
    i=0;
    while (src[i]!='\0')
    {
        dst[i]= src[i];
        i++;
    }
    dst[i]='\0';
    return(dst);
}
 int main ()
 {
     char s[]="fadwa";
     char *d;
     char *g;
     g = ft_strcpy(d,s);
     printf("%s",d);
     
 }