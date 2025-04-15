//
// Created by Dominik Walenczak on 09/04/2025.
//

#ifndef SAMOCHUD_H
#define SAMOCHUD_H
#include "iostream"
#include "Pojazd.h"
using namespace std;


class samochud : public Pojazd {
  public:
    int liczba_drzwi;
    void opis() override;
};



#endif //SAMOCHUD_H
