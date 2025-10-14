/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:54:58 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/14 14:18:44 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria, public Character {

public :

    Ice(std::string name);
    Ice(const Ice &obj);
    Ice &operator=(const Ice &obj);
    ~Ice();

    void use(ICharacter& target);
    Ice clone();
};

#endif