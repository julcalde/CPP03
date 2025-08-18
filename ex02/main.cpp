/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:05:50 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/17 14:46:36 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Scavenger");
	scav.attack("Yuumi");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();
	scav.takeDamage(100); // should show 0 HP
	scav.attack("Yuumi"); // should fail
	return (0);
}