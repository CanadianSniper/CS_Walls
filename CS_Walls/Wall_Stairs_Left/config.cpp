class CfgPatches
{
	class CS_Wall_Stairs_Left
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Wall_Stairs_Left: HouseNoDestruct
	{
		scope = 2;
		model = "CS_Walls\Wall_Stairs_Left\CS_Wall_Stairs_Left.p3d";
	};
};