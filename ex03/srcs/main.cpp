/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:19 by plau              #+#    #+#             */
/*   Updated: 2023/04/28 18:57:42 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a; //default constructor
	DiamondTrap b(a); //copy constructor
	DiamondTrap c("Nezuko the demon sis");
	c.print();
	a.attack("Titan");
	a.guardGate();
	a.beRepaired(10);
	a.takeDamage(89);
	c.whoAmI();
	return (0);
}
