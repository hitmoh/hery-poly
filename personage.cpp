#include "personage.hpp"




personage::personage(string name):mVie(100),mName(name){}

void personage::coup(personage *p)
{
    p->mVie -= 10;
}