/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:24:53 by plau              #+#    #+#             */
/*   Updated: 2023/04/28 15:24:41 by plau             ###   ########.fr       */
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
		this->_name = src._name;
	return (*this);
}

/* Name constructor */
DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = std::string(DiamondTrap::_name).append("_clap_name");
	std::cout << "[DiamondTrap]" << DiamondTrap::_name << " has been created" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name is = " << DiamondTrap::_name << "- ClapTrap::name is = " 
			<< ClapTrap::_name << std::endl;	
}
