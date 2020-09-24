#ifndef __BARBAR_HPP__
#define __BARBAR_HPP__
#include "personage.hpp"

class barbar : public personage
{
    private:
       int mForce;
    public:
        barbar(string); 
        void coupFort(personage*);
        void present(void);
};




#endif