/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 01:24:04 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 04:15:44 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	ScavTrap tempScav;
    FragTrap tempFrag;
	
	this->name = "DefaultName";
	this->Hitpoints = tempFrag.getHitPoints();
	this->energry_points = tempScav.getEnergyPoints();
	this->attack_damage = tempFrag.getAttackDamage();
	std::cout<< this->name <<" is created by calling the default Constructor of DiamondTrap" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	ScavTrap tempScav;
    FragTrap tempFrag;
	
	this->name = name;
	this->Hitpoints = tempFrag.getHitPoints();
	this->energry_points = tempScav.getEnergyPoints();
	this->attack_damage = tempFrag.getAttackDamage();
	std::cout<< this->name <<" is created by calling the Parameterized  Constructor of DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<< "DiamondTrap destructor is called. Destroying "<< this->name <<"."<< std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& instance)  : ClapTrap(instance), ScavTrap(instance), FragTrap(instance)
{
	this->name = instance.name;
	ClapTrap::name = instance.ClapTrap::name;
	this->Hitpoints = instance.FragTrap::Hitpoints;
	this->energry_points = instance.ScavTrap::energry_points;
	this->attack_damage = instance.FragTrap::attack_damage;
	std::cout<< this->name <<" has been copied by calling the Copy Constructor of DiamondTrap" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& instance)
{
	if (this != &instance)
	{
		this->name = instance.name;
		ClapTrap::name = instance.ClapTrap::name;
		this->Hitpoints = instance.FragTrap::Hitpoints;
		this->energry_points = instance.ScavTrap::energry_points;
		this->attack_damage = instance.FragTrap::attack_damage;
	}	
	std::cout << "DiamondTrap " << this->name << " has been assigned using the Copy assignment operator !" << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Clap Trap name is: " << this->ClapTrap::name << 
	" While DiamondTrap name: " << this->name << std::endl;
}

