/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:59:44 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:31:08 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &ref)
{
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
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}