/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:12:44 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/10 22:28:32 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void randomChump ( std::string name )
{
	Zombie *ptrZ;

	ptrZ = newZombie(name);
	ptrZ->announce();
	delete ptrZ;
}