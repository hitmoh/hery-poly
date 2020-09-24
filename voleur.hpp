#ifndef __VOLEUR_HPP__
#define __VOLEUR_HPP__
#include "personage.hpp"
class voleur : public personage
{
    private:
        int mCritic;
    public:
        voleur(string);
        void coupCritic(personage*);
        void present(void);
};




#endif