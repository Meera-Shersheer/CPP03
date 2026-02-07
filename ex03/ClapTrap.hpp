/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:50:00 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 03:39:06 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int Hitpoints;
		unsigned int energry_points;
		unsigned int attack_damage;
		
	public:
		ClapTrap();	
		ClapTrap(std::string name);		
		ClapTrap(const ClapTrap& instance);
		
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& instance);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

	
};

#endif 