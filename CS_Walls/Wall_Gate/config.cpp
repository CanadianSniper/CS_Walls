class CfgPatches
{
	class CS_Wall_Gate
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Wall_Gate: HouseNoDestruct
	{
		scope = 2;
		model = "CS_Walls\Wall_Gate\CS_Wall_Gate.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Twin Doors 1";
				component = "doorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 2.0;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen = "doorMetalTwinBigOpen";
				soundClose = "doorMetalTwinBigClose";
				soundLocked = "doorMetalTwinBigRattle";
				soundOpenABit = "doorMetalTwinBigOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
				class Melee
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
			};
			class DamageZones
			{
				class DoorsTwin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"doorsTwin1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 2; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 2.5; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
	};
};