#include "barbar.hpp"

 barbar::barbar(string name):personage(name),mForce(2){}

 void barbar::coupFort(personage* p)
 {
     p->mVie -= (10 * mForce);
     mForce++;

 }

 void barbar::present(void)
 {
     cout<<"nom: "<<mName<<endl<<"class: barbar"<<endl<<"vie: "<<mVie<<endl<<"force :"<<mForce<<endl<<endl;
 }