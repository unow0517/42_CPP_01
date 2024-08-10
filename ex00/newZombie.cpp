/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZomebie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:31:35 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/10 22:11:45 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie;

	zombie->setName( name );
	return zombie;
}