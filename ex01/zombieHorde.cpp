/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:55:26 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/12 17:42:03 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	// void *memory = operator new[](sizeof(Zombie) * N);
	// Zombie *objects = static_cast<Zombie*>(memory);
	// for (int i = 0; i < N; i++)
	// 	new (&objects[i]) Zombie(name);
	
	Zombie *objects = new Zombie[N];
	for (int i = 0; i < N; i++)
		objects[i].setName(name);
	return objects;
	
}
