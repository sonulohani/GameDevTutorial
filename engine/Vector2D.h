#pragma once

#include "engine_global.h"

namespace Math {

struct ENGINE_EXPORT Vector2D
{
    float x, y;

    Vector2D(float x = {}, float y = {}) : x(x), y(y)
    {
    }
};

Vector2D ENGINE_EXPORT operator+(const Vector2D &left, const Vector2D &right);
Vector2D ENGINE_EXPORT operator*(float scalar, const Vector2D &vector);
Vector2D ENGINE_EXPORT operator*(const Vector2D &vector, float scalar);
bool ENGINE_EXPORT operator==(const Vector2D &left, const Vector2D &right);

} // namespace Math
