#ifndef CHESS_UTILS_INL
#define CHESS_UTILS_INL

template <typename T>
inline Vector<T>::Vector() :
x(0),
y(0)
{

}

template <typename T>
inline Vector<T>::Vector(T X, T Y) :
x(X),
y(Y)
{

}

template <typename T>
template <typename U>
inline Vector<T>::Vector(const Vector<U>& vector) :
x(static_cast<T>(vector.x)),
y(static_cast<T>(vector.y))
{
}

template <typename T>
inline Vector<T> operator -(const Vector<T>& right)
{
    return Vector<T>(-right.x, -right.y);
}

template <typename T>
inline Vector<T>& operator +=(Vector<T>& left, const Vector<T>& right)
{
    left.x += right.x;
    left.y += right.y;

    return left;
}

template <typename T>
inline Vector<T>& operator -=(Vector<T>& left, const Vector<T>& right)
{
    left.x -= right.x;
    left.y -= right.y;

    return left;
}

template <typename T>
inline Vector<T> operator +(const Vector<T>& left, const Vector<T>& right)
{
    return Vector<T>(left.x + right.x, left.y + right.y);
}

template <typename T>
inline Vector<T> operator -(const Vector<T>& left, const Vector<T>& right)
{
    return Vector<T>(left.x - right.x, left.y - right.y);
}

template <typename T>
inline Vector<T> operator *(const Vector<T>& left, T right)
{
    return Vector<T>(left.x * right, left.y * right);
}

template <typename T>
inline Vector<T> operator *(T left, const Vector<T>& right)
{
    return Vector<T>(right.x * left, right.y * left);
}

template <typename T>
inline Vector<T>& operator *=(Vector<T>& left, T right)
{
    left.x *= right;
    left.y *= right;

    return left;
}

template <typename T>
inline Vector<T> operator /(const Vector<T>& left, T right)
{
    return Vector<T>(left.x / right, left.y / right);
}

template <typename T>
inline Vector<T>& operator /=(Vector<T>& left, T right)
{
    left.x /= right;
    left.y /= right;

    return left;
}

template <typename T>
inline bool operator ==(const Vector<T>& left, const Vector<T>& right)
{
    return (left.x == right.x) && (left.y == right.y);
}

template <typename T>
inline bool operator !=(const Vector<T>& left, const Vector<T>& right)
{
    return (left.x != right.x) || (left.y != right.y);
}

#endif
