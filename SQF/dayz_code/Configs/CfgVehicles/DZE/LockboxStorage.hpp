class LockboxStorageLocked: Land_A_tent {
	vehicleClass = "Survival";
	displayName = "Locked Lockbox";
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	offset[] = {0,1.5,0.5};
	lockable = 2;
	unlockedClass = "LockboxStorage";
	nounderground = 0;
	requireplot = 0;
};
class LockboxStorage: Land_A_tent {
	vehicleClass = "Survival";
	displayName = "Lockbox";
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	destrType = "DestructNo";
	armor = 800;
	transportMaxMagazines = 50;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	lockedClass = "LockboxStorageLocked";
	packedClass = "WeaponHolder_ItemLockbox";
};

class WeaponHolder_ItemLockbox: WeaponHolder {
	scope = 2;
	displayName = "Lockbox";
	seedItem = "ItemLockbox";
};