/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:10:29 by meourea           #+#    #+#             */
/*   Updated: 2022/05/10 19:44:25 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_messages[0] = "DEBUG";
	_messages[1] = "INFO";
	_messages[2] = "WARNING";
	_messages[3] = "ERROR";
	
	func_ptr[0] = &Harl::debug;
	func_ptr[1] = &Harl::info;
	func_ptr[2] = &Harl::warning;
	func_ptr[3] = &Harl::error;	
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
	"I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. "
	"You didn’t put enough bacon in my burger! "
	"If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I’ve been coming for years whereas you started working "
	"here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	int lvl = -1;
	for (int i = 0; i < 4; ++i) {
		if (level == _messages[i])
		{
			lvl = i;
			break ;
		}	
	}
	switch (lvl)
	{
		case 0:
			(this->*func_ptr[0])();
		case 1:
			(this->*func_ptr[1])();
		case 2:
			(this->*func_ptr[2])();
		case 3:
			(this->*func_ptr[3])();
	}
}