#ifndef NOISE_COMMON_H
#define NOISE_COMMON_H

#include <string>

// JONATHAN EDIT
// So it compiles, define the vec types
#include "vec4.h"
#include "vec3.h"
#include "vec2.h"

double Perlin2D( const vec2& P );
double Perlin3D( const vec3& P );
double Perlin4D( const vec4& P );
vec3 Perlin2DDeriv( const vec2& P );  // returns vec3( value, xderiv, yderiv )
vec4 Perlin3DDeriv( const vec3& P );  // returns vec4( value, xderiv, yderiv, zderiv )
double Hermite2D( const vec2& P );
double Hermite3D( const vec3& P );
vec4 Hermite3DDeriv( const vec3& P );
vec3 Hermite2DDeriv( const vec2& P );

// Same as above but direct access without vecX arguments.
double Perlin2D(const double x, const double y);
double Perlin3D(const double x, const double y, const double z);
double Perlin4D(const double x, const double y, const double z, const double w);
void Perlin2DDeriv(const double x, const double y, double* value,
                   double* xderiv, double* yderiv);
void Perlin3DDeriv(const double x, const double y, const double z,
                   double* value, double* xderiv, double* yderiv,
                   double* zderiv);
double Hermite2D(const double x, const double y);
double Hermite3D(const double x, const double y, const double z);
void Hermite3DDeriv(const double x, const double y, const double z,
                    double* value, double* xderiv, double* yderiv,
                    double* zderiv);
void Hermite2DDeriv(const double x, const double y, double* value,
                    double* xderiv, double* yderiv);

#endif
