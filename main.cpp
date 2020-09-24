#include "barbar.hpp"
#include "mageBlanc.hpp"
#include "mageNoir.hpp"
#include "voleur.hpp"

void stat(personage *p)
{
    p->present();
}

int main()
{
    barbar bob("bob");
    mageBlanc gondalf("gondalf");
    mageNoir soron("soron");
    voleur karim("karim");


    bob.present();
    gondalf.present();
    soron.present();
    karim.present();

    bob.coup(&karim);
    stat(&karim);
    gondalf.heal(&karim);
    karim.coupCritic(&bob);

    cout<<"-------------------------"<<endl;

    stat(&karim);
    stat(&bob);
    stat(&gondalf);


}