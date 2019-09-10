ACTORS = /home/Samuel/Adventure/Actors
ADVENTURE = /home/Samuel/Adventure
CHARACTERS = /home/Samuel/Adventure/Actors/Characters
CLASSES = /home/Samuel/Adventure/Actors/Characters/Classes
MONSTERS = /home/Samuel/Adventure/Actors/Monsters
RACES = /home/Samuel/Adventure/Actors/Characters/Races
RACIALABILITIES = /home/Samuel/Adventure/Actors/Characters/Races/RacialAbilities
EQUIPMENT = /home/Samuel/Adventure/Actors/Characters/Inventory

MAINFILES = $(COREFILES) $(ITEMS) $(CLASS/RACE) $(MONSTERS)
COREFILES = Actor.o Animal.o Attributes.o Character.o Class.o Encounter.o GPFunctions.o Monster.o Race.o RacialAbility.o SmallAnimal.o
ITEMS = Item.o EquipableItem.o UnequipableItem.o
CLASS/RACE = Fighter.o Human.o 
MONSTERS = Bat.o 

output.out: $(MAINFILES) 
	g++ -o output.out $(MAINFILES)

Actor.o: Actors/Actor.cpp
	g++ -c Actors/Actor.cpp

Animal.o: Actors/Animal.cpp
	g++ -c -I $(ADVENTURE) Actors/Animal.cpp

Attributes: Actors/Attributes.cpp
	g++ -c Actors/Attributes.cpp
	
Bat.o: Actors/Monsters/Bat.cpp
	g++ -c -I $(ADVENTURE) -I $(ACTORS) Actors/Monsters/Bat.cpp

Character.o: Actors/Characters/Character.cpp
	g++ -c I $(ADVENTURE) $(CLASSES) $(RACES) $(CHARACTERS) Actors/Characters/Character.cpp
	
Class.o: Actors/Characters/Classes/Class.cpp
	g++ -c I $(ADVENTURE) Actors/Characters/Classes/Class.cpp
	
Encounter.o: Encounter.cpp
	g++ -c -I $(ADVENTURE) -I $(ACTORS) -I $(MONSTERS) Encounter.cpp
	
EquipableItem.o: Actors/Characters/Inventory/EquipableItem.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/EquipableItem.cpp

Fighter.o: Actors/Characters/Classes/Fighter.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Fighter.cpp
	
GPFunctions.o: GPFunctions.cpp
	g++ -c GPFunctions.cpp
	
Item.o: Actors/Characters/Inventory/Item.cpp
	g++ -c Actors/Characters/Inventory/Item.cpp

Monster.o: Actors/Monster.cpp
	g++ -c Actors/Monster.cpp
	
UnequipableItem.o: Actors/Characters/Inventory/UnquipableItem.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/UnequipableItem.cpp
	
Race.o: Actors/Characters/Races/Race.cpp
	g++ -c I $(RACES) $(RACIALABILITIES) Actors/Characters/Races/Race.cpp

RacialAbility.o: Actors/Characters/Races/RacialAbilities/RacialAbility.cpp
	g++ -c Actors/Characters/Races/RacialAbilities/RacialAbility.cpp
	
SmallAnimal.o: Actors/SmallAnimal.cpp
	g++ -c -I $(ADVENTURE) Actors/SmallAnimal.cpp

clean:
	rm output.out %$(MAINFILES) 
	
