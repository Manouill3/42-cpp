/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:53:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/18 15:50:44 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook {

private :
    
    Contact book[8];

public :
    
    Phonebook();
    ~Phonebook();

    void    add_contact(void);
    void    search_contact(void);
};

void    print_all(Contact contact);
void    print_header(void);
