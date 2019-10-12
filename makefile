ACTORS = /home/Samuel/Adventure/Actors
ADVENTURE = /home/Samuel/Adventure
ATTACKOPTIONS = /home/Samuel/Adventure/Actors/Characters/AttackOptions
CHARACTERS = /home/Samuel/Adventure/Actors/Characters
CLASSES = /home/Samuel/Adventure/Actors/Characters/Classes
MONSTERS = /home/Samuel/Adventure/Actors/Monsters
RACES = /home/Samuel/Adventure/Actors/Characters/Races
RACIALABILITIES = /home/Samuel/Adventure/Actors/Characters/Races/RacialAbilities
EQUIPMENT = /home/Samuel/Adventure/Actors/Characters/Inventory

MAINFILES = $(COREFILES) $(ITEMS) $(CLASS) $(RACE) $(MONSTERS) $(ATTACKOPTION)
ATTACKOPTIONS = AttackOption.o DoubleWeaopnOption.o NakedAttackOption.o OneHandedAttackOption.o PureShieldOption.o SwordAndShieldOption.o TwoHandedAttackOption.o
COREFILES = Actor.o Animal.o Attributes.o Character.o Encounter.o GPFunctions.o Monster.o Race.o RacialAbility.o SmallAnimal.o
ITEMS = Item.o EquipableItem.o MeleeWeapon.o RangedWeapon.o UnequipableItem.o Weapon.o
CLASS = Barbarian.o Burglar.o Class.o Cleric.o Fighter.o Magician.o Ninja.o Paladin.o Ranger.o
RACE = Human.o 
MONSTERS = Bat.o 

output.out: $(MAINFILES) 
	g++ -o output.out $(MAINFILES)

#main file

#Actor

Actor.o: Actors/Actor.cpp
	g++ -c Actors/Actor.cpp

Attributes.o: Actors/Characters/Attributes.cpp
	g++ -c Actors/Characters/Attributes.cpp

	#Characters

		#AttackOption

AttackOption.o: Actors/Characters/AttackOptions/AttackOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/AttackOption.cpp

DoubleWeaponOption.o: Actors/Characters/AttackOptions/DoubleWeaponOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/DoubleWeaponOption.cpp
 
NakedAttackOption.o: Actors/Characters/AttackOptions/NakedAttackOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/NakedAttackOption.cpp

OneHandedAttackOption.o: Actors/Characters/AttackOptions/OneHandedAttackOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/OneHandedAttackOption.cpp

PureShieldOption.o: Actors/Characters/AttackOptions/PureShieldOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/PureShieldOption.cpp

SwordAndShieldOption.o: Actors/Characters/AttackOptions/SwordAndShieldOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/SwordAndShieldOption.cpp

TwoHandedAttackOption.o: Actors/Characters/AttackOptions/TwoHandedAttackOption.cpp
	g++ -c I $(ATTACKOPTIONS) Actors/Characters/AttackOptions/TwoHandedAttackOption.cpp

		#Classes

Barbarian.o: Actors/Characters/Classes/Barbarian.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Barbarian.cpp

Burglar.o: Actors/Characters/Classes/Burglar.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Burglar.cpp

Class.o: Actors/Characters/Classes/Class.cpp
	g++ -c I $(ADVENTURE) Actors/Characters/Classes/Class.cpp
	
Cleric.o: Actors/Characters/Classes/Cleric.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Cleric.cpp

Fighter.o: Actors/Characters/Classes/Fighter.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Fighter.cpp

Magician.o: Actors/Characters/Classes/Magician.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Magician.cpp

Ninja.o: Actors/Characters/Classes/Ninja.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Ninja.cpp

Paladin.o: Actors/Characters/Classes/Paladin.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Paladin.cpp

Ranger.o: Actors/Characters/Classes/Ranger.cpp
	g++ -c I $(CLASSES) Actors/Characters/Classes/Ranger.cpp

		#Inventory

EquipableItem.o: Actors/Characters/Inventory/EquipableItem.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/EquipableItem.cpp

Item.o: Actors/Characters/Inventory/Item.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/Item.cpp

MeleeWeapon.o: Actors/Characters/Inventory/MeleeWeapon.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/MeleeWeapon.cpp

Outfit.o: Actors/Characters/Inventory/Outfit.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/Outfit.cpp

RangedWeapon.o: Actors/Characters/Inventory/RangedWeapon.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/RangedWeapon.cpp

UnequipableItem.o: Actors/Characters/Inventory/UnquipableItem.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/UnequipableItem.cpp
	
Weapon.o: Actors/Characters/Inventory/Weapon.cpp
	g++ -c I $(EQUIPMENT) Actors/Characters/Inventory/Weapon.cpp

		#Race

Race.o: Actors/Characters/Races/Race.cpp
	g++ -c I $(RACES) $(RACIALABILITIES) Actors/Characters/Races/Race.cpp

Human.o: Actors/Characters/Races/Human.cpp
	g++ -c Actors/Characters/Races/Human.cpp

		#TurnCommands

TurnCommand.o: Actors/Characters/TurnCommands/TurnCommand.cpp
	g++ -c Actors/Characters/TurnCommands/TurnCommand.cpp

TurnCommands.o: Actors/Characters/TurnCommands/TurnCommands.cpp
	g++ -c Actors/Characters/TurnCommands/TurnCommands.cpp

		#Miscillanious

Character.o: Actors/Characters/Character.cpp
	g++ -c I $(ADVENTURE) $(CLASSES) $(RACES) $(CHARACTERS) Actors/Characters/Character.cpp
	
TurnCommand.o: Actors/Characters/TurnCommand.cpp
	g++ -c Actors/Characters/TurnCommand.cpp



Animal.o: Actors/Animal.cpp
	g++ -c -I $(ADVENTURE) Actors/Animal.cpp

Bat.o: Actors/Monsters/Bat.cpp
	g++ -c -I $(ADVENTURE) -I $(ACTORS) Actors/Monsters/Bat.cpp



Encounter.o: Encounter.cpp
	g++ -c -I $(ADVENTURE) -I $(ACTORS) -I $(MONSTERS) Encounter.cpp
	
GPFunctions.o: GPFunctions.cpp
	g++ -c GPFunctions.cpp
	
Monster.o: Actors/Monster.cpp
	g++ -c Actors/Monster.cpp
	
RacialAbility.o: Actors/Characters/Races/RacialAbilities/RacialAbility.cpp
	g++ -c Actors/Characters/Races/RacialAbilities/RacialAbility.cpp
	
SmallAnimal.o: Actors/SmallAnimal.cpp
	g++ -c -I $(ADVENTURE) Actors/SmallAnimal.cpp

clean:
	rm output.out %$(MAINFILES) 
	
