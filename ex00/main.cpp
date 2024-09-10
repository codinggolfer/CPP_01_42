#include "Zombie.hpp"

void Zombie::announce()
{

	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	Zombie* z = NULL;
	z = z->newZombie("Zombboy");
	z->announce();
	z->randomChump("frankieboi");
	delete z;
	return 0;
}