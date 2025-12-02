#pragma once

//
namespace chess {
template <typename T>
class Vector
{
public:

	Vector();

	Vector(T X, T Y);

	template <typename U>
	explicit Vector(const Vector<U>& vector);

	T x, y;
};

template <typename T>
Vector<T> operator -(const Vector<T>& right);

template <typename T>
Vector<T>& operator +=(Vector<T>& left, const Vector<T>& right);

template <typename T>
Vector<T>& operator -=(Vector<T>& left, const Vector<T>& right);

template <typename T>
Vector<T> operator +(const Vector<T>& left, const Vector<T>& right);

template <typename T>
Vector<T> operator -(const Vector<T>& left, const Vector<T>& right);

template <typename T>
Vector<T> operator *(const Vector<T>& left, T right);

template <typename T>
Vector<T> operator *(T left, const Vector<T>& right);

template <typename T>
Vector<T>& operator *=(Vector<T>& left, T right);

template <typename T>
Vector<T> operator /(const Vector<T>& left, T right);

template <typename T>
Vector<T>& operator /=(Vector<T>& left, T right);

template <typename T>
bool operator ==(const Vector<T>& left, const Vector<T>& right);

template <typename T>
bool operator !=(const Vector<T>& left, const Vector<T>& right);

#include "Chess/Utils.inl"

// Define the most common types
typedef Vector<unsigned int> VectorU;
typedef Vector<int>          VectorI;
typedef Vector<float>        VectorF;
}

