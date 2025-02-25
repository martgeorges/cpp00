/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:16:10 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/25 16:06:55 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>
# include <cstring>
# include <iostream>

class PhoneBook
{
  private:
	Contact _contacts[8];
	int _index;
	bool _full;

  public:
	PhoneBook();
	void addContact();
    void showInstructions();
};

#endif