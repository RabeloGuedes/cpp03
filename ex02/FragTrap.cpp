/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:05 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/23 08:48:20 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << BLUE_BACKGROUND << "FragTrap" << GREEN_TEXT << " "
		<< ClapTrap::name <<  " default constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = 100;
	ClapTrap::energyPoints = 100;
	ClapTrap::attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout << BLUE_BACKGROUND << "FragTrap" << YELLOW_TEXT << " "
		<< ClapTrap::name << " copy constructor called" << std::endl << WHITE_TEXT;
	this->operator=(frag);
}

FragTrap::FragTrap(std::string &name): ClapTrap(name) {
	std::cout << BLUE_BACKGROUND << "FragTrap" << BLUE_TEXT << " "
		<< ClapTrap::name << " string constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = 100;
	ClapTrap::energyPoints = 100;
	ClapTrap::attackDamage = 30;
}

FragTrap	&FragTrap::operator=(const FragTrap &frag) {
	if (this != &frag)
		ClapTrap::operator=(frag);
	std::cout << BLUE_BACKGROUND << "FragTrap" << MAGENTA_TEXT << " "
		<< ClapTrap::name << " copy assignment called" << std::endl << WHITE_TEXT;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << BLUE_BACKGROUND << "FragTrap" << RED_TEXT << " "
		<< ClapTrap::name << " destructor called" << std::endl << WHITE_TEXT;
}

void	FragTrap::highFiveGuys(void) {
	if (ClapTrap::hitPoints && ClapTrap::energyPoints) {
		std::cout << BLUE_TEXT << "FragTrap " << ClapTrap::name
			<< " requests a high five" << std::endl << WHITE_TEXT;
	}
	else if (!ClapTrap::hitPoints)
		std::cout << RED_TEXT << "FragTrap " << ClapTrap::name << " is dead" << std::endl <<  WHITE_TEXT;
	else
		std::cout << RED_TEXT << "FragTrap " << ClapTrap::name << " has no energy points" << std::endl << WHITE_TEXT;
}
