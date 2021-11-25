all: main.out

main.out: attack.o berserker_attack.o rogue_attack.o vampire_attack.o werewolf_attack.o fireball.o heal.o spell.o spell_book.o healer.o necromancer.o priest.o spell_caster.o warlock.o wizard.o healer_attack.o necromancer_attack.o priest_attack.o spell_caster_attack.o warlock_attack.o wizard_attack.o healer_state.o necromacer_state.o priest_state.o spell_caster_state.o warlock_state.o wizard_state.o berserker_state.o rogue_state.o soldier_state.o state.o vampire_state.o werewolf_state.o wolf_state.o berserker.o rogue.o soldier.o unit.o vampire.o werwwolf.o
	g++ main.cpp *.o -o main.out

attack.o:
	g++ -c Attack/Attack.cpp

berserker_attack.o:
	g++ -c Attack/BerserkerAttack.cpp

rogue_attack.o:
	g++ -c Attack/RogueAttack.cpp

vampire_attack.o:
	g++ -c Attack/VampireAttack.cpp

werewolf_attack.o:
	g++ -c Attack/WerewolfAttack.cpp

fireball.o:
	g++ -c Magic/FireBall.cpp

heal.o:
	g++ -c Magic/Heal.cpp

spell.o:
	g++ -c Magic/Spell.cpp

spell_book.o:
	g++ -c Magic/SpellBook.cpp

healer.o:
	g++ -c SpellCaster/Healer.cpp

necromancer.o:
	g++ -c SpellCaster/Necromancer.cpp

priest.o:
	g++ -c SpellCaster/Priest.cpp

spell_caster.o:
	g++ -c SpellCaster/SpellCaster.cpp

warlock.o:
	g++ -c SpellCaster/Warlock.cpp

wizard.o:
	g++ -c SpellCaster/Wizard.cpp

healer_attack.o:
	g++ -c SpellCasterAttack/HealerAttack.cpp

necromancer_attack.o:
	g++ -c SpellCasterAttack/NecromancerAttack.cpp

priest_attack.o:
	g++ -c SpellCasterAttack/PriestAttack.cpp

spell_caster_attack.o:
	g++ -c SpellCasterAttack/SpellCasterAttack.cpp

warlock_attack.o:
	g++ -c SpellCasterAttack/WarlockAttack.cpp

wizard_attack.o:
	g++ -c SpellCasterAttack/WizardAttack.cpp

healer_state.o:
	g++ -c SpellCasterState/HealerState.cpp

necromacer_state.o:
	g++ -c SpellCasterState/NecromancerState.cpp

priest_state.o:
	g++ -c SpellCasterState/PriestState.cpp

spell_caster_state.o:
	g++ -c SpellCasterState/SCasterState.cpp

warlock_state.o:
	g++ -c SpellCasterState/WarlockState.cpp

wizard_state.o:
	g++ -c SpellCasterState/WizardState.cpp

berserker_state.o:
	g++ -c State/BerserkerState.cpp

rogue_state.o:
	g++ -c State/RogueState.cpp

soldier_state.o:
	g++ -c State/SoldierState.cpp

state.o:
	g++ -c State/State.cpp

vampire_state.o:
	g++ -c State/VampireState.cpp

werewolf_state.o:
	g++ -c State/WerewolfState.cpp

wolf_state.o:
	g++ -c State/WolfState.cpp

berserker.o:
	g++ -c Unit/Berserker.cpp

rogue.o:
	g++ -c Unit/Rogue.cpp

soldier.o:
	g++ -c Unit/Soldier.cpp

unit.o:
	g++ -c Unit/Unit.cpp

vampire.o:
	g++ -c Unit/Vampire.cpp

werwwolf.o:
	g++ -c Unit/Werewolf.cpp

clean:
	rm -f *.o