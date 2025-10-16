/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:34:02 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/16 11:19:01 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cout << "N can't be negative or null" << std::endl;
        return NULL;
    }
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].set_name(name);
    return horde;
}
