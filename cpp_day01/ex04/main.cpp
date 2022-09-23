/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:24:02 by meourea           #+#    #+#             */
/*   Updated: 2022/05/10 17:57:13 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return 0;
	}
	
	std::string 	fileName = argv[1],
					str1 = argv[2],
					str2 = argv[3],
					buf,
					tmp,
					fileOut;
	std::ifstream 	in;
	std::ofstream	out;
	
	fileOut = fileName + ".replace";
	in.open(fileName);
	if (!in)
	{
		std::cout << "File IN is not open." << std::endl;
		exit (1);
	}
	out.open(fileOut);
	if (!out)
	{
		std::cout << "File OUT is not open." << std::endl;
		exit (1);
	}
	
	while (std::getline(in, buf))
	{
		for (size_t i = 0; i < buf.length(); i++)
		{
			tmp = &buf[i];
			tmp = tmp.substr(0, str1.length());
			if (tmp.find(str1) == 0)
			{
				out << str2;
				i += str1.length() - 1;
			}
			else
				out << buf[i];
		}
		if (!in.eof())
			out << '\n';
	}
	in.close();
	out.close();
	return (0);
}