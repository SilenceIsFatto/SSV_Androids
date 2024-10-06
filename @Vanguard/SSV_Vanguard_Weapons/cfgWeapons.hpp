	class WRS_Weapon_AR; // Space M4
	class WRS_Weapon_AR_2; // Space MP5
	class WRS_Weapon_Revolver; // Space Python
	class WRS_Weapon_Aug; // Space Aug
	class WRS_Weapon_Sniper_Bolt; // Space Osiris
	class WRS_Weapon_ShockGun; // Space Railgun
	class WRS_Weapon_Sniper; // Space LMG but is actually a sniper
	class WRS_Weapon_LMG; // Space LMG but is actually an LMG

	#include "ar_1.hpp"
	#include "bullpup.hpp"
	#include "lmg.hpp"
	#include "railgun.hpp"
	#include "revolver.hpp"
	#include "sniper_bolt.hpp"

	// Android deprecated weapons
	class SSV_Weapon_Android_Greyhound : SSV_Weapon_Android_AR {};
	class SSV_Weapon_Android_Raptor : SSV_Weapon_Android_AR {};
	class SSV_Weapon_Android_Constrictor : SSV_Weapon_Android_Revolver {};
	class SSV_Weapon_Android_Bulldog : SSV_Weapon_Android_Bullpup {};
	class SSV_Weapon_Android_Boomslang : SSV_Weapon_Android_Sniper_Bolt {};
	// Vanguard deprecated weapons
	class SSV_Weapon_Vanguard_Greyhound : SSV_Weapon_Vanguard_AR {};
	class SSV_Weapon_Vanguard_Constrictor : SSV_Weapon_Vanguard_Revolver {};
	class SSV_Weapon_Vanguard_Bulldog : SSV_Weapon_Vanguard_Bullpup {};
	class SSV_Weapon_Vanguard_Boomslang : SSV_Weapon_Vanguard_Sniper_Bolt {};
	class SSV_Weapon_Vanguard_Pilum : SSV_Weapon_Vanguard_Sniper_Bolt {};
	class SSV_Weapon_Vanguard_Rhino : SSV_Weapon_Vanguard_Railgun {};