/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egache <egache@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:16:14 by egache            #+#    #+#             */
/*   Updated: 2025/12/09 13:22:50 by egache           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);

	private:
		std::string _name;
};

#endif
