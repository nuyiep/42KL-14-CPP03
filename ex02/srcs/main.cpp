/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:19 by plau              #+#    #+#             */
/*   Updated: 2023/04/24 21:31:32 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("Eren");
	FragTrap b(a);
	FragTrap c("titan");
	a.attack("titan");
	c.takeDamage(20);
	c.beRepaired(30);
	c.attack("Eren");
	a.takeDamage(1000);
	a.beRepaired(2);
	a.highFivesGuys();
	return (0);
}
