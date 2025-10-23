/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:06:51 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/23 14:05:24 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	std::cout << std::endl << std::endl;





	std::cout << "---------[INVENTORY FULL]----------" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << std::endl;




	std::cout << "---------[UNEQUIP AND STORE]----------" << std::endl;
	me->unequip(1);

	ICharacter* bob = new Character("bob");
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("cure"));
	bob->unequip(0);

	std::cout << std::endl << std::endl;




	std::cout << "|---------[USE EXISTING/UNEXISTING]----------|" << std::endl;
	me->use(2, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(-630, *bob);
	me->equip(NULL);

	std::cout << std::endl << std::endl;




	std::cout << "|---------[ASSIGNEMENT DEEP COPY]----------|" << std::endl;
	me->equip(src->createMateria("cure"));
	*static_cast<Character*>(bob) = *static_cast<Character*>(me);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(src->createMateria("cure"));
	bob->equip(tmp);

	std::cout << std::endl << std::endl;




	std::cout << "|---------[COPY CONSTRUCTOR DEEP COPY]----------|" << std::endl;
	Character jack("jack");
	jack.equip(src->createMateria("cure"));
	Character jackCopy(jack);
	jack.unequip(0);
	jackCopy.use(0, jack);

	std::cout << std::endl << std::endl;

	// std::cout << "|---------[DESTRUCTOR]----------|" << std::endl;

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << std::endl;

	return (0);
}
