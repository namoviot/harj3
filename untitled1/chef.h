#ifndef CHEF_H
#define CHEF_H
#include <iostream>

class Chef
{
public:
    explicit Chef(std::string kokkiNimi);
    std::string kokinNimi;
    ~Chef();
    void MakeSalad();
    void MakeSoup();
};

#endif // CHEF_H
