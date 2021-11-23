#pragma once
#include <rack.hpp>


using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin* pluginInstance;

// Declare each Model, defined in each module source file
// extern Model* modelMyModule;
extern Model* modelWindingTest;
extern Model* modelMonsterSquare;
extern Model* modelMonsterCircle;

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

struct StuntMonsterCircle : Widget {
    void drawLayer(const DrawArgs &args, int layer) override {
        if (layer == 1) {
            for (int i = 100; i > 15; i--) {
                nvgBeginPath(args.vg);
                nvgCircle(args.vg, 0, 0, i);
                nvgPathWinding(args.vg, NVG_HOLE);
                nvgCircle(args.vg, 0, 0, i - 15);
                nvgPathWinding(args.vg, NVG_SOLID);
                nvgFillColor(args.vg, SCHEME_DARK_GRAY);
                nvgFill(args.vg);
            }
        }

        Widget::drawLayer(args, layer);
    }
};

struct StuntMonsterSquare : Widget {
    void drawLayer(const DrawArgs &args, int layer) override {
        if (layer == 1) {
            for (int i = 100; i > 15; i--) {
                nvgBeginPath(args.vg);
                nvgRect(args.vg, -i, -i, i * 2, i * 2);
                nvgPathWinding(args.vg, NVG_HOLE);
                int j = i - 15;
                nvgRect(args.vg, -j, -j, j * 2, j * 2);
                nvgPathWinding(args.vg, NVG_SOLID);
                nvgFillColor(args.vg, SCHEME_DARK_GRAY);
                nvgFill(args.vg);
            }
        }

        Widget::drawLayer(args, layer);
    }
};
