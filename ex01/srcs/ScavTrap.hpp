/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:44:38 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 17:01:38 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

/* Class ScavTrap inherit ClapTrap publicly */
class ScavTrap : public ClapTrap
{
	public:
	/* Orthodox canonical form */
		// 1. Default constructor
		ScavTrap(void);
		// 2. Copy constructor
		ScavTrap(const ScavTrap &src);
		// 3. Assignment operator
		ScavTrap& operator=(const ScavTrap& src);
		// 4. Destructor
		~ScavTrap(void);

		void	attack(const std::string& target);
	private:
	
};

#endif
