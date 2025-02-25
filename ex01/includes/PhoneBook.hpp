/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:16:10 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/25 15:02:46 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>

class PhoneBook
{
private:
    Contact _contacts[8];
public:
    PhoneBook();
    ~PhoneBook();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

#endif