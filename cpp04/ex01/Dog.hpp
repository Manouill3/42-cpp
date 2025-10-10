/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:38:54 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 14:56:17 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private :

    Brain *brain;    

public :

    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();

    void makeSound() const;
};

#endif