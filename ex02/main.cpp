/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:49:25 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 01:20:04 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap	clap("Clap101");
    ScavTrap scav("Scav101");
	FragTrap	fragy("Frag101");
	
	clap.attack("training dummy");
    clap.takeDamage(6);
    clap.beRepaired(4);

    scav.attack("ROBERT-1");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    fragy.attack("ROBERTTO");
    fragy.takeDamage(50);
    fragy.beRepaired(25);
    fragy.highFivesGuys();
    
    for (int i = 0; i < 5; i++)
    {
        fragy.attack("training bag");
    }
    
    fragy.takeDamage(100);
    fragy.beRepaired(10);
    
	return (0);
}