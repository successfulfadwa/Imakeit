/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:51:42 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/28 03:10:02 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int main(int argc , char *argv[])
{
    int i =0;
    if (argc ==2)
    {
    while (argv[1][i])
        i=i+1;
    while (i)
    {
        write(1,&argv[1][--i],1);
    }
    write(1,"\n",1);
    }
return(0);
}