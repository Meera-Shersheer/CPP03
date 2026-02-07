/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:49:25 by mshershe          #+#    #+#             */
/*   Updated: 2026/02/06 19:59:31 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap	b("Wally");
	ClapTrap	c("jimmy");
	ClapTrap	e;
	
	ClapTrap	a(b);
	e = c;
	
	a.attack("training dummy");
    a.takeDamage(3);
    a.beRepaired(2);
	
	for (int i = 0; i < 11; ++i)
        a.attack("target");

	// fail --> energy points == 0
    a.beRepaired(5); 

	// Damage > HitPoints → energy points = 0 >> destroy
    b.takeDamage(50);  
    b.attack("N");
	// Repair fail --> Hit Points == 0 
    b.beRepaired(10);  

    ClapTrap d("DELTA");
    d.attack("BOT-1");
    d.takeDamage(4);
    d.beRepaired(4);
    d.takeDamage(12);
	
    d.takeDamage(1);// destroyed already
	
	// cannot attack nor repair when destroyed
    d.attack("BOT-2"); 
    d.beRepaired(3);   
	return (0);
}