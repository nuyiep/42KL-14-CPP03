/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:35:05 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 21:20:04 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Default constructor */
FragTrap::FragTrap(void)
{
	std::cout << "[FragTrap] Default constructor" << std::endl;
	this->_name = "[FragTrap] default constructor";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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

/* Name constructor */
FragTrap::FragTrap(std::string name)
{
	std::cout << YELLOW << "[FragTrap] Name Constructor called " RESET << '\n';
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

/* Overloaded assignment operator */
FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
		std::cout << MAGENTA << "[FragTrap] Assignment operator " << this->_name 
			<< " has been created" << RESET << std::endl;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << MAGENTA << "[FragTrap] High 5 " << this->_name <<
		RESET << std::endl;
}
