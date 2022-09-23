/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:00:41 by meourea           #+#    #+#             */
/*   Updated: 2022/05/28 16:05:37 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert conv;
		std::string input = static_cast<std::string>(argv[1]);
		conv.typeCheck(input);
		conv.convertation(input);
	}
	else
	{
		std::cout << "Error: program takes one parameter" << std::endl;
		return (1);
	}
	return (0);
}

