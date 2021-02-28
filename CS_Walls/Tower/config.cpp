class CfgPatches
{
	class CS_Tower
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Tower_Large: HouseNoDestruct
	{
		scope = 2;
		model = "CS_Walls\Tower\CS_Tower_Large.p3d";
	};
};