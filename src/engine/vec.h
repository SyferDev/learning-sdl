struct Vec2 {
	float x;
	float y;

	Vec2();
	Vec2( float x, float y ); 
	
	Vec2& Add      ( const Vec2& vec );
	Vec2& Subtract ( const Vec2& vec );
	Vec2& Multiply ( const Vec2& vec );
	Vec2& Divide   ( const Vec2& vec );
	
	friend Vec2& operator+ ( Vec2& vec1, const Vec2& vec2 );
	friend Vec2& operator- ( Vec2& vec1, const Vec2& vec2 );
	friend Vec2& operator* ( Vec2& vec1, const Vec2& vec2 );
	friend Vec2& operator/ ( Vec2& vec1, const Vec2& vec2 );

	Vec2& operator+=  ( const Vec2& vec );
	Vec2& operator-=  ( const Vec2& vec );
	Vec2& operator*=  ( const Vec2& vec );
	Vec2& operator/=  ( const Vec2& vec );
	
};