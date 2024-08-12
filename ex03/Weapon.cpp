/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:17:10 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/12 22:05:14 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string input): type(input){};

Weapon::~Weapon(){};

std::string &Weapon::getType()
{
	return (type);
};

void Weapon::setType(const std::string input)
{
	type = input;
};

