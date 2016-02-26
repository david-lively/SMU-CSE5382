#version 150

uniform mat4 World;
uniform mat4 View;
uniform mat4 Projection;

in vec3 Pos;

out vec4 Color;

void main()
{
    vec4 position = vec4(Pos,1);
    
    position = Projection * View * World * position;    
    
    Color = vec4(1);
    gl_Position = position;
}
