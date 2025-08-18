/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:05:50 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/18 12:54:56 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Crazy Diamond");
    diamond.whoAmI();
    diamond.attack("Kiraa Kuiin"); // Uses ScavTrap's attack
    diamond.takeDamage(50);
    diamond.beRepaired(30);
    diamond.guardGate(); // From ScavTrap
    diamond.highFivesGuys(); // From FragTrap
    diamond.takeDamage(100); // Should show 0 hit points
    diamond.attack("Kiraa Kuiin"); // Should fail
    return (0);
}