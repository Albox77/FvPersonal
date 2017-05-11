/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Seta.cpp
 * Author: borja
 * 
 * Created on 11 de mayo de 2017, 11:14
 */

#include "Seta.h"

Seta::Seta(int x, int y) {
    colision = false;
    tamSprite = 32;
    radioSprite = tamSprite/2;
    escala=1.5;
    
    this->x= x;
    this->y = y;
    
    
    
        if (!texture.loadFromFile("resources/seta.png"))
        {
            std::cerr << "Error while loading texture modificador" << std::endl;
        }

        modificador.setTexture(texture);
        modificador.setOrigin(tamSprite/2,tamSprite/2);
        modificador.setTextureRect(sf:: IntRect(0*tamSprite, 0*tamSprite, tamSprite, tamSprite));  
        modificador.setPosition(x, y);   
        modificador.setScale(escala,escala); 
    
}

Seta::Seta(const Seta& orig) {
}

Seta::~Seta() {
}


void Seta::pintar(){
    Motor2D*motor2D = Motor2D::Instance();
    motor2D->pintarSprites(modificador);
   
}

 bool Seta::colisionObjeto(Jugador *j){
    
    
    if(!colision  && (j->getX()+ 32) > this->x && (j->getY()+ 42) > this->y &&
            (this->x +32)> j->getX() && (this->y+32) > j->getY()){
            cout<<"Entro a colision"<<endl;
            colision=true;
            
            
            
            j->aumentarVelocidad();
            
            // Esto es una chapuza, hay que eliminar el objeto
            modificador.setTextureRect(sf:: IntRect(0*tamSprite, 0*tamSprite, 0, 0)); 
            modificador.setPosition(0, 0);
     
    }
    
    pintar();
    return getCol();
}
 