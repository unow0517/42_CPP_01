/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:24:50 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/12 17:43:10 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 10;
	
	Zombie *zombies = zombieHorde(N, "oneOfZombies");
	for(int i = 0; i < N; i++)
		zombies[i].announce();
		
	// operator delete[] (zombies);
	delete[] zombies;
	return (0);
}