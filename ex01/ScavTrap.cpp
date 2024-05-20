/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:54 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/20 08:18:27 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->operator=(scav);
}

ScavTrap::ScavTrap(std::string &name): ClapTrap(name) {
	std::cout << "ScavTrap string constructor called" << std::endl;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 20;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scav) {
	if (this != &scav)
		ClapTrap::operator=(scav);
	std::cout << "ScavTrap copy assignment called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (ClapTrap::_hitPoints && ClapTrap::_energyPoints) {
		ClapTrap::_energyPoints--;
		std::cout << "ScavTrap " << ClapTrap::_name <<  " attacks "
		<< target << ", causing " << ClapTrap::_attackDamage << " points of damage!" << std::endl;
	}
	else if (!ClapTrap::_hitPoints)
		std::cout << "ScavTrap " << ClapTrap::_name << " is dead" << std::endl;
	else
		std::cout << "ScavTrap " << ClapTrap::_name << " has no energy points to attack" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << ClapTrap::_name << " is now in Gate keeper mode" << std::endl;
}
