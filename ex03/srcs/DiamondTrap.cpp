/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:24:53 by plau              #+#    #+#             */
/*   Updated: 2023/07/21 18:17:19 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Default constructor */
DiamondTrap::DiamondTrap(void)
{
	this->_hitPoints = DiamondTrap::maxHP;
	this->_energyPoints = FragTrap::maxEP;
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
		this->_name = src._name;
	return (*this);
}

/* Name constructor */
DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::maxHP;
	this->_energyPoints = ScavTrap::maxEP;
	ClapTrap::_name = std::string(DiamondTrap::_name).append("_clap_name");
	ScavTrap::_name = std::string(DiamondTrap::_name);
	FragTrap::_name = std::string(DiamondTrap::_name);
	std::cout << "[DiamondTrap]" << DiamondTrap::_name << " has been created" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name is = " << DiamondTrap::_name << "- ClapTrap::name is = " 
			<< ClapTrap::_name << std::endl;	
}

// void DiamondTrap::print()
// {
// 	std::cout << "name: " <<  _name << std::endl;
// 	std::cout << "hp: " << _hitPoints << std::endl;
// 	std::cout << "ep: " << _energyPoints << std::endl;
// 	std::cout << "atk: " << _attackDamage << std::endl;
// }
