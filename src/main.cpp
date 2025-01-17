#include "Geode/modify/Modify.hpp"
#include <Geode/Geode.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>
#include <Geode/cocos/textures/CCTexture2D.h>

using namespace geode::prelude;

class $modify(editui, EditorUI) 
{
	bool init(LevelEditorLayer* editorLayer) 
	{	
		if (!EditorUI::init(editorLayer)) return false;

// this code is so bad but i cant find another way to do it :sob:
// wait wait im stupid what hold up i can slightly fix it to not use 15 million variables
// github is so hard bro idk what im doing
            auto buildtabs = this->getChildByID("build-tabs-menu");

// function but not
auto setupSprite = [&] (CCSprite* spr, cocos2d::CCSprite* tabsprc) {
if (!spr || !tabsprc) return;
tabsprc->addChild(spr);
static_cast<cocos2d::CCNode*>(tabsprc->getChildren()->objectAtIndex(0))->setVisible(false);
spr->setScale (0.55);
spr->setPosition(cocos2d::CCPoint(16, 7.75));
spr->setOpacity(150);
};

// Custom tab
if (Mod::get()->getSettingValue<bool>("customtab-toggle"))
{
if (!Mod::get()->getSettingValue<bool>("customtab-alt"))
{
setupSprite(CCSprite::create("custom-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("custom-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("custom-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("custom-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}
else
{
setupSprite(CCSprite::create("custom-tab-alt.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("custom-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("custom-tab-alt.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("custom-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}
}
// Trigger tab
if (Mod::get()->getSettingValue<bool>("triggertab-toggle"))
{
setupSprite(CCSprite::create("trigger-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("trigger-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("trigger-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("trigger-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Sawblade tab
if (Mod::get()->getSettingValue<bool>("sawbladetab-toggle"))
{
setupSprite(CCSprite::create("sawblade-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("sawblade-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("sawblade-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("sawblade-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// 3D tab
if (Mod::get()->getSettingValue<bool>("threedtab-toggle"))
{

cocos2d::CCSprite* threedtabspr;
cocos2d::CCSprite* threedtabspr2;

    if (!Mod::get()->getSettingValue<bool>("threedtab-alt"))
    {
setupSprite(CCSprite::create("3d-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("3d-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("3d-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("3d-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
    }
    else
    {
setupSprite(CCSprite::create("3d-tab-alt.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("3d-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("3d-tab-alt.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("3d-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
    }
}

// Monster tab
if (Mod::get()->getSettingValue<bool>("monstertab-toggle"))
{
setupSprite(CCSprite::create("monster-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("monster-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("monster-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("monster-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Pixel tab
if (Mod::get()->getSettingValue<bool>("pixeltab-toggle"))
{
if (!Mod::get()->getSettingValue<bool>("pixeltab-alt"))
{
setupSprite(CCSprite::create("pixel-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("pixel-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("pixel-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("pixel-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}
else
{
setupSprite(CCSprite::create("pixel-tab-alt.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("pixel-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("pixel-tab-alt.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("pixel-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}
}

// Collectible tab
if (Mod::get()->getSettingValue<bool>("collectibletab-toggle"))
{
setupSprite(CCSprite::create("collectible-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("collectible-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("collectible-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("collectible-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}    

// Icon tab
if (Mod::get()->getSettingValue<bool>("icontab-toggle"))
{
setupSprite(CCSprite::create("icon-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("icon-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("icon-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("icon-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Block tab
if (Mod::get()->getSettingValue<bool>("blocktab-toggle"))
{
setupSprite(CCSprite::create("block-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("block-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("block-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("block-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Outline tab
if (Mod::get()->getSettingValue<bool>("outlinetab-toggle"))
{
setupSprite(CCSprite::create("outline-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("outline-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("outline-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("outline-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Hazard tab
if (Mod::get()->getSettingValue<bool>("hazardtab-toggle"))
{
setupSprite(CCSprite::create("hazard-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("hazard-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("hazard-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("hazard-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Portal tab
if (Mod::get()->getSettingValue<bool>("portaltab-toggle"))
{
setupSprite(CCSprite::create("portal-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("portal-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("portal-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("portal-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Deco tab
if (Mod::get()->getSettingValue<bool>("decotab-toggle"))
{
setupSprite(CCSprite::create("deco-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("deco-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("deco-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("deco-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}

// Slope tab holy how did i forget this
if (Mod::get()->getSettingValue<bool>("slopetab-toggle"))
{
setupSprite(CCSprite::create("slope-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("slope-tab")->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0)));
setupSprite(CCSprite::create("slope-tab.png"_spr), static_cast<cocos2d::CCSprite*>(static_cast<cocos2d::CCSprite*>(buildtabs->getChildByID("slope-tab")->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0)));
}
            log::debug("something happened so you did it right");

		return true;
	}
};
