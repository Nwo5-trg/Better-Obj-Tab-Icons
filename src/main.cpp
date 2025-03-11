#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

auto mod = Mod::get();

class $modify(EditUI, EditorUI) {

	bool init(LevelEditorLayer* editorLayer) {	
		if (!EditorUI::init(editorLayer)) return false;

        std::vector<std::pair<std::string, std::string>> tabs { // have to make a pair literally just for 3d tab
            {"block-tab", "block-tab"}, {"outline-tab", "outline-tab"}, {"slope-tab", "slope-tab"},
            {"hazard-tab", "hazard-tab"}, {"3d-tab", "threed-tab"}, {"portal-tab", "portal-tab"},
            {"monster-tab", "monster-tab"}, {"pixel-tab", "pixel-tab"}, {"collectible-tab", "collectible-tab"},
            {"icon-tab", "icon-tab"}, {"deco-tab", "deco-tab"}, {"sawblade-tab", "sawblade-tab"},
            {"trigger-tab", "trigger-tab"}, {"custom-tab", "custom-tab"}
        };

        auto setupSprite = [] (CCSprite* spr, CCSprite* tab) {
            if (!spr || !tab) return;
            tab->addChild(spr);
            tab->getChildByType<CCSprite>(0)->setVisible(false);
            spr->setScale (0.55);
            spr->setPosition(ccp(16, 7.75));
            spr->setOpacity(150);
        };

        for (int i = 0; i < m_tabsMenu->getChildren()->count(); i++) {
            if (!mod->getSettingValue<bool>(std::string(tabs[i].second) + "-toggle")) continue;
            if (auto tab = m_tabsMenu->getChildByType<CCNode>(i)) {
                auto spr = CCSprite::create(mod->getSettingValue<bool>(std::string(tabs[i].second) + "-alt") ? 
                ("nwo5.better_object_tab_icons/" + tabs[i].first + "-alt.png").c_str() : 
                ("nwo5.better_object_tab_icons/" + tabs[i].first + ".png").c_str());
                setupSprite(spr, tab->getChildByType<CCNode>(0)->getChildByType<CCSprite>(0));
                setupSprite(spr, tab->getChildByType<CCNode>(1)->getChildByType<CCSprite>(0));
            }
        }
        
		return true;
	}
};