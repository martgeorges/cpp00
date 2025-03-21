/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:01:10 by mgeorges          #+#    #+#             */
/*   Updated: 2025/03/13 09:22:31 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int main()
{
    Contact contact;
    PhoneBook pB;
    std::string command;

    std::cout << "\033[33mWelcome to your PhoneBook -> [ADD, SEARCH or EXIT]\033[0m" << std::endl;
    while (true)
    {
        std::cout << "\033[33m$>\033[0mEnter command: ";
        if (!std::getline(std::cin, command))
        {
            std::cout << std::endl;
            std::cout << "\033[31m[CTRL+D pressed, exiting program...]\033[0m";
            break ;
        }
        if (command == "ADD")
        {
            pB.addContact();
            std::cout << "\033[32mContact added !\033[0m" << std::endl;
        }
        else if (command == "SEARCH")
        {
            std::string input;
            int index = -1;
            
            pB.displayContacts();
            std::cout << "\033[32mType [X] to exit [SEARCH] mode\033[0m" << std::endl;
            while (true) 
            {
                std::cout << "Search details about contact type -> [index]:";
                if (!std::getline(std::cin, input))
                {
                    std::cout << std::endl;
                    std::cout << "\033[31m[CTRL+D pressed, exiting program...]\033[0m";
                    break ;
                }
                if (input == "X") 
                {
                    std::cout << "\033[32mExiting search...\033[0m" << std::endl;
                    break;
                }
                if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
                {
                    index = input[0] - '0';
                    if (index > 0 && index <= pB.getContactCount())
                    {
                      pB.getContact(index - 1).displayInfo();  
                    }
                    else
                    {
                        std::cout << "\033[31mError : No contact for this number yet.\033[0m" << std::endl;
                    }
                }
                else
                {
                    std::cout << "\033[31mError : input should be numeric between 1 and 8 .\033[0m" << std::endl;
                }
            }
        }
        else if (command == "EXIT")
        {
            std::cout << "\033[31m[Exiting program]...\033[0m" << std::endl;
            break;
        }
        else 
        {
            pB.showInstructions();
        }
    }
    return 0;
}
