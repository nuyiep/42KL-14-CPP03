/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:14 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 14:40:55 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************************************************************/
/*						ORTHODOX CANONICAL CLASS FORM						  */
/******************************************************************************/

/* Default constructor */
ClapTrap::ClapTrap(void) :_hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << GREEN << "Default Constructor called" << RESET << '\n';
}

/* Copy Constructor*/
ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << GREEN << "Copy Constructor called " RESET << '\n';
	(*this) = src;
}

/* Assginment Operator */
ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << MAGENTA << "Copy assignment operator called" << RESET << std::endl;
	if (this != &src) //check for self-assignment
	{
		this->_name = src._name;				//copy the data from src
		this->_hitPoints = src._hitPoints; 		//copy the data from src
		this->_energyPoints = src._energyPoints; //copy the data from src
		this->_attackDamage = src._attackDamage; //copy the data from src
	}
	return (*this); //return a ref to the current object
}

/* Destructor */
ClapTrap::~ClapTrap(void)
{
	std::cout << GREEN << "Destructor for " << this->getName() << RESET << '\n';
}

/* Constructor for name */
ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN << "Constructor for " << name << RESET << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

/******************************************************************************/
/*								GETTERS										  */
/******************************************************************************/

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

/******************************************************************************/
/*								SETTERS										  */
/******************************************************************************/


/******************************************************************************/
/*								PUBLIC FUNCTIONS							  */
/******************************************************************************/

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "[Can't attack] No hit points left" << '\n';
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "[Can't attack] No energy points left" << '\n';
		return ;
	}
	this->_energyPoints--;
	std::cout << YELLOW << "ClapTrap " << this->_name << " attacks " << target 
			<< ", causing " << this->_attackDamage << " points of damage" << '\n'; 
	std::cout << this->_name << "'s hit points= " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points= " << this->_energyPoints << std::endl;
	std::cout << this->_name << "'s attack damage= " << this->_attackDamage << RESET << std::endl << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "[Can't take damage] No hit points left" << '\n';
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "[Can't take damage] No energy points left" << '\n';
		return ;
	}
	this->_hitPoints = this->_hitPoints - amount;
	std::cout << MAGENTA << "ClapTrap " << this->_name << " take damage"  
			<< ", causing " << amount << " points of damage" << '\n'; 
	std::cout << this->_name << "'s hit points= " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points= " << this->_energyPoints << std::endl;
	std::cout << this->_name << "'s attack damage= " << this->_attackDamage << RESET << std::endl << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "[Can't repair] No hit points left" << '\n';
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "[Can't repair] No energy points left" << '\n';
		return ;
	}
	this->_hitPoints = this->_hitPoints + amount;
	this->_energyPoints--;
	std::cout << CYAN << this->_name << " is repairing themselves and got " << 
		amount << " points back" << '\n';
	std::cout << this->_name << "'s hit points= " << this->_hitPoints << std::endl;
	std::cout << this->_name << "'s energy points= " << this->_energyPoints << std::endl;
	std::cout << this->_name << "'s attack damage= " << this->_attackDamage << RESET << std::endl << std::endl;
}

/******************************************************************************/
/*								OVERLOAD FUNCTIONS							  */
/******************************************************************************/

