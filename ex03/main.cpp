/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:49:25 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/07 03:44:22 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int     main(void)
{
    DiamondTrap    wally("Didi");
    
    // DiamondTrap    wally = d;
    std::cout << "Hit Points:      " << wally.getHitPoints() << std::endl;

    std::cout << "Energy Points:   " << wally.getEnergyPoints() << std::endl;

    std::cout << "Attack Damage:   " << wally.getAttackDamage() << std::endl;

    
    wally.attack("Eva");
    wally.takeDamage(31);
    wally.beRepaired(16);
    wally.highFivesGuys();
    wally.guardGate();
    wally.whoAmI();
    
    return (0);
}
