#version 410 core
uniform float GameTimeTotalSeconds;
uniform int EvenOdd;


in vec4 vPosition;
in vec4 vColor;
out vec4 fragmentColor;

void main() {

    vec4 color = vec4(vPosition.xyz, 1);
    
    
    fragmentColor = color;

}