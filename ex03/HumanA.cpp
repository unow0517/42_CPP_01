/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:22:35 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/12 21:51:23 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string input, Weapon &wp):name(input),_weapon(wp){};
HumanA::~HumanA(){};
void HumanA::attack()
{
	std::cout << name << " attacks with their " << _weapon.getType() << std::endl;
}