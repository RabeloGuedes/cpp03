/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:25:17 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/20 08:39:14 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <ClapTrap.hpp>

class	FragTrap: public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const FragTrap &frag);
		FragTrap(std::string &name);
		FragTrap	&operator=(const FragTrap &frag);
		~FragTrap(void);
		void	highFiveGuys(void);
};

#endif