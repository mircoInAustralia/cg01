#version 330 core
in vec3 lNormal;
in vec3 nNormal;
in vec3 rNormal;
in vec3 aNormal;
uniform vec3 ambient;
uniform vec3 diffuse;
uniform vec3  specular;
uniform float shininess;
uniform vec3 lightSource;
uniform vec3 camera;

out vec4 finalcolor;

void main(void)
{
    vec3 first = 1.0 * ambient;
    vec3 second = 1.0 * diffuse * dot(lNormal, nNormal);
   vec3 third = 1.0 * specular * max(0,pow(dot(rNormal, aNormal),shininess));
    vec3 result = first + second + third;

    finalcolor = vec4(result , 1.0);
}

