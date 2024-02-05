/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:59:44 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 14:10:51 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructed." << std::endl;
}

Ice::Ice(const Ice &ref)
{
    std::cout << "Ice copied." << std::endl;
    *this = ref;
}

Ice &Ice::operator=(const Ice &ref)
{
    if (this != &ref)
        this->_type = ref._type;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destroyed." << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}