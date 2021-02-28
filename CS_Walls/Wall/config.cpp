class CfgPatches
{
	class CS_Wall
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "CS_Walls\Wall\CS_Wall.p3d";
	};
};