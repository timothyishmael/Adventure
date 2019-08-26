#ifndef ENCOUNTER_FUNCTIONS_H
#define ENCOUNTER_FUNCTIONS_H
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

void enterEncounter(void);
void winEncounter(void);
void fleeEncounter(void);
void defeatedByEncounter(void);
void tryToRun(void);

void monsterAttack(Monster, Character);
void characterMeleeAttack(Character, Monster);
void characterRangedAttack(Character, Monster);

bool decideMeleeAttack(Actor, Actor) const;
bool decideRangedAttack(Actor, Actor) const;

#endif