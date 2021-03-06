/* 
 * File:   Block.h
 * Author: Silvermoon
 *
 * Created on 3 octobre 2015, 12:52
 */

#ifndef BLOCK_H
#define	BLOCK_H
#include <sf2d.h>
#include <stdlib.h>
#include <stdio.h>
#include "variables.h"
class Player;

class Block {
public:
    Block();
    Block(sf2d_texture *text,int xPos,int yPos,int Height,int Width);
    Block(const Block& orig);
    virtual ~Block();

    virtual int DrawAndHit(Player*,bool)=0;
    int GetX() const {
        return x;
    }

    int GetY() const {
        return y;
    }

    int GetHeight() const {
        return height;
    }

    void SetHeight(int height) {
        this->height = height;
    }

    sf2d_texture* GetTexture() const {
        return texture;
    }

    void SetTexture(sf2d_texture* texture) {
        this->texture = texture;
    }

    int GetWidth() const {
        return width;
    }

    void SetWidth(int width) {
        this->width = width;
    }

    void SetX(int x) {
        this->x = x;
    }

    void SetY(int y) {
        this->y = y;
    }
    
    char CollisionDetect(Player*);


protected:
    sf2d_texture *texture;
    int x;
    int y;
    int height;
    int width;
    void setFlag(char * c, int flag){
        *c=((*c)|flag);
    }
    void unsetFlag(char * c, int flag){
        *c=((*c)&(~flag));
    }
    bool isFlagSet(char c, int flag){
        return c&flag;
    }


};

#endif	/* BLOCK_H */

