### Developer Bastian

<img src="https://developerbastian.github.io/www/assets/images/bastian.developer.png" width="394px" height="400px" />

## General Notes
This is a continuation of the [Bastian Plugin](https://github.com/DeveloperBastian/BastianPlugin) - an attempt to use Unreal Lyra as a base for a RPG like game.
We looked at map and character creation, weapon pickups and animation and tried to make some sense out of the many classes and entities that are used in Lyra.

If you are interested, have a look at the resulting playlist ["Create a game on Unreal Lyra"](https://www.youtube.com/playlist?list=PLK0EcCQf_rrZUfro2vlwFLQ1Y8itOVSgd) - or [here](https://www.youtube.com/playlist?list=PLK0EcCQf_rrbllC32wvGTJxINbO4yXb0U) for the german version of these videos.
All results and learnings of these videos are compiled together into on [Infographics](https://github.com/DeveloperBastian/Unreal-Lyra-Concepts/blob/main/infographics/Unreal%20Lyra.pdf) for easier reference and to give the videos some structure.

## BA Inventory
This new plugin tries to create an general inventory system for any Unreal game (could also be used in Lyra, but also in all other Unreal game templates).

# Principles
* General principles - security
  *	All Item and Inventory processes are managed on Authority only
  * Remote client only receives UI related information
* Scalability
  * All components are not directly coupled but message based
  * High load data access is based on cached (Data Registries) or in-memory storage
* Owner to Inventory Relations
  * Owner can have multiple inventories - permanent (equipment) or temporary (chest)
  * Owner can have different access rights per inventory - Add Only, Full Access, Read Only, ...
  * Inventory can have multiple owner with different access levels
* Items
  * Items are always data driven via databases, data registries or data tables
  * Items are composed of fragments detailing different aspects (name, weight, durability, ...)

# Multi User, Multi Owner, Multi Access inventories
The inventory plugin is designed to handle multiple users with different rights.
This might cover situations such as temporary access to inventories (opening a chest), having multiple inventories per character or having different rights on an inventory such as different rights between guild members and masters:

![BA Inventory](https://developerbastian.github.io/www/assets/images/BA_Inventory_Processes.png)


# License
All artefacts are licensed under a <a rel="license" href="https://creativecommons.org/licenses/by-sa/4.0/">Creative Commons - CC BY-SA 4.0: Attribution-ShareAlike 4.0 International</a><br /><br />
<a rel="license" href="https://creativecommons.org/licenses/by/4.0/deed.en"><img alt="Creative Commons License 4" style="border-width:0; width: 100px" src="https://mirrors.creativecommons.org/presskit/buttons/88x31/png/by-sa.png" /></a>

# Assets used under Creative Commons License
- [Treasure Chest](https://bit.ly/3LIsBYh)
- [Opening Chest Sound](https://bit.ly/3RV7VjZ)



