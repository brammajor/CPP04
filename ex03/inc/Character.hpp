/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:56:24 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:20:41 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    AMateria*   _inventory[4];
    std::string _name;
public:
    Character();
    Character(std::string name);
    ~Character();
    Character(const Character &ref);
    Character &operator=(const Character &ref);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif