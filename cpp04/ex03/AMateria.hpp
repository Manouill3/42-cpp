/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:35:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/20 14:46:40 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"


class AMateria {
    
protected :

    std::string name;
    std::string type;

public :

    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &obj);
    AMateria &operator=(const AMateria &obj);
    ~AMateria();
    
    std::string const &getType() const;
    
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif