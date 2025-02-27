/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:55:01 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/27 11:48:38 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _full(false) {}

void    PhoneBook::addContact() {
    if (_index == 8)
    {
        _index = 0;
        _full = true;
    }
    _contacts[_index].setInfo();
    _index++;
}

void    PhoneBook::displayContacts() const {
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

    int maxContacts;

    if (_full)
    {
        maxContacts = 8;
    }
    else {
        maxContacts = _index;
    }
    for (int i = 0; i < maxContacts; i++) {
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        std::string  firstName = _contacts[i].getFirstname();
        if (firstName.length() > 10)
        {
            firstName = firstName.substr(0,9) + ".";
        }
        std::cout << std::setw(10) << firstName << "|";
        std::string lastName = _contacts[i].getLastname();
        if (lastName.length() > 10)
        {
            lastName = lastName.substr(0,9) + ".";
        }
        std::cout << std::setw(10) << lastName << "|";
        std::string nickName = _contacts[i].getNickname();
        if (nickName.length() > 10)
        {
            nickName = nickName.substr(0,9) + ".";
        }
        std::cout << std::setw(10) << nickName << "|";
        std::cout << std::endl;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
}

void    PhoneBook::showInstructions() const {
    std::cout << "\033[31mError: Invalid command: Use -> [ADD, SEARCH or EXIT]\033[0m" << std::endl;
}

Contact PhoneBook::getContact(int index) {
    return (_contacts[index]);
}

int PhoneBook::getContactCount() const {
    if (_full) {
        return 8;
    } else {
        return _index;
    }
}
