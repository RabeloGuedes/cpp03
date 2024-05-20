/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:49 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/20 08:19:19 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int	main(void) {
	std::string	fighter("Kakarot");
	std::string	enemy("Vegetta");
	ScavTrap	a(fighter);
	ScavTrap	b;


	a.attack(enemy);
	b.attack(enemy);
	a.attack(enemy);
	a.takeDamage(3);
	a.takeDamage(15);
	b = a;
	b.takeDamage(15);
	a.attack(enemy);
	a.beRepaired(10);

	return (0);
}
