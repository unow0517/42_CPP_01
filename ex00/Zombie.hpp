/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:20:17 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/10 22:25:50 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream> //for cout

class Zombie{
private:
	std::string name;
public:
	Zombie (void);
	~Zombie (void);
	
	void announce( void );
	void setName( std::string input );
};
Zombie*	newZombie( std::string name );
void	randomChump ( std::string name );




#endif