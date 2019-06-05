//
// Copyright (c) 2019 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//


#include "ofMain.h"
#include "ofAppNoWindow.h"
#include "ofxUnitTests.h"
#include "ofxAddon.h"


class ofApp: public ofxUnitTestsApp
{
    void run() override
    {
        ofxTestEq(true, true, "First Test.");
    }

};


int main()
{
    ofInit();
    auto window = make_shared<ofAppNoWindow>();
    auto app = make_shared<ofApp>();
    ofRunApp(window, app);
    return ofRunMainLoop();
}
