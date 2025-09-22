/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:25:05 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/22 16:46:20 by mdegache         ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);
