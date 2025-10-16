/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:25:05 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 09:35:34 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
private :

    std::string name;

public :

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void set_name(std::string name);
    
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif