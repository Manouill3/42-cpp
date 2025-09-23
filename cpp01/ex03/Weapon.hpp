/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:01:16 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/23 10:51:38 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon {
    
private :

    std::string type;

public :

    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);

    std::string getType(void);
    void setType(std::string type);
};