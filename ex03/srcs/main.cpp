/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:19 by plau              #+#    #+#             */
/*   Updated: 2023/07/21 18:01:09 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	// DiamondTrap a; //default constructor
	// DiamondTrap b(a); //copy constructor
	DiamondTrap c("Nezuko the demon sis");
	c.print();
	// a.attack("Titan");
	// a.guardGate();
	c.highFivesGuys();
	c.beRepaired(10);
	c.takeDamage(89);
	c.whoAmI();

	return (0);
}
