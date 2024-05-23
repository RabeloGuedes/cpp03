/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:49 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/23 08:12:25 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int	main(void) {
	std::string	fighter("Kakarot");
	std::string	enemy("Vegetta");
	std::string	reader("answer");

	{
		std::cout << RED_TEXT << "=================================TEST 1===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP DEAFULT CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a;
			(void)a;
		}
		std::cout << RED_TEXT << "=================================TEST 1================================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << GREEN_TEXT << "=================================TEST 2===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP COPY CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a;
			ScavTrap	b(a);
			(void)a;
			(void)b;
		}
		std::cout << GREEN_TEXT << "=================================TEST 2===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << YELLOW_TEXT << "=================================TEST 3===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP STRING CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a(fighter);
			(void)a;
		}
		std::cout << YELLOW_TEXT << "=================================TEST 3===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << BLUE_TEXT << "=================================TEST 4===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP COPY ASSGINMENT", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a(fighter);
			ScavTrap	b;
			(void)a;

			b = a;
			(void)b;
		}
		std::cout << BLUE_TEXT << "=================================TEST 4===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << MAGENTA_TEXT << "=================================TEST 5===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP MEMBER FUNCTIONS 0", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a(fighter);
			
			a.attack(enemy);
			a.takeDamage(3);
			a.beRepaired(15);
			a.takeDamage(45);
			a.attack(enemy);
			a.beRepaired(5);
		}
		std::cout << MAGENTA_TEXT << "=================================TEST 5===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << RED_TEXT << "=================================TEST 6===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP MEMBER FUNCTIONS 1", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a(fighter);
			
			a.attack(enemy);
			a.takeDamage(5);
			a.beRepaired(5);
			a.takeDamage(5);
			a.attack(enemy);
			a.beRepaired(5);
			for (int i = 0; i < 46; i++) {
				a.attack(enemy);
			}
			a.beRepaired(5);
			a.attack(enemy);
		}
		std::cout << RED_TEXT << "=================================TEST 6===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << GREEN_TEXT << "=================================TEST 7===============================" << std::endl;
		std::cout << center("TESTING SCAVTRAP MEMBER FUNCTIONS 2", 70) << std::endl << WHITE_TEXT;
		{
			ScavTrap	a(fighter);
			
			for (int i = 0; i < 50; i++) {
				a.beRepaired(10);
			}
			a.attack(enemy);
		}
		std::cout << GREEN_TEXT << "=================================TEST 7===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}
	return (0);
}
