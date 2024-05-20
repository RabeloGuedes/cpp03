/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:46 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/19 15:43:05 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class	ClapTrap {
	protected:
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &clap);
		ClapTrap(std::string &name);
		ClapTrap	&operator=(const ClapTrap &clap);
		~ClapTrap(void);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		setHitPoints(unsigned int amount);
};

#endif
