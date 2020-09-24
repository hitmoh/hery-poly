#include "mageBlanc.hpp"

mageBlanc::mageBlanc(string name):mage(name){}


void mageBlanc::heal(personage *p)
{
    p->mVie +=10;
    mMana -=20;
}

void mageBlanc::present(void)
{
     
 
     cout<<"nom: "<<mName<<endl<<"classe: mage"<<endl<<"type: mage blanc"<<endl<<"vie: "<<mVie<<endl<<"mana :"<<mMana<<endl<<endl;
 
}