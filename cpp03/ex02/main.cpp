/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:49:08 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/09 14:54:57 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap one("one");
    ClapTrap two("two");
    std::cout << std::endl;
    ScavTrap three("three");
    ScavTrap four("four");
    std::cout << std::endl;
    FragTrap five("five");
    FragTrap six("six");

    std::cout << std::endl;
    one.attack("two");
    two.takeDamage(10);
    two.beRepaired(10);
    one.takeDamage(9);
    one.beRepaired(10);
    std::cout << std::endl;

    three.attack("four");
    four.takeDamage(10);
    four.beRepaired(10);
    three.takeDamage(9);
    three.beRepaired(10);
    three.guardGate();
    std::cout << std::endl;

    five.attack("six");
    six.takeDamage(10);
    six.beRepaired(10);
    five.takeDamage(9);
    five.beRepaired(10);
    five.highFivesGuys();
    std::cout << std::endl;
}
