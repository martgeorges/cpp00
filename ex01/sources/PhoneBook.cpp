/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:55:01 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/25 16:10:33 by mgeorges         ###   ########.fr       */
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

void    PhoneBook::showInstructions() {
    std::cout << "Invalid command. Use -> [ADD, SEARCH or EXIT]" << std::endl;
}