#include "vec.h"

Vec2::Vec2() {
	this->x = this->y = 0;
}

Vec2::Vec2( float x, float y) {
	this->x = x;
	this->y = y;
}

Vec2& Vec2::Add( const Vec2& vec ) {
	this->x += vec.x;
	this->y += vec.y;
	
	return *this;
}

Vec2& Vec2::Subtract( const Vec2& vec ) {
	this->x -= vec.x;
	this->y -= vec.y;
	
	return *this;
}

Vec2& Vec2::Multiply(const Vec2& vec ) {
	this->x *= vec.x;
	this->y *= vec.y;
	
	return *this;
}

Vec2& Vec2::Divide(const Vec2& vec ) {
	this->x /= vec.x;
	this->y /= vec.y;
	
	return *this;
}

Vec2& operator+ ( Vec2& vec1, Vec2& vec2 ) {
	return vec1.Add( vec2 );
}

Vec2& operator- ( Vec2& vec1, Vec2& vec2 ) {
	return vec1.Subtract( vec2 );
}

Vec2& operator* ( Vec2& vec1, Vec2& vec2 ) {
	return vec1.Multiply( vec2 );
}

Vec2& operator/ ( Vec2& vec1, Vec2& vec2 ) {
	return vec1.Divide( vec2 );
}

Vec2& Vec2::operator+= ( const Vec2& vec ) {
	return this->Add( vec );
}

Vec2& Vec2::operator-= ( const Vec2& vec ) {
	return this->Subtract( vec );
}

Vec2& Vec2::operator*= ( const Vec2& vec ) {
	return this->Multiply( vec );
}

Vec2& Vec2::operator/=( const Vec2& vec ) {
	return this->Divide( vec );
}
