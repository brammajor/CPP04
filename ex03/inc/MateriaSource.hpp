/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:58:07 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:27:51 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria*   _inventory[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &ref);
    const MateriaSource &operator=(const MateriaSource &ref);
    void learnMateria(AMateria* mat);
    AMateria* createMateria(std::string const & type);
};

#endif