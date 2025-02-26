/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:01:10 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/26 10:15:08 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>

int main()
{
    Contact contact;
    PhoneBook pB;
    std::string command;

    std::cout << "Welcome to your PhoneBook -> [ADD, SEARCH or EXIT]" << std::endl;
    while (true)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        //condition if pour le ADD
        if (command == "ADD")
        {
            //contact.setInfo();
            pB.addContact();
        }
        //condition else if  pour le SEARCH
        else if (command == "SEARCH")
        {
            pB.displayContacts();
            //doit trouver l'index, si pas nombre message d'erreur
            std::cout << "Search details about contact type -> [index]:";
            std::getline(std::cin, command);
            //affiche la liste de l'index donné dans l'input
            //contact.displayInfo();
        }
        //exit
        else if (command == "EXIT")
        {
            std::cout << "Exiting program";
            break;
        }
        //condition else if pour le controle D pour pas que ca crash
        //condition else pour dire que tout autre commande est fausse
        else 
        {
            pB.showInstructions();
        }
    }
    return 0;
}
