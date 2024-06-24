    class OPTRE_Static_M247H_Shielded_Tripod;
    class OPTRE_Static_M247T_Tripod;

    class ssv_vanguard_static_m247h_shielded : OPTRE_Static_M247H_Shielded_Tripod 
    {
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
    };
    class ssv_vanguard_static_m247t : OPTRE_Static_M247T_Tripod 
    {
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
    };

    class OPTRE_Scythe;
    class ssv_vanguard_static_scythe : OPTRE_Scythe
    {
        displayName = "M71 Scythe";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\optre_weapons\static\Scythe\data\aaScythe_Black_co.paa","\optre_weapons\static\Base\aabase_Black_co.paa","\optre_weapons\static\Base\aadecal_ca.paa","\optre_weapons\static\Base\aadecal_ca.paa"};
    };

    class OPTRE_Lance;
    class ssv_vanguard_static_lance : OPTRE_Lance
    {
        displayName = "M95 Lance";
        faction = "SSV_Aux_Vanguard_SpecOps";
        side=2;
        crew = CREW;
        FACTION_PREVIEW;
        hiddenSelectionsTextures[] = {"\optre_weapons\static\lance\data\aalance_Black_co.paa","\optre_weapons\static\base\aabase_Black_co.paa","\optre_weapons\static\base\aadecal_ca.paa","\optre_weapons\static\base\aadecal_ca.paa"};
    };