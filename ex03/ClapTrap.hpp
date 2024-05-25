/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:29:32 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/23 13:12:29 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# ifndef RED_TEXT
#  define RED_TEXT "\033[0;31m"
# else
#  define RED_TEXT "\033[31m"
# endif

# ifndef GREEN_TEXT
#  define GREEN_TEXT "\033[0;32m"
# else
#  define GREEN_TEXT "\033[32m"
# endif

# ifndef YELLOW_TEXT
#  define YELLOW_TEXT "\033[0;33m"
# else
#  define YELLOW_TEXT "\033[0;33m"
# endif

# ifndef BLUE_TEXT
#  define BLUE_TEXT "\033[0;34m"
# else
#  define BLUE_TEXT "\033[0;34m"
# endif

# ifndef MAGENTA_TEXT
#  define MAGENTA_TEXT "\033[0;35m"
# else
#  define MAGENTA_TEXT "\033[0;35m"
# endif

# ifndef WHITE_TEXT
#  define WHITE_TEXT "\033[0;37m"
# else
#  define WHITE_TEXT "\033[0;37m"
# endif

# ifndef BLACK_BACKGROUND
#  define BLACK_BACKGROUND "\033[40m"
# else
#  define BLACK_BACKGROUND "\033[40m"
# endif

# ifndef RED_BACKGROUND
#  define RED_BACKGROUND "\033[41m"
# else
#  define RED_BACKGROUND "\033[41m"
# endif

# ifndef GREEN_BACKGROUND
#  define GREEN_BACKGROUND "\033[42m"
# else
#  define GREEN_BACKGROUND "\033[42m"
# endif

# ifndef YELLOW_BACKGROUND
#  define YELLOW_BACKGROUND "\033[43m"
# else
#  define YELLOW_BACKGROUND "\033[43m"
# endif

# ifndef BLUE_BACKGROUND
#  define BLUE_BACKGROUND "\033[44m"
# else
#  define BLUE_BACKGROUND "\033[44m"
# endif

# ifndef MAGENTA_BACKGROUND
#  define MAGENTA_BACKGROUND "\033[45m"
# else
#  define MAGENTA_BACKGROUND "\033[45m"
# endif

# include <iostream>

class	ClapTrap {
	protected:
		std::string			name;
		unsigned int		hitPoints;
		unsigned int		energyPoints;
		unsigned int		attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &clap);
		ClapTrap(std::string name);
		ClapTrap	&operator=(const ClapTrap &clap);
		~ClapTrap(void);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

std::string	center(std::string input, int width);

#endif
