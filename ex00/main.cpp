/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:35 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/19 11:21:37 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int	main(void) {
	std::string	fighter("Kakarot");
	std::string	enemy("Vegetta");
	ClapTrap	a(fighter);
	ClapTrap	b;

	b = a;

	a.attack(enemy);
	a.attack(enemy);
	a.takeDamage(3);
	a.takeDamage(15);
	a.attack(enemy);
	a.beRepaired(10);

	std::cout << std::endl;
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);
	b.attack(enemy);

	std::cout << std::endl;
	a.attack(enemy);
	return (0);
}
