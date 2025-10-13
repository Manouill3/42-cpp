/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:06:51 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/13 12:04:17 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    Animal *animals[20];

    for (int i = 0; i < 10; i++)
        animals[i] = new Dog();
    for (int i = 10; i < 20; i++)
        animals[i] = new Cat();
    
    for (int  i = 0; i < 20; i++)
        std::cout << animals[i]->getType() << std::endl;
    
    for (int  i = 0; i < 20; i++)
        delete animals[i];
}
