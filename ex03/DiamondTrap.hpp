/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:28:58 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/21 19:59:54 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class	DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string		_name;
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &diamond);
		DiamondTrap(std::string &name);
		DiamondTrap	&operator=(const DiamondTrap &diamond);
		~DiamondTrap(void);
		void	attack(std::string &target);
		void	whoAmI(void);
};

#endif