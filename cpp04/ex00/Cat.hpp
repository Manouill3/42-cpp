/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:45:39 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 14:56:27 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
  
public :

    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();

    void makeSound() const;
};

#endif