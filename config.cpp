	class CfgPatches
{
	class Raven_Bomber
	{
		units[]=
		{
			"Raven_Bomber"
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
	class BomberJacket_ColorBase;
	class Raven_Bomber: BomberJacket_ColorBase
	{
		scope=2;
		displayName="Ravenuv Bomber";
		descriptionShort="Nezapomen dat odber a like";
		itemsCargoSize[]={10,10};
		heatIsolation=0.99999999;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"RavenBomber\data\Raven_Bomber.paa",
			"RavenBomber\data\Raven_Bomber.paa",
			"RavenBomber\data\Raven_Bomber.paa"
		};
	};
};