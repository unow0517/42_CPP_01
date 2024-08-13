/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:36:00 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/13 12:58:14 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};
		
void Harl::debug (void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info (void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error (void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain( std::string level )
{
	std::map<std::string, void (Harl::*)(void)> complainMap;
	complainMap.insert(std::make_pair("DEBUG", &Harl::debug));
	complainMap.insert(std::make_pair("INFO", &Harl::info));
	complainMap.insert(std::make_pair("WARNING", &Harl::warning));
	complainMap.insert(std::make_pair("ERROR", &Harl::error));
	
	std::map<std::string, void (Harl::*)()>::iterator it = complainMap.find(level);
	if (it != complainMap.end()){
		(this->*(it->second))();
	}else
		std::cout << "unknown complaint level" << std::endl;
}

