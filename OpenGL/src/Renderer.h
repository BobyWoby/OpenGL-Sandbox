#pragma once
#include <GL/glew.h>



void GLAPIENTRY ErrorMessage(GLenum source,
    GLenum type,
    GLuint id,
    GLenum severity,
    GLsizei length,
    const GLchar* message,
    const void* userParam);