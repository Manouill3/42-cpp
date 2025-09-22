/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:25:05 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/22 14:50:27 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
    
private :

    std::string name;

public :

    Zombie(std::string name);
    ~Zombie(void);

    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
