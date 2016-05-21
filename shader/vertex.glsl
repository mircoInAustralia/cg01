#version 330 core

layout(location = 0) in vec3 position;
layout(location = 1) in vec3 normal;
layout(location = 2) in vec2 texCoords;

uniform mat4 someMatrix;
uniform vec3 lightPosition;

out vec3 nNormal;
out vec3 lNormal;
out vec3 rNormal;
out vec3 aNormal;

void main(void)
{
    gl_Position = someMatrix * vec4(position, 1.0);
    nNormal = normal;//normalize(gl_Position.xyz * normal);
    lNormal = normalize(lightPosition - gl_Position.xyz);
    rNormal = (lNormal * nNormal) / nNormal;
    aNormal = gl_Position.xyz;
}

