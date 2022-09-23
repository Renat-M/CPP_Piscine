/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:28:08 by meourea           #+#    #+#             */
/*   Updated: 2022/05/25 21:18:08 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
