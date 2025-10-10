/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:31:40 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 14:42:10 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    
protected :

    std::string type;

public :

    Animal();
    Animal(const Animal &obj);
    Animal &operator=(const Animal &obj);
    virtual ~Animal();

    void setType(std::string type);
    std::string getType() const;
    
    virtual void makeSound() const;
};


#endif