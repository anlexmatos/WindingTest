#include "plugin.hpp"

struct MonsterSquare : Module {};

struct MonsterSquareWidget : ModuleWidget {
	MonsterSquareWidget(MonsterSquare* module) {
		setModule(module);
        setPanel(Svg::load(asset::plugin(pluginInstance, "res/Panel.svg")));

        addChild(createWidget<StuntMonsterSquare>(this->box.size.div(2)));
	}
};


Model* modelMonsterSquare = createModel<MonsterSquare, MonsterSquareWidget>("MonsterSquare");
