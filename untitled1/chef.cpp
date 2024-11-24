#include "chef.h"
#include <iostream>

Chef::Chef(std::string kokkiNimi)
{
     kokinNimi = kokkiNimi;
     std::cout << "Chef created" << std::endl;

}

Chef::~Chef()
{
     std::cout << "Chef destroyed" << std::endl;
}



void MakeSoup(){

}

void MakeSalad(){

}
