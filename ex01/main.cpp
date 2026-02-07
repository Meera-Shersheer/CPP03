/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:49:25 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 00:48:20 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap	clap("Clap101");
	ScavTrap	scav("Scav101");
	
	clap.attack("training dummy");
    clap.takeDamage(6);
    clap.beRepaired(4);

    scav.attack("ROBERT-1");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    
    for (int i = 0; i < 5; i++)
    {
        scav.attack("training bag");
    }
	return (0);
}