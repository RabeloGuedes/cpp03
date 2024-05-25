/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:25:17 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/23 13:44:43 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <ClapTrap.hpp>

class	FragTrap: virtual public ClapTrap {
	protected:
		const static unsigned int hitPoints = 100;
		const static unsigned int attackDamage = 30;
	public:
		FragTrap(void);
		FragTrap(const FragTrap &frag);
		FragTrap(std::string &name);
		FragTrap	&operator=(const FragTrap &frag);
		~FragTrap(void);
		void	highFiveGuys(void);

};

#endif