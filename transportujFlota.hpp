#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) return 0;  

    Stocznia stocznia;
    unsigned int przetransportowane = 0;
    unsigned int liczbaZaglowcow = 0;

    while (przetransportowane < towar) {
        Statek* statek = stocznia(); 

        
        przetransportowane += statek->transportuj();

       
        if (dynamic_cast<Zaglowiec*>(statek) != nullptr) {
            ++liczbaZaglowcow;
        }

        delete statek; 
    }

    return liczbaZaglowcow;
}
