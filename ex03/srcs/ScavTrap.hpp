/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:44:38 by plau              #+#    #+#             */
/*   Updated: 2023/04/28 21:09:52 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

/* Class ScavTrap inherit ClapTrap publicly */
class ScavTrap : public virtual ClapTrap
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
		// Constructor for name
		ScavTrap(std::string name);

		void	attack(const std::string& target);
		void	guardGate(void);
	
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
