/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:20:00 by meourea           #+#    #+#             */
/*   Updated: 2022/05/08 14:41:52 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void ft_add(PhoneBook &book)
{
	std::string fields[5];
	std::string field_names[] = {
		"First name",
		"Last name",
		"Nickname",
		"Number",
		"Secret"
	};
	
	for(int i = 0; i < 5; i++)
	{
		std::cout << field_names[i] + ": ";
		while (1)
		{
			std::getline(std::cin, fields[i]);
			if (fields[i].empty())
			{
				std::cout << field_names[i] + " cannot be empty." << std::endl;
				continue;
			}
			break;
		}
	}
	book.AddContact(fields[0], fields[1], fields[2], fields[3], fields[4]);
}

void    ft_search(PhoneBook &book)
{
	std::cout << "*********************************************\n";
	std::cout << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|\n";
	std::cout << "*********************************************\n";
	std::cout << "|          |          |          |          |\n";

	Contact tmp;
	std::string field;
	for (size_t i = 0; i < 8; i++)
	{
		tmp = book.GetContact(i);
		if (tmp.GetFirstName().empty())
			break;
		
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1;

		std::cout << "|";
		field = tmp.GetFirstName();
		std::cout.width(10);
		if (field.size() > 10)
			std::cout << field.substr(0, 9) + ".";
		else
			std::cout << field;
		
		std::cout << "|";
		field = tmp.GetLastName();
		std::cout.width(10);
		if (field.size() > 10)
			std::cout << field.substr(0, 9) + ".";
		else
			std::cout << field;
		
		std::cout << "|";
		field = tmp.GetNick();
		std::cout.width(10);
		if (field.size() > 10)
			std::cout << field.substr(0, 9) + ".";
		else
			std::cout << field;
		std::cout << "|\n";
	}

	// std::cout.width(10);
	std::cout << "|          |          |          |          |\n";
	std::cout << "*********************************************\n";

	if (book.GetContact(0).GetFirstName() == "")
		return;

	int index;
	std::cout << "Enter index of contact for more information > ";
	while (1)
	{
		if((std::cin >> index) && (index > 0) && (index < 9) && !(book.GetContact(index - 1).GetFirstName().empty()))
			break ;
		std::cin.clear();
		std::cin.ignore(INT32_MAX, '\n');
		std::cout << "Invalid index, enter again > ";
	}
	std::cin.ignore(INT32_MAX, '\n');
	book.GetContact(index - 1).PrintContact();
}

int main()
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "enter command (ADD, SEARCH or EXIT) > ";
		std::getline(std::cin, command);
		if (command == "ADD")
			ft_add(book);
		if (command == "SEARCH")
			ft_search(book);
		if (command == "EXIT")
			return (0);
	}
}
