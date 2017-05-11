/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Seta.h
 * Author: borja
 *
 * Created on 11 de mayo de 2017, 11:14
 */
#include <SFML/Graphics.hpp>
#include "Motor2D.h"
#include <iostream>
#include <vector>
#include "Jugador.h"
#include "Objeto.h"

#ifndef SETA_H
#define SETA_H

using namespace std;

class Seta : public Objeto {
public:
    Seta(int x, int y);
    Seta(const Seta& orig);
    virtual ~Seta();
    
    virtual bool colisionObjeto(Jugador *j);
    void pintar();
    bool getCol(){return colision;};
private:

    int tamSprite;
    int radioSprite;
    int x; //POSX
    int y;//POSY
    bool colision;
    
    float escala;
    
    sf::Sprite modificador;
    sf::Texture texture;
};

#endif /* SETA_H */

