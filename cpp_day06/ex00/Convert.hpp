/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:15:58 by meourea           #+#    #+#             */
/*   Updated: 2022/05/25 17:56:14 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

class Convert
{
	private:
		
		std::string _type;

	public:

		Convert();
		Convert(const Convert &rhs);
		~Convert();

		Convert &operator=(const Convert &rhs);

		void typeCheck(const std::string &input);
		void convertation(const std::string &input) const;
		std::string &getType();
};

