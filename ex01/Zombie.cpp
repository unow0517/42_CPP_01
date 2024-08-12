/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:21:54 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/10 23:40:42 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "";
}

Zombie::Zombie( std::string input )
{
	this->name = input;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << name << " is destructed" <<std::endl;
	
}
void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName ( std::string input )
{
	this->name = input;
}