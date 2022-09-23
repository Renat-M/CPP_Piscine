/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:03:46 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 19:27:42 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public:

		Brain();
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		~Brain();

		void setIdea(const unsigned int &i, const std::string &idea);
		const std::string &getIdea(const unsigned int &i) const;
	
	private:
		
		std::string _ideas[100];
};