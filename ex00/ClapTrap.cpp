#include <ClapTrap.hpp>

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap) {
	if (this != &clap) {
		_name = clap._name;
		_hitPoints = 10;
		_energyPoints = 10;
		_attackDamage = 0;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoints && _hitPoints) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
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
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, causing it's hit points to be " << _hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can not take damge, since it's hit points are at " << _hitPoints << std::endl;	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints && _hitPoints) {
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " gets repaired " << amount << " hit points, causing it's hit points to be " << _hitPoints << " and it's energy points to be " << _energyPoints << std::endl; 
	}
}
