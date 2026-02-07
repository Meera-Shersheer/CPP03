/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:02:55 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 01:03:33 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "DefaultName";
	this->Hitpoints = 100;
	this->energry_points = 100;
	this->attack_damage = 30;
	std::cout<< this->name <<" is created by calling the default Constructor of FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->energry_points = 100;
	this->attack_damage = 30;
	std::cout<< this->name <<" is created by calling the Parameterized  Constructor of FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<< "FragTrap destructor is called. Destroying "<< this->name <<"."<< std::endl;
}

FragTrap::FragTrap(const FragTrap& instance) : ClapTrap(instance)
{
	std::cout<< this ->name <<" has been copied by calling the Copy Constructor of FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& instance)
{
	if (this != &instance)
		ClapTrap::operator=(instance);
		
	std::cout << "FragTrap " << this->name << " has been assigned using the Copy assignment operator !" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name  << " requests a positive high five " <<
	": Give FragTrap a High Five !!!" << std::endl;
}