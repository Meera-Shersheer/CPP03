/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:49:50 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 03:38:59 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->Hitpoints = 10;
	this->energry_points = 10;
	this->attack_damage = 0;
	std::cout<< this ->name <<" is created by calling the Parameterized  Constructor of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "DefaultName";
	this->Hitpoints = 10;
	this->energry_points = 10;
	this->attack_damage = 0;
	std::cout<< this ->name <<" is created by calling the Default Constructor of ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& instance)
{
	this->name = instance.name;
	this->Hitpoints = instance.Hitpoints;
	this->energry_points = instance.energry_points;
	this->attack_damage = instance.attack_damage;
	std::cout<< this ->name <<" has been copied by calling the Copy Constructor of ClapTrap" << std::endl;

}
		
ClapTrap::~ClapTrap()
{
	std::cout<< "ClapTrap destructor is called. Destroying "<< this->name <<"."<< std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& instance)
{
	if (this != &instance)
	{
		this->name = instance.name;
		this->Hitpoints = instance.Hitpoints;
		this->energry_points = instance.energry_points;
		this->attack_damage = instance.attack_damage;
	}
	std::cout << "ClapTrap " << this->name << " has been assigned using the Copy assignment operator !" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->name <<" attacks "<< target << ", causing "<< this->attack_damage<<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitpoints == 0)
	{
		std::cout << this->name << " is destroyed" << std::endl;
		return ;
	}
	if (this->Hitpoints <= amount)
	{
		this->Hitpoints = 0;
		std::cout << this->name << " takes " << amount << " of damage! " << std::endl;
        std::cout << this->name << " is Dead" << std::endl;
		return ;
	}
	this->Hitpoints -= amount;
	std::cout << this->name << " takes " << amount << " damage and now have " << this->Hitpoints << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitpoints == 0)
	{
		std::cout << this->name << " has no hit points left to be repaired!" << std::endl;
		return ;
	}
	if (this->energry_points == 0)
	{
		std::cout << this->name << " has no energy points left to be repaired!" << std::endl;
		return ;
	}
	this->Hitpoints += amount;
	this->energry_points -= 1;
	std::cout << this->name << " has been repaired by " << amount << " hit points!" << std::endl;

}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->Hitpoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->energry_points);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->attack_damage);
}