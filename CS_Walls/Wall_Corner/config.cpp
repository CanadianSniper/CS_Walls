class CfgPatches
{
	class CS_Wall_Corner
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Wall_Corner: HouseNoDestruct
	{
		scope = 2;
		model = "CS_Walls\Wall_Corner\CS_Wall_Corner.p3d";
	};
};