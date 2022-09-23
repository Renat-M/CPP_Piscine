/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:10:20 by meourea           #+#    #+#             */
/*   Updated: 2022/05/10 18:59:04 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
	public:
		Harl();
		void complain( std::string level );

	private:
		void (Harl::*func_ptr[4])( void );
		std::string _messages[4];
		
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
