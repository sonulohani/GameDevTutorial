#pragma once

#include <QOpenGLWidget>
#include <QTimer>

class MyGlWindow : public QOpenGLWidget
{
    Q_OBJECT
protected:
    void initializeGL() override;
    void paintGL() override;

private slots:
    void myUpdate();

private:
    GLuint vertexBufferID;
    QTimer myTimer;
};
