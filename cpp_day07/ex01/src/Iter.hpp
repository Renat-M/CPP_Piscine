/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:01:14 by meourea           #+#    #+#             */
/*   Updated: 2022/05/26 20:22:19 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*func)(const T &element))
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}
