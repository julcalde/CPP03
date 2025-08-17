/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:05:47 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/17 14:32:00 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string	_name; // to be passed in the constructor
		unsigned int _hitPoints; // default 10
		unsigned int _energyPoints; // default 10
		unsigned int _attackDamage; // default 0
	
	public:	
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		
		void attack(const std::string& target); // reeduces target's HP, costs 1 EP
		void takeDamage(unsigned int amount); // reduced HP
		void beRepaired(unsigned int amount); // increases HP, costs 1 EP
};

#endif