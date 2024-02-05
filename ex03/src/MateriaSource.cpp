/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:03:52 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:31:20 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"
#include "../inc/IMateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &ref): IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = ref._inventory[i]->clone();
}

const MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
    if (this != &ref)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = ref._inventory[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* mat)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = mat->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] && (this->_inventory[i]->getType() == type))
        {
            return (this->_inventory[i]->clone());
        }
    }
    return (0);
}