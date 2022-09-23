/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:04:43 by meourea           #+#    #+#             */
/*   Updated: 2022/05/08 14:21:58 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void    Contact::SetFirstName(std::string _first_name)
{
	first_name = _first_name;
}
void    Contact::SetLastName(std::string _last_name)
{
	last_name = _last_name;
}
void    Contact::SetNick(std::string _nick)
{
	nick = _nick;
}
void    Contact::SetNumber(std::string _number)
{
	number = _number;
}
void    Contact::SetSecret(std::string _secret)
{
	secret = _secret;
}

std::string Contact::GetFirstName()
{
	return (first_name);
}
std::string Contact::GetLastName()
{
	return (last_name);
}
std::string Contact::GetNumber()
{
	return (number);
}
std::string Contact::GetNick()
{
	return (nick);
}
std::string Contact::GetSecret()
{
	return (secret);
}

Contact		&Contact::operator=(Contact& _contact)
{
	SetFirstName(_contact.GetFirstName());
	SetLastName(_contact.GetLastName());
	SetNick(_contact.GetNick());
	SetNumber(_contact.GetNumber());
	SetSecret(_contact.GetSecret());
	return (*this);
}

void    Contact::PrintContact()
{
	std::cout << "First name: " << GetFirstName() << std::endl;
	std::cout << "Last name: " << GetLastName() << std::endl;
	std::cout << "Nick name: " << GetNick() << std::endl;
	std::cout << "Number: " << GetNumber() << std::endl;
	std::cout << "Secret: " << GetSecret() << std::endl;
}

Contact::~Contact() {}