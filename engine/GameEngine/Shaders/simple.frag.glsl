#version 410

in vec4 Color;
out vec4 fragmentColor;

void main() {
    fragmentColor = Color;
//    fragmentColor = vec4(1,0,0,1);
}
