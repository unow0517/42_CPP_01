/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:30:42 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/12 22:14:47 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string input):name(input),_weapon(NULL){};

HumanB::~HumanB(){};

void HumanB::attack()
{
	std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &wp)
{
	_weapon = &wp;
};

