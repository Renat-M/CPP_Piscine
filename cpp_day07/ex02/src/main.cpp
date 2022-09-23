/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:24:22 by meourea           #+#    #+#             */
/*   Updated: 2022/05/26 23:19:23 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Array.hpp"

int main()
{
	Array<int> int_arr(30);
	int *mirror = new int[30];
	
	Array<std::string> str_arr(3);
	str_arr[0] = "Hello";
	str_arr[1] = "World";
	str_arr[2] = "!";
	
	for (int i = 0; i < 3; i++)
		std::cout << str_arr[i] << std::endl;
		
	srand(time(0));
	for (int i = 0; i < 30; i++)
	{
		int value = rand();
		int_arr[i] = value;
		mirror[i] = value;
	}
	
	{
		Array<int> tmp = int_arr;
		Array<int> test(tmp);
	}
	
	try
	{
		int_arr[-2] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int_arr[150] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (int i = 0; i < 30; i++)
	{
		std::cout << mirror[i] << " mirror | " << int_arr[i] << " number\n";
		if (mirror[i] != int_arr[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	delete[] mirror;
	return 0;
}