#include "ofApp.h"
<<<<<<< HEAD
#include "ofAppGLFWWindow.h"
=======
>>>>>>> upstream/master

//--------------------------------------------------------------
int main()
{
<<<<<<< HEAD
    ofPtr<ofAppGLFWWindow> win = ofPtr<ofAppGLFWWindow>(new ofAppGLFWWindow());
    win->setStencilBits(8);
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(win, 1440, 1024, OF_WINDOW);
	ofRunApp(new ofApp()); // start the app
=======
  ofGLFWWindowSettings settings;
  settings.stencilBits = 8;

  auto window = ofCreateWindow(settings);
  auto app = make_shared<ofApp>();
  ofRunApp(window, app);

  return ofRunMainLoop();
>>>>>>> upstream/master
}
