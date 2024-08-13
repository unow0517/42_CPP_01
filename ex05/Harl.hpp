/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:36:00 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/13 12:32:53 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>
#include <string>

class Harl
{
	private:
		void debug (void);
		void info (void);
		void warning (void);
		void error (void);
	public:
		Harl();
		~Harl();
		void    complain( std::string level );
};

#endif