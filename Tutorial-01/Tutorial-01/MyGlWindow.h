#pragma once

#include <QOpenGLWidget>

class MyGlWindow :
    public QOpenGLWidget
{
protected:
    void initializeGL() override;
    void paintGL() override;

private:
    GLuint vertexBufferID;
};

