/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:30:19 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/25 15:01:21 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
//#include "../includes/PhoneBook.hpp"

Contact::Contact()
{
    std::cout << "Constructor called" << std::endl;
}

Contact::~Contact()
{
}

void    Contact::setInfo() {
    std::cout << "First Name : ";
    std::getline(std::cin, _firstName);

    std::cout << "Last Name : ";
    std::getline(std::cin, _lastName);

    std::cout << "Nickname : ";
    std::getline(std::cin, _nickName);

    std::cout << "Phone Number : ";
    std::getline(std::cin, _phoneNumber);

    std::cout << "Darkest secret : ";
    std::getline(std::cin, _darkestSecret);
}

void    Contact::displayInfo() const {
    std::cout << "First Name : " << _firstName << std::endl;
    std::cout << "Last Name : " << _lastName << std::endl;
    std::cout << "Nickname : " << _nickName << std::endl;
    std::cout << "Phone Number : " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret : " << _darkestSecret << std::endl;
}