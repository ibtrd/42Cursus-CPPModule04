
#include "World.hpp"

t_floor *World::_floor = NULL;

/* CONSTRUCTORS ************************************************************* */

World::World(void) {}

World::World(const World &other) {*this = other;}

/* DESTRUCTOR *************************************************************** */

World::~World(void)
{
	while (this->_floor)
	{
		t_floor	*tmp = this->_floor;

		this->_floor = this->_floor->next;
		delete tmp->materia;
		delete tmp;
	}
}

/* ASIGNMENT OPERATOR ******************************************************* */

World	&World::operator=(const World &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

/* ************************************************************************** */

void	World::dropMateria(AMateria *dropped)
{
	t_floor	*tmp = new t_floor;

	tmp->materia = dropped;
	tmp->next = this->_floor;
	this->_floor = tmp;
}
