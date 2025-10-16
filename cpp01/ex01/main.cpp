/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:21:33 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/16 11:19:14 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int j = 5;
    
    Zombie *horde = zombieHorde(j, "balalalal");
    if (horde == NULL)
        return 1;
    for (int i = 0; i < j; i++) {
        horde[i].announce();
    }
    delete[] horde;
}
