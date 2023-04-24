/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:44:29 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 17:04:39 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/******************************************************************************/
/*				CONSTRUCTOR AND DESTRUCTOR FUNCTIONS						  */
/******************************************************************************/

/* 1. Default constructor */
ScavTrap::ScavTrap(void)
{
	std::cout << "[ScavTrap] Default Constructor" << std::endl;
	this->_name = "default constructor";
}

/* 2. Copy constructor */
ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << MAGENTA << "[ScavTrap] Copy Constructor called " RESET << '\n';
	(*this) = src;
}

/* 3. Destructor */
ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] Destructor" << std::endl;
}

/******************************************************************************/
/*				OVERLOADED ASSIGNMENT OPERATOR FUNCTIONS					  */
/******************************************************************************/

/* 4. Overloaded assignment operator */
ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if (this != &src) //check for self-assignment
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
		std::cout << MAGENTA << "[ClapTrap] A duplicate of " << this->_name 
			<< " has been created" << RESET << std::endl;
	}
	return (*this);
}

/******************************************************************************/
/*				PUBLIC FUNCTIONS					  						  */
/******************************************************************************/

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "[ScavTrap] [Can't attack] No hit points left" << '\n';
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "[ScavTrap] [Can't attack] No energy points left" << '\n';
		return ;
	}
	this->_energyPoints--;
	std::cout << YELLOW << "ScavTrap " << this->_name << " attacks " << CYAN << target 
			<< RESET << ", causing " << this->_attackDamage << " points of damage" << '\n'; 
	std::cout << this->_name << "'s hit points= " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points= " << this->_energyPoints << std::endl;
	std::cout << this->_name << "'s attack damage= " << this->_attackDamage 
			<< RESET << std::endl << std::endl;
}
