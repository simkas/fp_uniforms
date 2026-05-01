class CfgPatches
{
	class FP_UniformsSNS
	{
		units[]={};
		weapons[]=
		{
			"U_FP_BDU_portg_lizard",
			"U_FP_BDU_taki_lizard",
			"U_FP_BDU_gray_lizard",
			"U_FP_BDU_greek_lizard",
			"U_FP_OG107_guer1_trop",
			"U_FP_OG107_guer2_trop",
			"U_FP_OG107_guer3_trop",
			"U_FP_OG107_cuban_tuck",
			"U_FP_OG107_cuban_tuck_trop",
			"U_FP_OG107_tan_tuck",
			"U_FP_OG107_tan_tuck_trop",
			"U_FP_TCU_french_roll",
			"U_FP_DNCE_Winter",
			"U_FP_DNCE_Olive"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"simc_mc_67_core"
		};
	};
};
class CfgVehicles
{
	class simc_bdu_eto_blench;
	class FP_BDU_portg_lizard: simc_bdu_eto_blench
	{
		displayName="BDU Portuguese Lizard";
		uniformClass="U_FP_BDU_portg_lizard";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\bdu_port_lizard_co.paa",
			"\FP_UniformsSNS\data\bdu_port_lizard_co.paa",
			"",
			"",
			""
		};
	};
	class FP_BDU_taki_lizard: simc_bdu_eto_blench
	{
		displayName="BDU Takistani Lizard";
		uniformClass="U_FP_BDU_taki_lizard";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\bdu_takistani_lizard_co.paa",
			"\FP_UniformsSNS\data\bdu_takistani_lizard_co.paa",
			"",
			"",
			""
		};
	};
	class FP_BDU_gray_lizard: simc_bdu_eto_blench
	{
		displayName="BDU Gray Lizard";
		uniformClass="U_FP_BDU_gray_lizard";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\bdu_sadf_recce_co.paa",
			"\FP_UniformsSNS\data\bdu_sadf_recce_co.paa",
			"",
			"",
			""
		};
	};
	class FP_BDU_greek_lizard: simc_bdu_eto_blench
	{
		displayName="BDU Greek Lizard";
		uniformClass="U_FP_BDU_greek_lizard";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\bdu_greek_lizard_co.paa",
			"\FP_UniformsSNS\data\bdu_greek_lizard_co.paa",
			"",
			"",
			""
		};
	};

	class simc_og107_mk3_tuck_blench;
	class FP_og107_tan_tuck: simc_og107_mk3_tuck_blench
	{
		displayName="OG-107 Tan";
		uniformClass="U_FP_OG107_tan_tuck";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_tan_co.paa",
			"\FP_UniformsSNS\data\og107_tan_co.paa",
			"",
			""
		};
	};
	class FP_og107_cuban_tuck: simc_og107_mk3_tuck_blench
	{
		displayName="OG-107 Cuban Lizard";
		uniformClass="U_FP_OG107_cuban_tuck";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_cuban_co.paa",
			"\FP_UniformsSNS\data\og107_cuban_co.paa",
			"",
			""
		};
	};
	class simc_og107_mk3_tuck_trop_blench;
	class FP_og107_tan_tuck_trop: simc_og107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Tan (Rolled)";
		uniformClass="U_FP_OG107_tan_tuck_trop";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_tan_co.paa",
			"\FP_UniformsSNS\data\og107_tan_co.paa",
			"",
			""
		};
	};
	class FP_og107_cuban_tuck_trop: simc_og107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Cuban Lizard (Rolled)";
		uniformClass="U_FP_OG107_cuban_tuck_trop";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_cuban_co.paa",
			"\FP_UniformsSNS\data\og107_cuban_co.paa",
			"",
			""
		};
	};
	class FP_og107_guer1_trop: simc_og107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Guerilla (Blue & Black)";
		uniformClass="U_FP_OG107_guer1_trop";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_blue_co.paa",
			"\FP_UniformsSNS\data\og107_black_co.paa",
			"",
			""
		};
	};
	class FP_og107_guer2_trop: simc_og107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Guerilla (Black & Brown)";
		uniformClass="U_FP_OG107_guer2_trop";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_black_co.paa",
			"\FP_UniformsSNS\data\og107_brown_co.paa",
			"",
			""
		};
	};
	class FP_og107_guer3_trop: simc_og107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Guerilla (Brown & Blue)";
		uniformClass="U_FP_OG107_guer3_trop";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\og107_brown_co.paa",
			"\FP_UniformsSNS\data\og107_blue_co.paa",
			"",
			""
		};
	};
		
	class simc_DNCE;
	class FP_DNCE_Winter: simc_DNCE
	{
		displayName="M1951 Parka (Winter)";
		uniformClass="U_FP_DNCE_Winter";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\wcu.paa",
			"\FP_UniformsSNS\data\wcu.paa"
		};		
	};
	class FP_DNCE_Olive: simc_DNCE
	{
		displayName="M1951 Parka (Olive)";
		uniformClass="U_FP_DNCE_Olive";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\wcu_olive.paa",
			"\FP_UniformsSNS\data\wcu_olive.paa"
		};		
	};
	
	class simc_tcu_mk1_leg_roll;
	class FP_tcu_french_roll: simc_tcu_mk1_leg_roll
	{
		displayName="French Lizard Paratrooper Uniform";
		uniformClass="U_FP_TCU_french_roll";
		hiddenSelectionsTextures[]=
		{
			"\FP_UniformsSNS\data\tcu_french_co.paa",
			"\FP_UniformsSNS\data\tcu_french_co.paa",
			"",
			""
		};
	};
};
class cfgWeapons
{
	class UniformItem;

	class U_Simc_bdu_eto;
	class U_Simc_bdu_eto_blench: U_Simc_bdu_eto
	{
		class ItemInfo;
	};
	class U_FP_BDU_portg_lizard: U_Simc_bdu_eto_blench
	{
		displayName="BDU Portuguese Lizard";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_BDU_portg_lizard";
		};
	};
	class U_FP_BDU_taki_lizard: U_Simc_bdu_eto_blench
	{
		displayName="BDU Takistani Lizard";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_BDU_taki_lizard";
		};
	};
	class U_FP_BDU_gray_lizard: U_Simc_bdu_eto_blench
	{
		displayName="BDU Gray Lizard";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_BDU_gray_lizard";
		};
	};
	class U_FP_BDU_greek_lizard: U_Simc_bdu_eto_blench
	{
		displayName="BDU Greek Lizard";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_BDU_greek_lizard";
		};
	};

	class U_Simc_OG107_mk3_blench;
	class U_Simc_OG107_mk3_tuck_blench: U_Simc_OG107_mk3_blench
	{
		class ItemInfo;
	};
	class U_FP_OG107_cuban_tuck: U_Simc_OG107_mk3_tuck_blench
	{
		displayName="OG-107 Cuban Lizard";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_cuban_tuck";
		};
	};
	class U_FP_OG107_tan_tuck: U_Simc_OG107_mk3_tuck_blench
	{
		displayName="OG-107 Tan";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_tan_tuck";
		};
	};
	class U_Simc_OG107_mk3_tuck_trop_blench: U_Simc_OG107_mk3_tuck_blench
	{
		class ItemInfo;
	};
	class U_FP_OG107_cuban_tuck_trop: U_Simc_OG107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Cuban Lizard (Rolled)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_cuban_tuck_trop";
		};
	};
	class U_FP_OG107_tan_tuck_trop: U_Simc_OG107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Tan (Rolled)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_tan_tuck_trop";
		};
	};
	class U_FP_OG107_guer1_trop: U_Simc_OG107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Guerilla (Blue & Black)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_guer1_trop";
		};
	};
	class U_FP_OG107_guer2_trop: U_Simc_OG107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Guerilla (Black & Brown)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_guer2_trop";
		};
	};
	class U_FP_OG107_guer3_trop: U_Simc_OG107_mk3_tuck_trop_blench
	{
		displayName="OG-107 Guerilla (Brown & Blue)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_og107_guer3_trop";
		};
	};
	
	class U_Simc_81_BasicBody;
	class U_Simc_DNCE: U_Simc_81_BasicBody
	{
		class ItemInfo;
	};
	class U_FP_DNCE_Winter: U_Simc_DNCE
	{
		displayName="M1951 Parka (Winter)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_DNCE_Winter";
		};
	};
	class U_FP_DNCE_Olive: U_Simc_DNCE
	{
		displayName="M1951 Parka (Olive)";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_DNCE_Olive";
		};
	};
	
	class U_Simc_TCU_mk3_leg;
	class U_Simc_TCU_mk1_leg_roll: U_Simc_TCU_mk3_leg
	{
		class ItemInfo;
	};
	class U_FP_TCU_french_roll: U_Simc_TCU_mk1_leg_roll
	{
		displayName="French Lizard Paratrooper Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="FP_tcu_french_roll";
		};
	};
};
