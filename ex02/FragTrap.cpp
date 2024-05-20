/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:05 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/20 08:43:33 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 100;
	ClapTrap::_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->operator=(frag);
}

FragTrap::FragTrap(std::string &name): ClapTrap(name) {
	std::cout << "FragTrap string constructor called" << std::endl;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 100;
	ClapTrap::_attackDamage = 30;
}

FragTrap	&FragTrap::operator=(const FragTrap &frag) {
	if (this != &frag)
		ClapTrap::operator=(frag);
	std::cout << "FragTrap copy assignment called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << ClapTrap::_name << " requests a high five" << std::endl;
}
