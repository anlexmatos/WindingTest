#include "plugin.hpp"

struct MonsterCircle : Module {};

struct MonsterCircleWidget : ModuleWidget {
	MonsterCircleWidget(MonsterCircle* module) {
		setModule(module);
        setPanel(Svg::load(asset::plugin(pluginInstance, "res/Panel.svg")));

        addChild(createWidget<StuntMonsterCircle>(this->box.size.div(2)));
	}
};


Model* modelMonsterCircle = createModel<MonsterCircle, MonsterCircleWidget>("MonsterCircle");
