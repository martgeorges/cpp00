/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:16:10 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/27 11:00:35 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>
# include <cstring>
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook
{
  private:
	Contact _contacts[8];
	int _index;
	bool _full;

  public:
	PhoneBook();
	void addContact();
    void showInstructions() const;
	void displayContacts() const;
	Contact getContact(int index);
	int getContactCount() const;
};

#endif