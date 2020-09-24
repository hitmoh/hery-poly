#ifndef __PERSONAGE_HPP__
#define __PERSONAGE_HPP__
#include <iostream>
#include <string>

using namespace std;

class personage
{
    protected:

        int mVie;
        string mName;

    public:

    
        personage(string);
        void coup(personage*);
        /*virtual void present(void) =0;
        virtual void coupFort(personage*)=0;
        virtual void coupCritic(personage*)=0;
        virtual void poison(personage*)=0;
        virtual void heal(personage*)=0;
        */
};




#endif