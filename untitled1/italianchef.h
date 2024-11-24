#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string kokkiNimi);
    std::string kokkiNimi;
};

#endif // ITALIANCHEF_H
