class CfgPatches
{
	class raven_m65
	{
		units[]=
		{
			"raven_m65"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class M65Jacket_ColorBase;
	class raven_m65: M65Jacket_ColorBase
	{
		scope=2;
		displayName="Adminova bunda";
		descriptionShort="Tato bunda je majetkem RavenTreka";
		itemsCargoSize[]={10,100};
		heatIsolation=0.99999999;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"RavenM65\data\raven_m65.paa",
			"RavenM65\data\raven_m65.paa",
			"RavenM65\data\raven_m65.paa"
		};
	};
};
///////////////////////////////////////////////////////////////////////////////Další/////////////////////////////////////////////////////////////////////////////////////////////////////
	class CfgPatches
{
	class Raven_Bag
	{
		units[]=
		{
			"Raven_Bag"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class CoyoteBag_ColorBase;
	class Raven_Bag: CoyoteBag_ColorBase
	{
		scope=2;
		displayName="Ravenuv Bagl";
		descriptionShort="Nezapomen dat odber a like";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemsCargoSize[]={10,30};
		heatIsolation=0.99999999;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"RavenBag\data\Raven_Bag.paa",
			"RavenBag\data\Raven_Bag.paa",
			"RavenBag\data\Raven_Bag.paa"
		};
	};
};
///////////////////////////////////////////////////////////////////////////////Další/////////////////////////////////////////////////////////////////////////////////////////////////////
class CfgPatches
{
	class raven_m65
	{
		units[]=
		{
			"raven_m65"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class M65Jacket_ColorBase;
	class raven_m65: M65Jacket_ColorBase
	{
		scope=2;
		displayName="Adminova bunda";
		descriptionShort="Tato bunda je majetkem RavenTreka";
		itemsCargoSize[]={10,100};
		heatIsolation=0.99999999;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"RavenM65\data\raven_m65.paa",
			"RavenM65\data\raven_m65.paa",
			"RavenM65\data\raven_m65.paa"
		};
	};
};
