#pragma once
#include <rack.hpp>


using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin* pluginInstance;

// Declare each Model, defined in each module source file
// extern Model* modelMyModule;
extern Model* modelWindingTest;

struct StuntDonut : Widget {
    void drawLayer(const DrawArgs &args, int layer) override {
        if (layer == 1) {
            nvgBeginPath(args.vg);
            nvgCircle(args.vg, 0, 0, 10);
            nvgPathWinding(args.vg, NVG_HOLE);
            nvgCircle(args.vg, 0, 0, 5);
            nvgPathWinding(args.vg, NVG_SOLID);
            nvgFillColor(args.vg, SCHEME_DARK_GRAY);
            nvgFill(args.vg);
        }

        Widget::drawLayer(args, layer);
    }
};