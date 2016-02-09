#version 150

#define PI (3.141592f)
#define TO_RADIANS(degrees) (degrees * PI / 180.f)

/// uniforms - same value for all vertices
uniform float GameTimeTotalSeconds;
uniform float TimeScale = 1;
uniform vec2 WindowSize;

in vec3 Pos;

out vec4 Color;

vec4 rotate(vec4 pos, float theta)
{
    float len = length(pos.xy);
    float phi = atan(pos.y, pos.x);
    
    phi += theta;
    
    pos.x = cos(phi) * len;
    pos.y = sin(phi) * len;
    
    return pos;
}


void main()
{
    vec4 position = vec4(Pos,1);
    
    float theta = fract(GameTimeTotalSeconds * TimeScale) * 360;

    /// rotate about origin
    position = rotate(position, TO_RADIANS(theta));
    
    Color = vec4(position.xyz, 1);
    
    gl_Position = position;
}
