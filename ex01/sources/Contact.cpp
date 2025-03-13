/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:30:19 by mgeorges          #+#    #+#             */
/*   Updated: 2025/03/13 08:04:42 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

static int  contactCount = 0;

Contact::Contact()
{
    //std::cout << "Constructor called" << std::endl;
    contactCount++;
}

Contact::~Contact()
{
    //std::cout << "Destructor called" << std::endl;
    if (contactCount > 0) {
        contactCount--;
    }
}

void    Contact::setInfo() {
    std::cout << "First Name : ";
    std::getline(std::cin, _firstName);
    while (_firstName.empty()) {
        std::cout << "\033[31mError: empty field\033[0m" << std::endl;
        std::cout << "First Name : ";
        std::getline(std::cin, _firstName);
    }
    std::cout << "Last Name : ";
    std::getline(std::cin, _lastName);
    while (_lastName.empty()) {
        std::cout << "\033[31mError: empty field\033[0m" << std::endl;
        std::cout << "Last Name : ";
        std::getline(std::cin, _lastName);
    }

    std::cout << "Nickname : ";
    std::getline(std::cin, _nickName);
    while (_nickName.empty()) {
        std::cout << "\033[31mError: empty field\033[0m" << std::endl;
        std::cout << "Nickname : ";
        std::getline(std::cin, _nickName);
    }
    
    std::cout << "Phone Number : ";
    std::getline(std::cin, _phoneNumber);
    while (_phoneNumber.empty() || !isOnlyDigits(_phoneNumber)) {
        std::cout << "\033[31mError: empty field or should be numeric\033[0m" << std::endl;
        std::cout << "Phone Number : ";
        std::getline(std::cin, _phoneNumber);
    }

    std::cout << "Darkest secret : ";
    std::getline(std::cin, _darkestSecret);
    while (_darkestSecret.empty()) {
        std::cout << "\033[31mError: empty field\033[0m" << std::endl;
        std::cout << "Darkest secret : ";
        std::getline(std::cin, _darkestSecret);
    }
}

void    Contact::displayInfo() const {
    std::cout << "First Name : " << _firstName << std::endl;
    std::cout << "Last Name : " << _lastName << std::endl;
    std::cout << "Nickname : " << _nickName << std::endl;
    std::cout << "Phone Number : " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret : " << _darkestSecret << std::endl;
}

bool Contact::isOnlyDigits(const std::string& str) {
    size_t i;

    i = 0;
    while (i < str.length()){
        if (!std::isdigit(str[i])){
            return false;
        }
        else {
            i++;
        }
    }
    return true;
}

std::string Contact::getFirstname() const {
    return _firstName;
}

std::string Contact::getLastname() const {
    return _lastName;
}

std::string Contact::getNickname() const{
    return _nickName;
}