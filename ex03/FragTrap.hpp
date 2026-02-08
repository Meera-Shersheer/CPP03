/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:02:42 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/08 13:48:43 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
	protected:
		static const unsigned int _Hitpoints;
		static const unsigned int _energry_points;
		static const unsigned int _attack_damage;
		
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		FragTrap(const FragTrap& instance);
		FragTrap& operator=(const FragTrap& instance);
		
		void highFivesGuys(void);

};
#endif