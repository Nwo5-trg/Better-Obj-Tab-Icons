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

//this code is so fucking bad but i cant find another way to do it :sob:
            auto buildtabs = this->getChildByID("build-tabs-menu");

// Custom tab
if (Mod::get()->getSettingValue<bool>("customtab-toggle"))
{
auto customtabspr = CCSprite::create("custom-tab.png"_spr);
auto customtabspr2 = CCSprite::create("custom-tab.png"_spr);
auto customtab = buildtabs->getChildByID("custom-tab");
auto custom1 = customtab->getChildren();
auto custom2 = static_cast<cocos2d::CCNode*>(custom1->objectAtIndex(0));
auto custom3 = custom2->getChildren();
auto custom4 = static_cast<cocos2d::CCNode*>(custom3->objectAtIndex(0));
auto custom5 = custom4->getChildren();
auto custom6 = static_cast<cocos2d::CCSprite*>(custom5->objectAtIndex(0));
custom6->setVisible(false);
custom4->addChild(customtabspr);
customtabspr->setScale(0.55);
customtabspr->setPosition(cocos2d::CCPoint(16, 7.75));
customtabspr->setOpacity(150);
auto custom7 = static_cast<cocos2d::CCNode*>(custom1->objectAtIndex(1));
auto custom8 = custom7->getChildren();
auto custom9 = static_cast<cocos2d::CCNode*>(custom8->objectAtIndex(0));
auto custom10 = custom9->getChildren();
auto custom11 = static_cast<cocos2d::CCSprite*>(custom10->objectAtIndex(0));
custom11->setVisible(false);
custom9->addChild(customtabspr2);
customtabspr2->setScale(0.55);
customtabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
customtabspr2->setOpacity(150);
}

// Trigger tab
if (Mod::get()->getSettingValue<bool>("triggertab-toggle"))
{
auto triggertabspr = CCSprite::create("trigger-tab.png"_spr);
auto triggertabspr2 = CCSprite::create("trigger-tab.png"_spr);
auto triggertab = buildtabs->getChildByID("trigger-tab");
auto trigger1 = triggertab->getChildren();
auto trigger2 = static_cast<cocos2d::CCNode*>(trigger1->objectAtIndex(0));
auto trigger3 = trigger2->getChildren();
auto trigger4 = static_cast<cocos2d::CCNode*>(trigger3->objectAtIndex(0));
auto trigger5 = trigger4->getChildren();
auto trigger6 = static_cast<cocos2d::CCSprite*>(trigger5->objectAtIndex(0));
trigger6->setVisible(false);
trigger4->addChild(triggertabspr);
triggertabspr->setScale(0.55);
triggertabspr->setPosition(cocos2d::CCPoint(16, 7.75));
triggertabspr->setOpacity(150);
auto trigger7 = static_cast<cocos2d::CCNode*>(trigger1->objectAtIndex(1));
auto trigger8 = trigger7->getChildren();
auto trigger9 = static_cast<cocos2d::CCNode*>(trigger8->objectAtIndex(0));
auto trigger10 = trigger9->getChildren();
auto trigger11 = static_cast<cocos2d::CCSprite*>(trigger10->objectAtIndex(0));
trigger11->setVisible(false);
trigger9->addChild(triggertabspr2);
triggertabspr2->setScale(0.55);
triggertabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
triggertabspr2->setOpacity(150);
}

// Sawblade tab
if (Mod::get()->getSettingValue<bool>("sawbladetab-toggle"))
{
auto sawbladetabspr = CCSprite::create("sawblade-tab.png"_spr);
auto sawbladetabspr2 = CCSprite::create("sawblade-tab.png"_spr);
auto sawbladetab = buildtabs->getChildByID("sawblade-tab");
auto saw1 = sawbladetab->getChildren();
auto saw2 = static_cast<cocos2d::CCNode*>(saw1->objectAtIndex(0));
auto saw3 = saw2->getChildren();
auto saw4 = static_cast<cocos2d::CCNode*>(saw3->objectAtIndex(0));
auto saw5 = saw4->getChildren();
auto saw6 = static_cast<cocos2d::CCSprite*>(saw5->objectAtIndex(0));
saw6->setVisible(false);
saw4->addChild(sawbladetabspr);
sawbladetabspr->setScale(0.55);
sawbladetabspr->setPosition(cocos2d::CCPoint(16, 7.75));
sawbladetabspr->setOpacity(150);
auto saw7 = static_cast<cocos2d::CCNode*>(saw1->objectAtIndex(1));
auto saw8 = saw7->getChildren();
auto saw9 = static_cast<cocos2d::CCNode*>(saw8->objectAtIndex(0));
auto saw10 = saw9->getChildren();
auto saw11 = static_cast<cocos2d::CCSprite*>(saw10->objectAtIndex(0));
saw11->setVisible(false);
saw9->addChild(sawbladetabspr2);
sawbladetabspr2->setScale(0.55);
sawbladetabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
sawbladetabspr2->setOpacity(150);
}

// 3D tab
if (Mod::get()->getSettingValue<bool>("threedtab-toggle"))
{

cocos2d::CCSprite* threedtabspr;
cocos2d::CCSprite* threedtabspr2;

    if (!Mod::get()->getSettingValue<bool>("threedtab-alt"))
    {
        threedtabspr = CCSprite::create("3d-tab.png"_spr);
        threedtabspr2 = CCSprite::create("3d-tab.png"_spr);
    }
    else
    {
        threedtabspr = CCSprite::create("3d-tab-alt.png"_spr);
        threedtabspr2 = CCSprite::create("3d-tab-alt.png"_spr);
    }
auto threedtab = buildtabs->getChildByID("3d-tab");
auto td1 = threedtab->getChildren();
auto td2 = static_cast<cocos2d::CCNode*>(td1->objectAtIndex(0));
auto td3 = td2->getChildren();
auto td4 = static_cast<cocos2d::CCNode*>(td3->objectAtIndex(0));
auto td5 = td4->getChildren();
auto td6 = static_cast<cocos2d::CCSprite*>(td5->objectAtIndex(0));
td6->setVisible(false);
td4->addChild(threedtabspr);
threedtabspr->setScale(0.55);
threedtabspr->setPosition(cocos2d::CCPoint(16, 7.75));
threedtabspr->setOpacity(150);
auto td7 = static_cast<cocos2d::CCNode*>(td1->objectAtIndex(1));
auto td8 = td7->getChildren();
auto td9 = static_cast<cocos2d::CCNode*>(td8->objectAtIndex(0));
auto td10 = td9->getChildren();
auto td11 = static_cast<cocos2d::CCSprite*>(td10->objectAtIndex(0));
td11->setVisible(false);
td9->addChild(threedtabspr2);
threedtabspr2->setScale(0.55);
threedtabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
threedtabspr2->setOpacity(150);
}

// Monster tab
if (Mod::get()->getSettingValue<bool>("monstertab-toggle"))
{
auto monstertabspr = CCSprite::create("monster-tab.png"_spr);
auto monstertabspr2 = CCSprite::create("monster-tab.png"_spr);
auto monstertab = buildtabs->getChildByID("monster-tab");
auto mon1 = monstertab->getChildren();
auto mon2 = static_cast<cocos2d::CCNode*>(mon1->objectAtIndex(0));
auto mon3 = mon2->getChildren();
auto mon4 = static_cast<cocos2d::CCNode*>(mon3->objectAtIndex(0));
auto mon5 = mon4->getChildren();
auto mon6 = static_cast<cocos2d::CCSprite*>(mon5->objectAtIndex(0));
mon6->setVisible(false);
mon4->addChild(monstertabspr);
monstertabspr->setScale(0.55);
monstertabspr->setPosition(cocos2d::CCPoint(16, 7.75));
monstertabspr->setOpacity(150);
auto mon7 = static_cast<cocos2d::CCNode*>(mon1->objectAtIndex(1));
auto mon8 = mon7->getChildren();
auto mon9 = static_cast<cocos2d::CCNode*>(mon8->objectAtIndex(0));
auto mon10 = mon9->getChildren();
auto mon11 = static_cast<cocos2d::CCSprite*>(mon10->objectAtIndex(0));
mon11->setVisible(false);
mon9->addChild(monstertabspr2);
monstertabspr2->setScale(0.55);
monstertabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
monstertabspr2->setOpacity(150);
}

// Pixel tab
if (Mod::get()->getSettingValue<bool>("pixeltab-toggle"))
{
cocos2d::CCSprite* pixeltabspr;
cocos2d::CCSprite* pixeltabspr2;
if (!Mod::get()->getSettingValue<bool>("pixeltab-alt"))
{
pixeltabspr = CCSprite::create("pixel-tab.png"_spr);
pixeltabspr2 = CCSprite::create("pixel-tab.png"_spr);
}
else
{
pixeltabspr = CCSprite::create("pixel-tab-alt.png"_spr);
pixeltabspr2 = CCSprite::create("pixel-tab-alt.png"_spr);
}

auto pixeltab = buildtabs->getChildByID("pixel-tab");
auto pix1 = pixeltab->getChildren();
auto pix2 = static_cast<cocos2d::CCNode*>(pix1->objectAtIndex(0));
auto pix3 = pix2->getChildren();
auto pix4 = static_cast<cocos2d::CCNode*>(pix3->objectAtIndex(0));
auto pix5 = pix4->getChildren();
auto pix6 = static_cast<cocos2d::CCSprite*>(pix5->objectAtIndex(0));
pix6->setVisible(false);
pix4->addChild(pixeltabspr);
pixeltabspr->setScale(0.55);
pixeltabspr->setPosition(cocos2d::CCPoint(16, 7.75));
pixeltabspr->setOpacity(150);
auto pix7 = static_cast<cocos2d::CCNode*>(pix1->objectAtIndex(1));
auto pix8 = pix7->getChildren();
auto pix9 = static_cast<cocos2d::CCNode*>(pix8->objectAtIndex(0));
auto pix10 = pix9->getChildren();
auto pix11 = static_cast<cocos2d::CCSprite*>(pix10->objectAtIndex(0));
pix11->setVisible(false);
pix9->addChild(pixeltabspr2);
pixeltabspr2->setScale(0.55);
pixeltabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
pixeltabspr2->setOpacity(150);
}

// Collectible tab
if (Mod::get()->getSettingValue<bool>("collectibletab-toggle"))
{
auto collectibletabspr = CCSprite::create("collectible-tab.png"_spr);
auto collectibletabspr2 = CCSprite::create("collectible-tab.png"_spr);
auto collectibletab = buildtabs->getChildByID("collectible-tab");
auto col1 = collectibletab->getChildren();
auto col2 = static_cast<cocos2d::CCNode*>(col1->objectAtIndex(0));
auto col3 = col2->getChildren();
auto col4 = static_cast<cocos2d::CCNode*>(col3->objectAtIndex(0));
auto col5 = col4->getChildren();
auto col6 = static_cast<cocos2d::CCSprite*>(col5->objectAtIndex(0));
col6->setVisible(false);
col4->addChild(collectibletabspr);
collectibletabspr->setScale(0.55);
collectibletabspr->setPosition(cocos2d::CCPoint(16, 7.75));
collectibletabspr->setOpacity(150);
auto col7 = static_cast<cocos2d::CCNode*>(col1->objectAtIndex(1));
auto col8 = col7->getChildren();
auto col9 = static_cast<cocos2d::CCNode*>(col8->objectAtIndex(0));
auto col10 = col9->getChildren();
auto col11 = static_cast<cocos2d::CCSprite*>(col10->objectAtIndex(0));
col11->setVisible(false);
col9->addChild(collectibletabspr2);
collectibletabspr2->setScale(0.55);
collectibletabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
collectibletabspr2->setOpacity(150);
}    

// Icon tab
if (Mod::get()->getSettingValue<bool>("icontab-toggle"))
{
auto icontabspr = CCSprite::create("icon-tab.png"_spr);
auto icontabspr2 = CCSprite::create("icon-tab.png"_spr);
auto icontab = buildtabs->getChildByID("icon-tab");
auto icon1 = icontab->getChildren();
auto icon2 = static_cast<cocos2d::CCNode*>(icon1->objectAtIndex(0));
auto icon3 = icon2->getChildren();
auto icon4 = static_cast<cocos2d::CCNode*>(icon3->objectAtIndex(0));
auto icon5 = icon4->getChildren();
auto icon6 = static_cast<cocos2d::CCSprite*>(icon5->objectAtIndex(0));
icon6->setVisible(false);
icon4->addChild(icontabspr);
icontabspr->setScale(0.55);
icontabspr->setPosition(cocos2d::CCPoint(16, 7.75));
icontabspr->setOpacity(150);
auto icon7 = static_cast<cocos2d::CCNode*>(icon1->objectAtIndex(1));
auto icon8 = icon7->getChildren();
auto icon9 = static_cast<cocos2d::CCNode*>(icon8->objectAtIndex(0));
auto icon10 = icon9->getChildren();
auto icon11 = static_cast<cocos2d::CCSprite*>(icon10->objectAtIndex(0));
icon11->setVisible(false);
icon9->addChild(icontabspr2);
icontabspr2->setScale(0.55);
icontabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
icontabspr2->setOpacity(150);
}

// Block tab
if (Mod::get()->getSettingValue<bool>("blocktab-toggle"))
{
auto blocktabspr = CCSprite::create("block-tab.png"_spr);
auto blocktabspr2 = CCSprite::create("block-tab.png"_spr);
auto blocktab = buildtabs->getChildByID("block-tab");
auto block1 = blocktab->getChildren();
auto block2 = static_cast<cocos2d::CCNode*>(block1->objectAtIndex(0));
auto block3 = block2->getChildren();
auto block4 = static_cast<cocos2d::CCNode*>(block3->objectAtIndex(0));
auto block5 = block4->getChildren();
auto block6 = static_cast<cocos2d::CCSprite*>(block5->objectAtIndex(0));
block6->setVisible(false);
block4->addChild(blocktabspr);
blocktabspr->setScale(0.55);
blocktabspr->setPosition(cocos2d::CCPoint(16, 7.75));
blocktabspr->setOpacity(150);
auto block7 = static_cast<cocos2d::CCNode*>(block1->objectAtIndex(1));
auto block8 = block7->getChildren();
auto block9 = static_cast<cocos2d::CCNode*>(block8->objectAtIndex(0));
auto block10 = block9->getChildren();
auto block11 = static_cast<cocos2d::CCSprite*>(block10->objectAtIndex(0));
block11->setVisible(false);
block9->addChild(blocktabspr2);
blocktabspr2->setScale(0.55);
blocktabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
blocktabspr2->setOpacity(150);
}

// Outline tab
if (Mod::get()->getSettingValue<bool>("outlinetab-toggle"))
{
auto outlinetabspr = CCSprite::create("outline-tab.png"_spr);
auto outlinetabspr2 = CCSprite::create("outline-tab.png"_spr);
auto outlinetab = buildtabs->getChildByID("outline-tab");
auto outline1 = outlinetab->getChildren();
auto outline2 = static_cast<cocos2d::CCNode*>(outline1->objectAtIndex(0));
auto outline3 = outline2->getChildren();
auto outline4 = static_cast<cocos2d::CCNode*>(outline3->objectAtIndex(0));
auto outline5 = outline4->getChildren();
auto outline6 = static_cast<cocos2d::CCSprite*>(outline5->objectAtIndex(0));
outline6->setVisible(false);
outline4->addChild(outlinetabspr);
outlinetabspr->setScale(0.55);
outlinetabspr->setPosition(cocos2d::CCPoint(16, 7.75));
outlinetabspr->setOpacity(150);
auto outline7 = static_cast<cocos2d::CCNode*>(outline1->objectAtIndex(1));
auto outline8 = outline7->getChildren();
auto outline9 = static_cast<cocos2d::CCNode*>(outline8->objectAtIndex(0));
auto outline10 = outline9->getChildren();
auto outline11 = static_cast<cocos2d::CCSprite*>(outline10->objectAtIndex(0));
outline11->setVisible(false);
outline9->addChild(outlinetabspr2);
outlinetabspr2->setScale(0.55);
outlinetabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
outlinetabspr2->setOpacity(150);
}

// Hazard tab
if (Mod::get()->getSettingValue<bool>("hazardtab-toggle"))
{
auto hazardtabspr = CCSprite::create("hazard-tab.png"_spr);
auto hazardtabspr2 = CCSprite::create("hazard-tab.png"_spr);
auto hazardtab = buildtabs->getChildByID("hazard-tab");
auto hazard1 = hazardtab->getChildren();
auto hazard2 = static_cast<cocos2d::CCNode*>(hazard1->objectAtIndex(0));
auto hazard3 = hazard2->getChildren();
auto hazard4 = static_cast<cocos2d::CCNode*>(hazard3->objectAtIndex(0));
auto hazard5 = hazard4->getChildren();
auto hazard6 = static_cast<cocos2d::CCSprite*>(hazard5->objectAtIndex(0));
hazard6->setVisible(false);
hazard4->addChild(hazardtabspr);
hazardtabspr->setScale(0.55);
hazardtabspr->setPosition(cocos2d::CCPoint(16, 7.75));
hazardtabspr->setOpacity(150);
auto hazard7 = static_cast<cocos2d::CCNode*>(hazard1->objectAtIndex(1));
auto hazard8 = hazard7->getChildren();
auto hazard9 = static_cast<cocos2d::CCNode*>(hazard8->objectAtIndex(0));
auto hazard10 = hazard9->getChildren();
auto hazard11 = static_cast<cocos2d::CCSprite*>(hazard10->objectAtIndex(0));
hazard11->setVisible(false);
hazard9->addChild(hazardtabspr2);
hazardtabspr2->setScale(0.55);
hazardtabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
hazardtabspr2->setOpacity(150);
}

// Portal tab
if (Mod::get()->getSettingValue<bool>("portaltab-toggle"))
{
auto portaltabspr = CCSprite::create("portal-tab.png"_spr);
auto portaltabspr2 = CCSprite::create("portal-tab.png"_spr);
auto portaltab = buildtabs->getChildByID("portal-tab");
auto portal1 = portaltab->getChildren();
auto portal2 = static_cast<cocos2d::CCNode*>(portal1->objectAtIndex(0));
auto portal3 = portal2->getChildren();
auto portal4 = static_cast<cocos2d::CCNode*>(portal3->objectAtIndex(0));
auto portal5 = portal4->getChildren();
auto portal6 = static_cast<cocos2d::CCSprite*>(portal5->objectAtIndex(0));
portal6->setVisible(false);
portal4->addChild(portaltabspr);
portaltabspr->setScale(0.55);
portaltabspr->setPosition(cocos2d::CCPoint(16, 7.75));
portaltabspr->setOpacity(150);
auto portal7 = static_cast<cocos2d::CCNode*>(portal1->objectAtIndex(1));
auto portal8 = portal7->getChildren();
auto portal9 = static_cast<cocos2d::CCNode*>(portal8->objectAtIndex(0));
auto portal10 = portal9->getChildren();
auto portal11 = static_cast<cocos2d::CCSprite*>(portal10->objectAtIndex(0));
portal11->setVisible(false);
portal9->addChild(portaltabspr2);
portaltabspr2->setScale(0.55);
portaltabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
portaltabspr2->setOpacity(150);
}

// Deco tab
if (Mod::get()->getSettingValue<bool>("decotab-toggle"))
{
auto decotabspr = CCSprite::create("deco-tab.png"_spr);
auto decotabspr2 = CCSprite::create("deco-tab.png"_spr);
auto decotab = buildtabs->getChildByID("deco-tab");
auto deco1 = decotab->getChildren();
auto deco2 = static_cast<cocos2d::CCNode*>(deco1->objectAtIndex(0));
auto deco3 = deco2->getChildren();
auto deco4 = static_cast<cocos2d::CCNode*>(deco3->objectAtIndex(0));
auto deco5 = deco4->getChildren();
auto deco6 = static_cast<cocos2d::CCSprite*>(deco5->objectAtIndex(0));
deco6->setVisible(false);
deco4->addChild(decotabspr);
decotabspr->setScale(0.55);
decotabspr->setPosition(cocos2d::CCPoint(16, 7.75));
decotabspr->setOpacity(150);
auto deco7 = static_cast<cocos2d::CCNode*>(deco1->objectAtIndex(1));
auto deco8 = deco7->getChildren();
auto deco9 = static_cast<cocos2d::CCNode*>(deco8->objectAtIndex(0));
auto deco10 = deco9->getChildren();
auto deco11 = static_cast<cocos2d::CCSprite*>(deco10->objectAtIndex(0));
deco11->setVisible(false);
deco9->addChild(decotabspr2);
decotabspr2->setScale(0.55);
decotabspr2->setPosition(cocos2d::CCPoint(16, 7.75));
decotabspr2->setOpacity(150);
}
//thank you claude for copy pasting that code for me i wouldve killed myself otherwise

            log::debug("shit happened");

		return true;
	}
};