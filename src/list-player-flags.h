/* list-spec-flags.h - player specialty flags
 *
 * Adjusting these flags will break savefiles. Flags below start from 1
 * on line 11, so a flag's sequence number is its line number minus 10.
 * Choosable specialties start at 0, race specialties start at 128, class
 * specialties start at 192.  Going over 255 total will cause problems.
 */

/* symbol            descr */
PF(NONE, "", "", PLAYER_FLAG_SPECIAL), 
PF(ARMOR_MAST,"Armor Mastery", "Increases the effects of body armor.", PLAYER_FLAG_SPECIAL),
PF(SHIELD_MAST,"Shield Mastery", "Improves shield AC, chance of shield deflection, and damage from shield bashes.", PLAYER_FLAG_SPECIAL),
PF(ARMOR_PROFICIENCY, "Armor Proficiency", "Reduces mana penalties for armor use.", PLAYER_FLAG_SPECIAL),
PF(EVASION, "Evasion", "Gives a good chance to avoid melee attacks and a great chance to avoid missile weapons when lightly armored.", PLAYER_FLAG_SPECIAL),
PF(MAGIC_RESIST, "Magic Resistance", "Improves your saving throws.", PLAYER_FLAG_SPECIAL),
PF(PHASEWALK, "Phasewalking", "Causes you to speed up after teleporting.  Gives resistance to hostile teleportation.", PLAYER_FLAG_SPECIAL),
PF(UNLIGHT, "Unlight", "Increases AC and gives damage resistance in the dark.  Gives stealth and resist darkness.  Allows you to take actions (like reading) without light.  Reduces light radius.", PLAYER_FLAG_SPECIAL),
PF(ARMSMAN, "Armsman", "Grants extra critical hits with melee weapons.", PLAYER_FLAG_SPECIAL),
PF(FAST_ATTACK, "Fast Attacking", "Gives you extra melee attacks; better when you have more attacks to begin with.  Works armed and unarmed.", PLAYER_FLAG_SPECIAL),
PF(MARKSMAN, "Marksman", "Grants extra critical hits in ranged combat.", PLAYER_FLAG_SPECIAL),
PF(PIERCE_SHOT, "Piercing Shot", "Gives your successful bow and crossbow attacks a chance of continuing to additional targets.", PLAYER_FLAG_SPECIAL), 
PF(MIGHTY_THROW, "Mighty Throw", "Allows you to hurl throwing weapons and other objects great distances.", PLAYER_FLAG_SPECIAL),
PF(POWER_STRIKE, "Power Strike", "Gives you a stronger barehanded attack.", PLAYER_FLAG_SPECIAL),
PF(MARTIAL_ARTS, "Martial Arts", "Gives you a powerful unarmed attack.", PLAYER_FLAG_SPECIAL),
PF(MANA_BURN, "Mana Burn", "Allows you to burn monster mana in melee.  Mana burned adds to melee damage.", PLAYER_FLAG_SPECIAL),
PF(RAPID_FIRE, "Rapid Fire", "Trades some shooting accuracy for faster shooting with a short or long bow, even faster with increasing dexterity.", PLAYER_FLAG_SPECIAL),
PF(BEGUILE, "Beguile", "Enhances your power to slow, sleep, confuse, or turn your enemies.", PLAYER_FLAG_SPECIAL),
PF(ENHANCE_MAGIC, "Enhance Magic", "Increases the effects and durations of beneficial magical effects.", PLAYER_FLAG_SPECIAL),
PF(FAST_CAST, "Fast Casting", "Increases spell casting speed, especially for low level spells from high level casters.", PLAYER_FLAG_SPECIAL),
PF(POWER_SIPHON, "Power Siphon", "Gives you mana when monsters cast spells.", PLAYER_FLAG_SPECIAL),
PF(HEIGHTEN_MAGIC, "Heighten Magic", "Causes spells cast in rapid succession to become increasingly powerful.", PLAYER_FLAG_SPECIAL),
PF(SOUL_SIPHON, "Soul Siphon", "Gives you mana when you slay monsters.  May cause damage when overloaded.", PLAYER_FLAG_SPECIAL),
PF(HARMONY, "Harmony", "Causes you to gain hit points when casting spells.", PLAYER_FLAG_SPECIAL),
PF(CHANNELING, "Channeling", "Makes your spells stronger when your mana level is high.", PLAYER_FLAG_SPECIAL),
PF(ATHLETICS, "Athletics", "Increases and partially sustains Dexterity and Constitution.", PLAYER_FLAG_SPECIAL),
PF(CLARITY, "Clarity", "Increases and partially sustains Intelligence and Wisdom.", PLAYER_FLAG_SPECIAL),
PF(FURY, "Fury", "Allows you to move faster after attacking or being damaged.", PLAYER_FLAG_SPECIAL),
PF(MEDITATION, "Meditation", "Improves mana regeneration; cumulative with other forms of regeneration.", PLAYER_FLAG_SPECIAL),
PF(REGENERATION, "Regeneration", "Improves hit point regeneration; cumulative with other forms of regeneration.", PLAYER_FLAG_SPECIAL),
PF(EXTRA_TRAP, "Extra Trap", "Allows you to set an additional monster trap, and to learn to set more advanced types of traps.", PLAYER_FLAG_SPECIAL),
PF(HOLY_LIGHT, "Holy Light", "Increases light radius.  Causes undead, evil, and light-sensitive creatures to take extra melee damage and makes them fear your light-based spells.  Grants resistance to light.", PLAYER_FLAG_SPECIAL),
PF(SWORD_SKILL, "Sword Preference", "You are slightly more skilled with swords than other melee weapons.", PLAYER_FLAG_RACE),
PF(POLEARM_SKILL, "Polearm Preference", "You are slightly more skilled with axes and polearms than other melee weapons.", PLAYER_FLAG_RACE),
PF(HAFTED_SKILL, "Hafted Preference", "You are slightly more skilled with blunt weapons than other melee weapons.", PLAYER_FLAG_RACE),
PF(SLING_SKILL, "Sling Preference", "You are slightly more skilled with slings than other ranged weapons.", PLAYER_FLAG_RACE),
PF(BOW_SKILL, "Bow Preference", "You are slightly more skilled with bows than other ranged weapons.", PLAYER_FLAG_RACE),
PF(XBOW_SKILL, "Crossbow Preference", "You are slightly more skilled with crossbows than other ranged weapons.", PLAYER_FLAG_RACE),
PF(SWORD_UNSKILL, "Sword Distaste", "You are slightly less skilled with swords than other melee weapons.", PLAYER_FLAG_RACE),
PF(POLEARM_UNSKILL, "Polearm Distaste", "You are slightly less skilled with axes and polearms than other melee weapons.", PLAYER_FLAG_RACE),
PF(HAFTED_UNSKILL, "Hafted Distaste", "You are slightly less skilled with blunt weapons than other melee weapons.", PLAYER_FLAG_RACE),
PF(SLING_UNSKILL, "Sling Distaste", "You are slightly less skilled with slings than other ranged weapons.", PLAYER_FLAG_RACE),
PF(BOW_UNSKILL, "Bow Distaste", "You are slightly less skilled with bows than other ranged weapons.", PLAYER_FLAG_RACE),
PF(XBOW_UNSKILL, "Crossbow Distaste", "You are slightly less skilled with crossbows than other ranged weapons.", PLAYER_FLAG_RACE),
PF(HARDY, "Hardy", "You recover quickly from poison and cuts, and succumb slowly to the Black Breath.", PLAYER_FLAG_RACE),
PF(HUNGRY, "Ravenous", "You eat.  A lot.", PLAYER_FLAG_RACE),
PF(DIVINE, "Divine Powers", "You recover very quickly from negative effects, and can move through water without being slowed.", PLAYER_FLAG_RACE),
PF(SHADOW, "Shadow", "You are incredibly stealthy.", PLAYER_FLAG_RACE),
PF(WOODEN, "Treeish", "Your bare hands tear through stone and you are almost impossible to detect in forests, but you are vulnerable to fire and falling.", PLAYER_FLAG_RACE),
PF(BEARSKIN, "Shapeshifter", "You can take the form of a bear (use the ']' command).", PLAYER_FLAG_RACE),
PF(PLAINSMAN, "Plains Fighter", "You are more able to hit monsters while in plain regions.", PLAYER_FLAG_RACE),
PF(ELVEN, "Elven", "You have an inborn ability to move freely through forests.", PLAYER_FLAG_RACE),
PF(DWARVEN, "Dwarven", "You are able to move freely through rubble, and to evade attacks while in mountain regions.", PLAYER_FLAG_RACE),
PF(EDAIN, "Forest Fighter", "You are more able to hit monsters while in forests.", PLAYER_FLAG_RACE),
PF(BOW_SPEED_GOOD, "Fast Bow Shots", "Your shooting speed with a bow increases quickly with Dexterity.", PLAYER_FLAG_CLASS),
PF(BOW_SPEED_GREAT, "Very Fast Bow Shots", "Your shooting speed with a bow increases very quickly with Dexterity.", PLAYER_FLAG_CLASS),
PF(SLING_SPEED_GOOD, "Fast Sling Shots", "Your shooting speed with a sling increases quickly with Dexterity.", PLAYER_FLAG_CLASS),
PF(SLING_SPEED_GREAT, "Very Fast Sling Shots", "Your shooting speed with a sling increases very quickly with Dexterity.", PLAYER_FLAG_CLASS),
PF(XBOW_SPEED_GOOD, "Fast Crossbow Shots", "Your shooting speed with a crossbow increases quickly with Dexterity.", PLAYER_FLAG_CLASS),
PF(XBOW_SPEED_GREAT, "Very Fast Crossbow Shots", "Your shooting speed with a crossbow increases very quickly with Dexterity.", PLAYER_FLAG_CLASS),
PF(ASSASSINATE, "Assassinate", "You effectively assassinate unsuspecting creatures in melee and with ranged attacks.", PLAYER_FLAG_CLASS),
PF(STRONG_SHOOT, "Deadly Shot", "You do extra damage when shooting.", PLAYER_FLAG_CLASS),
PF(BACKSTAB, "Backstab", "You effectively backstab unsuspecting creatures in melee.", PLAYER_FLAG_CLASS),
PF(SPREAD_ATTACKS, "Crowd Combat [40]", "You can efficiently spread your attacks over multiple weak opponents at level 40.", PLAYER_FLAG_CLASS),
PF(STRONG_BASHES, "Strong Shield Bashing", "You are adept at fighting with your shield as well as your weapon.", PLAYER_FLAG_CLASS),
PF(UNARMED_COMBAT, "Unarmed Combat", "You are skilled in hand to hand combat, and are somewhat talented with slings.", PLAYER_FLAG_CLASS),
PF(BLESS_WEAPON, "Blessed Fighter", "You fight better with blessed weapons (Paladin). You are not comfortable with edged melee weapons, unless they have been Blessed (Priest).", PLAYER_FLAG_CLASS),
PF(CHARM, "Charms", "You have a bonus to cause sleep, confusion, and slow.", PLAYER_FLAG_CLASS),
PF(DEVICE_EXPERT, "Magic Device Expertise", "You have a great understanding of magical devices and can recharge them very reliably.", PLAYER_FLAG_CLASS),
PF(STRONG_MAGIC, "Full Spellcaster", "You are an expert spellcaster and have a large reserve of mana.", PLAYER_FLAG_CLASS),
PF(BEAM, "Extra Spell Beaming", "Your spells are more likely to 'beam', striking multiple targets.", PLAYER_FLAG_CLASS),
PF(LORE, "Lore", "You learn quickly about monster abilities.", PLAYER_FLAG_CLASS),
PF(HOLY, "Pious", "You carry a pious authority.  You glow with an inner light at level 35 (Priest) or level 45 (Paladin).", PLAYER_FLAG_CLASS),
PF(RELENTLESS, "Relentless [30, 40]", "You resist fear intrinsically at level 30.  You regenerate hitpoints intrinsically at level 40.", PLAYER_FLAG_CLASS),
PF(PROBE, "Monster Probing [35]", "You can learn details of monster attributes at level 35.", PLAYER_FLAG_CLASS),
PF(EVIL, "Evil", "You deal with dark forces.  Beware!", PLAYER_FLAG_CLASS),
PF(STEAL, "Pickpocketing", "You can rob gold from living monsters.", PLAYER_FLAG_CLASS),
PF(PSEUDO_ID_HEAVY, "Detailed Object Sensing", "You obtain relatively specific pseudoidentify information.", PLAYER_FLAG_CLASS),
PF(TRAP, "Trap Setting", "You can set monster traps.", PLAYER_FLAG_CLASS),
PF(WOODSMAN, "Woodsmanship", "You are attuned to nature.  You easily move and hide in trees.", PLAYER_FLAG_CLASS),
PF(XTRA_SPECIALTY, "Specialization [1]", "You can learn an extra specialty abilty at level 1.", PLAYER_FLAG_CLASS),
