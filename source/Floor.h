/* 
 * File:   Floor.h
 * Author: Silvermoon
 *
 * Created on 3 octobre 2015, 15:27
 */

#ifndef FLOOR_H
#define	FLOOR_H
#include "Player.h"
#include "Block.h"
class Floor : public Block{
public:
    Floor();
    Floor(const Floor& orig);
    virtual ~Floor();
    int DrawAndHit(Player*,bool);

private:

};

#endif	/* FLOOR_H */

