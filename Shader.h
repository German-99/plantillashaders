#pragma once

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>
#include <fstream>

#include <string>
#include <vector>

using namespace std;

class Shader {
public:
	Shader(const char* rutaVertexShader, const char* rutaFragmentShader);
	GLuint getID();
private:
	GLuint shaderID;
};