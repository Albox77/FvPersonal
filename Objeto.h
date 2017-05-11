/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Objeto.h
 * Author: borja
 *
 * Created on 9 de mayo de 2017, 9:47
 */

#ifndef OBJETO_H
#define OBJETO_H

class Objeto {
public:
    Objeto();
    Objeto(const Objeto& orig);
    virtual ~Objeto();
    
    virtual bool colisionObjeto(Jugador *j)=0;
private:

};

#endif /* OBJETO_H */

