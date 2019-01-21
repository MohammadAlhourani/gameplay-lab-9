#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include "MyVector3.h"
#include "MyMatrix3.h"

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();

	void matrixApp(MyMatrix3 t_matrix);

private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};