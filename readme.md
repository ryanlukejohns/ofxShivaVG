# ofxShivaVG


##About

ofxShivaVG is a 2d-renderer for openFrameworks based on the ShivaVG OpenVG implementation. It provides improved rendering quality of 2d paths/curves, polylines and shapes, with optional line capping/joining.

Everything is rendered through OpenGL wich makes it much more performant than other cpu based 2d graphics libraries (Cairo, Quartz etc). It also makes it easy to render 2d and 3d graphics interchangeably.


##Usage

* Clone into openFrameworks/addons
* Add src & lib folders to your project


###Example

First, you need to set `stencilBits` settings value from `main.cpp` to 8, otherwise shapes will be rendered incorrectly:

```cpp
#include "ofApp.h"

int main()
{
  ofGLFWWindowSettings settings;
  settings.stencilBits = 8;

  auto window = ofCreateWindow(settings);
  auto app = make_shared<ofApp>();
  ofRunApp(window, app);

  return ofRunMainLoop();
}
```

Then include a `ofxShivaVGRenderer.h` header in `ofApp.h`:

```cpp
#include "ofMain.h"
#include "ofxShivaVGRenderer.h"
```

And switch to the ofxShivaVGRenderer in your `ofApp::setup` method of `ofApp.cpp`:

```cpp
void ofApp::setup()
{
    ofSetCurrentRenderer(shared_ptr<ofxShivaVGRenderer>(new ofxShivaVGRenderer));
}
```

Now all your ofPath's and ofPolylines should look delicious!

See examples for more details.


##Screenshots

Default oF renderer:

![Imgur](http://i.imgur.com/hMSeaZu.png)

ofxShivaVGRenderer:

![Imgur](http://i.imgur.com/hsh4HzM.png)


##Roadmap

* Implement arc drawing
* Make ofPath subclass to add cap / join props pr. path
* Support gradient fills



