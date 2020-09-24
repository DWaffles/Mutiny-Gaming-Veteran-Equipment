#  Mutiny-Gaming-Veteran-Equipment
Repository for Mutiny Gaming Veteran Equipment, an Arma 3 mod for the mil-sim community Mutiny Gaming. 

As of 9-22-2020, this mod adds
- 20 personalized weapons
- 2 personalized AT launchers
- 2 personalized pieces of headwear

# Current Tasks
- [ ] Get a backwards hat model for Darkie
- [ ] Find a way to see if Arma 3 configs support conditional statements depending on loaded add-ons.
- [ ] Properly sort out file structures so individual add-ons are unpacked to `\MGVE` or `\Mutiny-Gaming` instead of their `\[add-on name]`
- [ ] See if an individual weapons fire sound can be changed or altered

# Current Code Conventions

## Class names
- Class names are prefixed by *MGVE_* to prevent identical class names to other mods
- Class names will be camel cased
- Underscores will be used to seperate tags, details or other characteristics of that class. For example, a veteran gun belonging to the member "Fax" will be named `MGVE_VG_Fax`

| Item Type        | Class Name Convention             |
|------------------|-----------------------------------|
| Veteran Gun      | MGVE_VG_MemberName_[WeaponName]   |
| Veteran Launcher | MGVE_VL_MemberName_[WeaponName]   |
| Veteran Clothing | MGVE_VC_MemberName_[ClothingType] |
| Ammo Configs     | MGVE_Ammo_Caliber_[Type]*         |
| Magazine Configs | MGVE_Mag_Capacity_Caliber_[Type]* |

## Add-ons
- `MGVE_Core` defines the Mod_Base, ammunition, magazines, and mag-well configurations
- `MGVE_VeteranClothing` defines clothing item such as berets, hats, and any future clothing items
- `MGVE_VeteranGuns` unsurprisingly defines veteran weapons of the small arms caliber
- `MGVE_VeteranLaunchers` defines personalized launchers

# Links
- [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=2234800863)
- [Discord for Mutiny Gaming](https://discord.gg/G4kH3sT)
