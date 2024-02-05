/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:31:53 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 14:06:37 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

Character::Character(): ICharacter(), _name("void")
{
    std::cout << "Character constructed." << std::endl;
}

Character::Character(std::string name): ICharacter(), _name(name)
{
    std::cout << "Character named " << name << " constructed." << std::endl;
}

Character::Character(const Character &ref)
{
    std::cout << "Character copied." << std::endl;
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
    std::cout << "Character named " << this->_name << " destroyed." << std::endl;
    delete this->_inventory;
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
    if (!this->_inventory[idx])
        std::cout << "Can't use inventory slot " << idx << "." << std::endl;
    else
        this->_inventory[idx]->use(target);
}