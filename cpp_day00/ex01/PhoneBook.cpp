/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:19:32 by meourea           #+#    #+#             */
/*   Updated: 2022/05/08 14:46:56 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
	index = 0;
}

int		PhoneBook::GetIndex()
{
	return index;
}
void	PhoneBook::SetIndex(int i)
{
	index = i;
}

void	PhoneBook::AddContact(std::string _first_name, std::string _last_name, \
	std::string _nick, std::string _number, std::string _secret)
{
	if (GetIndex() > 7)
		SetIndex(0);
	int index = GetIndex();
	Contacts[index].SetFirstName(_first_name);
	Contacts[index].SetLastName(_last_name);
	Contacts[index].SetNick(_nick);
	Contacts[index].SetNumber(_number);
	Contacts[index].SetSecret(_secret);
	index++;
	SetIndex(index);
}

Contact &PhoneBook::GetContact(int _index)
{
	return (Contacts[_index]);
}

PhoneBook::~PhoneBook() {}