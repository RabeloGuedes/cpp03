/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:31:44 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/20 08:41:13 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

int	main(void) {
	std::string	fighter("Kakarot");
	std::string	enemy("Vegetta");
	FragTrap	a(fighter);
	FragTrap	b;

	a.attack(enemy);
	a.attack(enemy);
	a.takeDamage(3);
	a.takeDamage(15);
	a.attack(enemy);
	a.beRepaired(10);

	std::cout << std::endl;
	std::cout << std::endl;

	b = a;
	b.attack(enemy);
	b.takeDamage(15);
	std::cout << std::endl;
	std::cout << std::endl;
	a.attack(enemy);
	return (0);
}
