/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:45:39 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 14:56:10 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private :

    Brain *brain;    

public :

    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();

    void makeSound() const;
};

#endif