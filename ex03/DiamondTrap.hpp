/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 01:23:53 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 03:39:20 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap(const DiamondTrap& instance);
		DiamondTrap& operator=(const DiamondTrap& instance);
		
		void whoAmI();
		
		using ScavTrap::attack;

};
#endif