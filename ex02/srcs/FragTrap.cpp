/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:35:05 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 21:01:09 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/******************************************************************************/
/*				CONSTRUCTOR AND DESTRUCTOR FUNCTIONS						  */
/******************************************************************************/

/* Default constructor */
FragTrap::FragTrap(void)
{
	std::cout << "[FragTrap] Default constructor" << std::endl;
}

/* Destructor */
FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Destructor for " << this->_name << std::endl;
}

/* Copy constructor */
FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << YELLOW << "[FragTrap] Copy Constructor called " RESET << '\n';
	(*this) = src;
}

/******************************************************************************/
/*				OVERLOADED ASSIGNMENT OPERATOR FUNCTIONS					  */
/******************************************************************************/

/* Overloaded assignment operator */
FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
		std::cout << MAGENTA << "[FragTrap] A duplicate of " << this->_name 
			<< " has been created" << RESET << std::endl;
	}
	return (*this);
}

/******************************************************************************/
/*				PUBLIC FUNCTIONS					  						  */
/******************************************************************************/

