#include "plugin.hpp"

struct WindingTest : Module {};

struct WindingTestWidget : ModuleWidget {
	WindingTestWidget(WindingTest* module) {
		setModule(module);
        setPanel(Svg::load(asset::plugin(pluginInstance, "res/Panel.svg")));

        addChild(createWidget<StuntDonut>(this->box.size.div(2)));
	}
};


Model* modelWindingTest = createModel<WindingTest, WindingTestWidget>("WindingTest");
