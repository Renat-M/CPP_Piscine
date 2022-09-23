/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:04:40 by meourea           #+#    #+#             */
/*   Updated: 2022/05/08 14:47:39 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nick;
	std::string number;
	std::string secret;

	public:
	Contact();
	void SetFirstName(std::string _first_name);
	void SetLastName(std::string _first_name);
	void SetNick(std::string _nick);
	void SetNumber(std::string _number);
	void SetSecret(std::string _secret);

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNumber();
	std::string GetNick();
	std::string GetSecret();

	void		PrintContact();
	Contact		&operator=(Contact& _contact);
	~Contact();
};