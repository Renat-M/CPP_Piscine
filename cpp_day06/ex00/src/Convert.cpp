/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:16:17 by meourea           #+#    #+#             */
/*   Updated: 2022/05/28 16:14:33 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const Convert &rhs)
{
	*this = rhs;
}

Convert &Convert::operator=(const Convert &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

void Convert::typeCheck(const std::string &input)
{
	if (!isdigit(input.at(0)))
	{
		if (input == "-inf" || input == "+inf" || input == "-inff" || input == "+inff" \
		|| input == "nan" || input == "nanf")
		{
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << static_cast<float>(std::stod(input)) << "f" << std::endl;
			std::cout << "double: " << std::stod(input) << std::endl;
			std::cout << "char: impossible" << std::endl;
			exit (0);
		}
	}
	int letter = 0, dot = 0, sign = 0;
	for (size_t i = 0; i != input.size(); i++)
	{
		if (i == (input.size() - 1) && input.at(i) == 'f')
			break ;
		if (i == 0 && input.at(i) == '-')
		{
			sign++;
			continue ;
		}
		if (!isdigit(input.at(i)))
			letter++;
		if (input.at(i) == '.')
			dot++;
	}
	if (letter > 1)
		_type = "random string";
	else if ((isdigit(input.at(0)) || sign) && letter == 1 && input.at(input.size() - 1) == 'f')
		_type = "float";
	else if ((isdigit(input.at(0)) || sign) && dot == 1 && letter == 1)
		_type = "double";
	else if (!letter)
		_type = "int";
	else if (!isdigit(input.at(0)) && !sign && input.size() == 1)
		_type = "char";
	else
		_type = "random string";
}

void Convert::convertation(const std::string &input) const
{
	if (_type == "random string")
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	if (_type == "char")
	{
		int c = input.at(0);
		std::cout << "int: " << c << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(c) << std::endl;
		std::cout << "char: " << input << std::endl;
		exit (0);
	}
	try
	{
		std::cout << "int: " << std::stoi(input) << std::endl;
	}
	catch(std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch(std::out_of_range &e)
	{
		std::cout << "impossible, out of range" << std::endl;
	}
	try
	{
		std::cout << std::fixed << std::setprecision(2) << "float: " << std::stof(input) << "f" << std::endl;
	}
	catch(std::invalid_argument &e)
	{
		std::cout << "impossible";
	}
	catch(std::out_of_range &e)
	{
		std::cout << "impossible, out of range" << std::endl;	
	}
	try
	{
		std::cout << std::fixed << std::setprecision(2) << "double: " << std::stod(input) << std::endl;
	}
	catch(std::invalid_argument &e)
	{
		std::cout << "impossible";
	}
	catch(std::out_of_range &e)
	{
		std::cout << "impossible, out of range" << std::endl;	
	}
	try
	{
		int i = std::stoi(input);
		char c = static_cast<char>(i);
		if (isprint(i) && isprint(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: not printable" << std::endl;
	}
	catch(std::invalid_argument &e)
	{
		std::cout << "char: impossible";
	}
	catch(std::out_of_range &e)
	{
		std::cout << "char: impossible, out of range" << std::endl;	
	}
}

std::string &Convert::getType()
{
	return (_type);
}
