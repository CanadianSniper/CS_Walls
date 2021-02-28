class CfgPatches
{
	class CS_Wall_Stairs_Right
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Wall_Stairs_Right: HouseNoDestruct
	{
		scope = 2;
		model = "CS_Walls\Wall_Stairs_Right\CS_Wall_Stairs_Right.p3d";
	};
};