/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:02:42 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/08 13:49:00 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const unsigned int _Hitpoints_;
		static const unsigned int _energry_points_;
		static const unsigned int _attack_damage_;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap(const ScavTrap& instance);
		ScavTrap& operator=(const ScavTrap& instance);
		
		void attack(const std::string& target);
		void guardGate();

};
#endif