/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:49 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/23 08:46:07 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

int	main(void) {
	std::string	fighter("Kakarot");
	std::string	enemy("Vegetta");
	std::string	reader("answer");

	{
		std::cout << RED_TEXT << "=================================TEST 1===============================" << std::endl;
		std::cout << center("TESTING FRAGTRAP DEAFULT CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a;
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
		std::cout << center("TESTING FRAGTRAP COPY CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a;
			FragTrap	b(a);
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
		std::cout << center("TESTING FRAGTRAP STRING CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a(fighter);
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
		std::cout << center("TESTING FRAGTRAP COPY ASSGINMENT", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a(fighter);
			FragTrap	b;
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
		std::cout << center("TESTING FRAGTRAP MEMBER FUNCTIONS 0", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a(fighter);
			
			a.attack(enemy);
			a.takeDamage(3);
			a.beRepaired(15);
			a.takeDamage(45);
			a.attack(enemy);
			a.beRepaired(5);
			a.highFiveGuys();
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
		std::cout << center("TESTING FRAGTRAP MEMBER FUNCTIONS 1", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a(fighter);
			
			a.attack(enemy);
			a.takeDamage(5);
			a.beRepaired(5);
			a.takeDamage(5);
			a.attack(enemy);
			a.beRepaired(5);
			for (int i = 0; i < 96; i++) {
				a.attack(enemy);
			}
			a.beRepaired(5);
			a.attack(enemy);
			a.highFiveGuys();
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
		std::cout << center("TESTING FRAGTRAP MEMBER FUNCTIONS 2", 70) << std::endl << WHITE_TEXT;
		{
			FragTrap	a(fighter);
			
			for (int i = 0; i < 100; i++) {
				a.beRepaired(10);
			}
			a.attack(enemy);
			a.highFiveGuys();
		}
		std::cout << GREEN_TEXT << "=================================TEST 7===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}
	return (0);
}
