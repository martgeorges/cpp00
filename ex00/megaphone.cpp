/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:46:52 by mgeorges          #+#    #+#             */
/*   Updated: 2025/03/13 08:03:39 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    //./megaphone sans arg -> message d'erreur prédéfini 
    //(void)av;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0); 
    }
    //./megaphone "arg" -> doit afficher arg[1] et le transformer en maj
    int i = 1;
    while (av[i])
    {
        int j = 0;
        while (av[i][j])
        {
            std::cout << (char)toupper(av[i][j]);
            j++;
        }
        std::cout << " ";
        std::cout << std::endl;
        //std::cout << " ";
        i++;
    }
    return 0;
}
