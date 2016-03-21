#include "GeometryProvider.h"

#include <vector>

using namespace std;

GeometryProvider::~GeometryProvider()
{
}

void GeometryProvider::Icosahedron(std::vector<Vector3>& vertices, std::vector<GLushort>& indices)
{
	float X = 0.525731112119133606f;
	float Z = 0.850650808352039932f;

	vector<Vector3> icosahedronVerts =
	{
		Vector3(-X, 0.f, Z),
		Vector3(X, 0.f, Z),
		Vector3(-X, 0.f, -Z),
		Vector3(X, 0.f, -Z),
		Vector3(0.f, Z, X),
		Vector3(0.f, Z, -X),
		Vector3(0.f, -Z, X),
		Vector3(0.f, -Z, -X),
		Vector3(Z, X, 0.f),
		Vector3(-Z, X, 0.f),
		Vector3(Z, -X, 0.f),
		Vector3(-Z, -X, 0.f)
	};

	vertices.insert(end(vertices), begin(icosahedronVerts), end(icosahedronVerts));

	vector<GLushort> icosahedronIndices =
	{
		0, 4, 1,
		0, 9, 4,
		9, 5, 4,
		4, 5, 8,
		4, 8, 1,
		8, 10, 1,
		8, 3, 10,
		5, 3, 8,
		5, 2, 3,
		2, 7, 3,
		7, 10, 3,
		7, 6, 10,
		7, 11, 6,
		11, 0, 6,
		0, 1, 6,
		6, 1, 10,
		9, 0, 11,
		9, 11, 2,
		9, 2, 5,
		7, 2, 11
	};

	indices.insert(end(indices), begin(icosahedronIndices), end(icosahedronIndices));
}

