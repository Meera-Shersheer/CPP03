/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:02:55 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 01:27:53 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "DefaultName";
	this->Hitpoints = 100;
	this->energry_points = 50;
	this->attack_damage = 20;
	std::cout<< this->name <<" is created by calling the default Constructor of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->energry_points = 50;
	this->attack_damage = 20;
	std::cout<< this->name <<" is created by calling the Parameterized  Constructor of ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<< "ScavTrap destructor is called. Destroying "<< this->name <<"."<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& instance) : ClapTrap(instance)
{
	std::cout<< this ->name <<" has been copied by calling the Copy Constructor of ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& instance)
{
	if (this != &instance)
		ClapTrap::operator=(instance);
		
	std::cout << "ScavTrap " << this->name << " has been assigned using the Copy assignment operator !" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Hitpoints == 0)
	{
		std::cout << this->name << " has no hit points left to attack!" << std::endl;
		return ;
	}
	if (this->energry_points == 0)
	{
		std::cout << this->name << " has no energy points left to attack!" << std::endl;
		return ;
	}
	this->energry_points -= 1;
	std::cout << "ScavTrap " << this->name <<" attacks "<< target << ", causing "<< this->attack_damage<<" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
		std::cout<< this ->name <<" from ScavTrap is in Gate Keeper mode" << std::endl;

}
