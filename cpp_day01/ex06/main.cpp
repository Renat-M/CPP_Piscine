/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:10:05 by meourea           #+#    #+#             */
/*   Updated: 2022/05/10 19:46:59 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;

	if (argc != 2)
	{
		std::cout << "Error: arguments" << std::endl;
		return 1;
	}
	else
		Harl.complain(argv[1]);
	return 0;
}