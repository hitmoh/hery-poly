#include "voleur.hpp"

voleur::voleur(string name):personage(name),mCritic(5){}


void voleur::coupCritic(personage* p)
{
    p->mVie -= (10 * mCritic);
    mCritic--;
}

 void voleur::present(void)
 {
     cout<<"nom: "<<mName<<endl<<"class: voleur"<<endl<<"vie: "<<mVie<<endl<<"critic :"<<mCritic<<endl<<endl;
 }