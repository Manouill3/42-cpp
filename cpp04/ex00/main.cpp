/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:06:51 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 14:59:18 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* k = new WrongCat();
    
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    k->makeSound();

    delete meta;
    delete i;
    delete j;
    delete k;
    
    return 0;
}
