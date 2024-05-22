/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:49 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/22 13:48:26 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int	main(void) {
	std::string	fighter("Kakarot");
	std::string	enemy("Vegetta");

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

	return (0);
}
