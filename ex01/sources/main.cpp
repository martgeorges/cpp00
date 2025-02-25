/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:01:10 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/25 15:10:42 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
//#include "../includes/Contact.hpp"
#include <iostream>

int main()
{
    Contact contact;
    std::string command;

    std::cout << "Welcome to your PhoneBook -> [ADD, SEARCH or EXIT]" << std::endl;
    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        //condition if pour le ADD
        if (command == "ADD")
        {
            contact.setInfo();
            //contact.displayInfo();
        }
        //condition else if  pour le SEARCH
        //exit passe aussi en else if (la c pour tester le prog)
        else if (command == "EXIT")
        {
            std::cout << "Exiting program";
            break;
        }
        //condition else pour dire que tout autre commande est fausse
    }
    return 0;
}