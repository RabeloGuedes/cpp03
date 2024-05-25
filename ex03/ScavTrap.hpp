/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:57 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/23 13:18:36 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <ClapTrap.hpp>

class	ScavTrap: virtual public ClapTrap {
	protected:
		const static unsigned int	energyPoints = 50;
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string &name);
		ScavTrap	&operator=(const ScavTrap &scav);
		~ScavTrap(void);
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
