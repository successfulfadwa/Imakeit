/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 04:14:36 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/26 05:14:38 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_over10(int n)
{
char str[10]="0123456789";
if (n>9)
ft_over10(n/10);
write(1,&str[n%10],1);
}

int main ()
{
    int i ;
    i = 1;
    while (i <= 100)
    {
  
        if(i%3==0 && i%5==0)
        write(1,"fizzbuzz",8);
        else if (i%3==0)
        write(1,"fizz",4);
        else if(i%5==0)
        write(1,"buzz",4);
        else 
        ft_over10(i);
        i++; 
    write(1,"\n",1);
    }
    
}

