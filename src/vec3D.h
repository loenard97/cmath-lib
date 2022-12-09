typedef struct vec3D Vec3D;

void printVec3D(Vec3D* vec1);
double len(Vec3D* vec1);
void mul(Vec3D* vec1, double factor);
void norm(Vec3D* vec1);
void add(Vec3D* vec1, Vec3D* vec2);
void sub(Vec3D* vec1, Vec3D* vec2);
void sprod(Vec3D* vec1, Vec3D* vec2);
void cprod(Vec3D* vec1, Vec3D* vec2);