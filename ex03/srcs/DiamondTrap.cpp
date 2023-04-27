/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:24:53 by plau              #+#    #+#             */
/*   Updated: 2023/04/27 20:07:46 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Default constructor */
DiamondTrap::DiamondTrap(void)
{
	std::cout << YELLOW << "[Diamond Trap] Default Constructor" << RESET << std::endl;
}

/* Destructor */
DiamondTrap::~DiamondTrap(void)
{
	std::cout << YELLOW << "[Diamond Trap] Destructor" << RESET << std::endl;
}

/* Copy constructor */
DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << YELLOW << "[Diamond Trap] Copy Constructor" << RESET << std::endl;
	(*this) = src;
}

/* Assignment operator */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		// this->_hitPoints = src._hitPoints;
		
	}
	return (*this);
}
