/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:00:39 by mgeorges          #+#    #+#             */
/*   Updated: 2025/03/12 20:25:13 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>

class Contact
{
  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

  public:
	Contact();
	~Contact();
    
    void    setInfo();
    void    displayInfo() const;
	std::string	getFirstname() const;
	std::string getLastname() const;
	std::string getNickname() const;
};

#endif