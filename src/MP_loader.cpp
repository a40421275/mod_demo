/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

// From SC
void AddMyModelScripts();
void AddSC_example_commandscript();
void AddSC_npc_example();
void AddSC_item_example();
void AddSC_world_example();

// Add all
// cf. the naming convention https://github.com/azerothcore/azerothcore-wotlk/blob/master/doc/changelog/master.md#how-to-upgrade-4
// additionally replace all '-' in the module folder name with '_' here
void Addmod_demoScripts()
{
    AddMyModelScripts();
    AddSC_example_commandscript();
    AddSC_npc_example();
    AddSC_item_example();
    AddSC_world_example();
}

