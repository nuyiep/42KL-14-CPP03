/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:24:46 by plau              #+#    #+#             */
/*   Updated: 2023/04/27 20:05:08 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		/* Orthodox Canonical Class Form */
		DiamondTrap(void); //default constructor
		~DiamondTrap(void); //destructor
		DiamondTrap(const DiamondTrap &src); //copy constructor
		DiamondTrap& operator=(const DiamondTrap& src);//assignment operator
	
	private:
		std::string _name;
		 
};

#endif
