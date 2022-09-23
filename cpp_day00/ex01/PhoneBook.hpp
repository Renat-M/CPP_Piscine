/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:19:44 by meourea           #+#    #+#             */
/*   Updated: 2022/05/08 14:47:51 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact Contacts[8];
	int		index;

	public:
	PhoneBook();
	void	AddContact(std::string _first_name, std::string _last_name, \
		std::string _nick, std::string _number, std::string _secret);
	int		GetIndex();
	void	SetIndex(int i);
	Contact &GetContact(int _index);
	~PhoneBook();
};