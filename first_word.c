/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 03:50:08 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/26 04:07:10 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int main (int argc , char **argv )
{
    int i ;
    i = 0;
    if (argc == 2)
    {
    while (argv[1][i]== 32 || argv[1][i]==9)
    i++;
    while ((argv[1][i]!=32 && argv [1][i]!=9) && argv[1][i])
    {
        write (1,&argv[1][i],1);
        i++;
    }
        write (1,"\n",1);
    }
}