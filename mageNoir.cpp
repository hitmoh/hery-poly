#include "mageNoir.hpp"

mageNoir::mageNoir(string name):mage(name){}

void mageNoir::poison(personage *p)
{
    p->mVie -=1;
    mMana -= 10;
}

void mageNoir::present(void)
{
     
 
     cout<<"nom: "<<mName<<endl<<"classe: mage"<<endl<<"type: mage Noir"<<endl<<"vie: "<<mVie<<endl<<"mana :"<<mMana<<endl<<endl;
 
}