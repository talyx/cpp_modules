#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& club):
	name(name), club(club)
{

}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout<<this->name<<" attacks with his "<<this->club.getType()<<std::endl;
}