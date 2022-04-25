#ifndef _PARTIE4_H
#define _PARTIE4_H


#include "Partie3.h"

typedef struct block {
    Key * author ;
    CellProtected * votes ;
    unsigned char * hash ;
    unsigned char * previous_hash ;
    int nonce ;
} Block ;

void ecriture_bloc(Block * block);
Block* lecture_bloc(char * nom_fichier); 
char* block_to_str(Block* block); 
char * hash_to_str(unsigned char * s);
void compute_proof_of_work(Block * B, int d);
int verify_block(Block * b, int d);
void delete_block(Block* b);

#endif
