/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:06:07 by meourea           #+#    #+#             */
/*   Updated: 2022/05/25 19:40:20 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

struct Data
{
	int num;
};

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);