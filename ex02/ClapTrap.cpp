/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:28 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/19 12:02:56 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(void): _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap): _name(clap._name), _hitPoints(clap._hitPoints),
	_energyPoints(clap._energyPoints), _attackDamage(clap._attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string &name): _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap) {
	if (this != &clap) {
		_name = clap._name;
		_hitPoints = clap._hitPoints;
		_energyPoints = clap._energyPoints;
		_attackDamage = clap._attackDamage;
	}
	std::cout << "ClapTrap copy assignment called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoints && _hitPoints) {
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_hitPoints)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no energy points to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints) {
		if (_hitPoints > amount)
			_hitPoints -= amount;
		else {
			_hitPoints = 0;
			_energyPoints = 0;
		}
		std::cout << "ClapTrap " << _name << " takes " << amount
			<< " points of damage, causing it's hit points to be " << _hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name
			<< " can not take damge, since it's hit points are at " << _hitPoints << std::endl;	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints && _hitPoints) {
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " gets repaired "
			<< amount << " hit points, causing it's hit points to be "
			<< _hitPoints << " and it's energy points to be " << _energyPoints << std::endl; 
	}
	else if (!_hitPoints)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no energy points to attack" << std::endl;
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	std::cout << "ClapTrap gets it's hitPoints updated from " << _hitPoints
		<< " to " << amount << std::endl;
	_hitPoints = amount;
}
