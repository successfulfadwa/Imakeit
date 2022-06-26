
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 05:44:24 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/26 05:49:53 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

 int ft_strlen(const char *s)
 {
     int i ;
     i = 0;
     while(s[i] != '\0')
     {
         i++;
     }
     return (i);
 }
 int main ()
 {
     char *s="fadwa";
     ft_strlen(s);
     printf("%d",ft_strlen(s));
 }