#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

// have to make a pair literally just for 3d tab --nwo5
// no you dont lol --ery
const std::vector<std::string> tabs {
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
        if (!nestedGreatGrandChild) return;
        nestedGreatGrandChild->setVisible(false);
        tab->addChild(spr);
        spr->setScale(.5f);
        spr->setOpacity(150);
        spr->setPosition(nestedGreatGrandChild->getPosition());
        spr->setID(fmt::format("{}"_spr, nodeID));
    };
	bool init(LevelEditorLayer* editorLayer) {	
		if (!EditorUI::init(editorLayer)) return false;
        geode::Mod* mod = Mod::get();
        for (const std::string& tabName : tabs) {
            const std::string& settingsAlias = tabName == "3d-tab" ? "threed-tab" : tabName;
            if (!mod->getSettingValue<bool>(fmt::format("{}-toggle", settingsAlias))) continue;
            auto tabNode = m_tabsMenu->getChildByID(tabName);
            if (!tabNode) continue;
            const std::string& altSuffix = mod->getSettingValue<bool>(fmt::format("{}-alt", settingsAlias)) ? "-alt" : "";
            const std::string& spriteName = fmt::format("{}{}.png"_spr, tabName, altSuffix);
            CCSprite* spr = CCSprite::create(spriteName.c_str());
            if (spr->getUserObject("geode.texture-loader/fallback")) continue;
            EditUI::setupBetterSprite(spr, tabNode->getChildByType<CCMenuItemSpriteExtra>(0)->getChildByType<CCSprite>(0), tabName);
            EditUI::setupBetterSprite(spr, tabNode->getChildByType<CCMenuItemSpriteExtra>(1)->getChildByType<CCSprite>(0), tabName);
        }
		return true;
	}
};