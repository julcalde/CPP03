/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:05:50 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/16 20:34:37 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("DIZ-CHEEKS");
	clap.attack("Teemo");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.takeDamage(15); // should show 0 HP
	clap.attack("Teemo"); // Should fail (no HP)
	clap.beRepaired(5); // Should fail (no HP)
	return (0);
}