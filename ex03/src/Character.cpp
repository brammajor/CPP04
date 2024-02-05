/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:31:53 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:38:21 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character(): ICharacter(), _name("void")
{
}

Character::Character(std::string name): ICharacter(), _name(name)
{
}

Character::Character(const Character &ref)
{
    this->_name = ref._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = ref._inventory[i]->clone();
}

Character &Character::operator=(const Character &ref)
{
    if (this != &ref)
    {
        this->_name = ref._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            this->_inventory[i] = ref._inventory[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
    }
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            _inventory[i] = m;
            break;
        }
        if (i == 3 && this->_inventory[3])
        std::cout << "Inventory full." << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (this->_inventory[idx])
        this->_inventory[idx] = 0;
    else
        std::cout << "Can't unequip inventory slot " << idx << "." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        std::cout << "That inventory slot does not exist." << std::endl;
    else if (!this->_inventory[idx])
        std::cout << "Can't use inventory slot " << idx << "." << std::endl;
    else
        this->_inventory[idx]->use(target);
}

std::string const & Character::getName() const
{
    return (this->_name);
}