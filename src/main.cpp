#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

#define mod Mod::get();

std::vector<std::string> tabs { // have to make a pair literally just for 3d tab
    "block-tab", "outline-tab", "slope-tab",
    "hazard-tab", "3d-tab", "portal-tab",
    "monster-tab", "pixel-tab", "collectible-tab",
    "icon-tab", "deco-tab", "sawblade-tab",
    "trigger-tab", "custom-tab"
};

class $modify(EditUI, EditorUI) {
    void setupBetterSprite(CCSprite* spr, CCSprite* tab, const std::string& nodeID) {
        if (!spr || !tab || tab->getTag() != 1) return;
        CCSprite* nestedGreatGrandChild = tab->getChildByType<CCSprite>(0);
        if (!nestedGreatGrandChild || nestedGreatGrandChild->getTag() != 1) return;
        nestedGreatGrandChild->setVisible(false);
        tab->addChild(spr);
        spr->setScale(nestedGreatGrandChild->getScale());
        spr->setPosition(nestedGreatGrandChild->getPosition());
        spr->setOpacity(nestedGreatGrandChild->getOpacity());
        spr->setID(fmt::format("{}"_spr, nodeID));
    };
	bool init(LevelEditorLayer* editorLayer) {	
		if (!EditorUI::init(editorLayer)) return false;
        for (tab : tabs) {
            const std::string& settingsAlias = tab == "3d-tab" ? "threed-tab" : tab
            if (!mod->getSettingValue<bool>(fmt::format("{}-toggle", settingsAlias)) continue;
            auto tabNode = m_tabsMenu->getChildByID(tab);
            if (!tabNode) continue;
            auto spr = CCSprite::create(mod->getSettingValue<bool>(fmt::format("{}-alt", settingsAlias)) ?
                fmt::format("{}-alt.png"_spr, tab).c_str() : fmt::format("{}.png"_spr, tab).c_str());
            EditUI::setupBetterSprite(spr, tabNode->getChildByType<CCMenuItemSpriteExtra>(0)->getChildByType<CCSprite>(0), tab);
            EditUI::setupBetterSprite(spr, tabNode->getChildByType<CCMenuItemSpriteExtra>(1)->getChildByType<CCSprite>(0), tab);
        }
        
		return true;
	}
};