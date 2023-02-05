/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include "ScriptMgr.h"
#include "Player.h"
#include "Config.h"
#include "Chat.h"

// Add player scripts
class MyPlayer : public PlayerScript
{
public:
    MyPlayer() : PlayerScript("MyPlayer") { }

    void OnLogin(Player* player) override
    {
        if (sConfigMgr->GetOption<bool>("MyModule.Enable", true))
        {
            ChatHandler(player->GetSession()).SendSysMessage("1111111");
            ChatHandler(player->GetSession()).PSendSysMessage("2222222");
            ChatHandler(player->GetSession()).SendGlobalGMSysMessage("3333333333");
            ChatHandler(player->GetSession()).SendGlobalSysMessage("444444444444444");
        }
    }
};

// Add all scripts in one
void AddMyModelScripts()
{
    new MyPlayer();
}
