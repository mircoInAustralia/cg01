#version 330 core
in vec3 position;
uniform vec3 ambient;
uniform vec3 diffuse;
uniform vec3  specular;
uniform float shininess;
uniform float alpha;

out vec4 finalcolor;

void main(void)
{
    vec3 first = 1.0 * ambient;
    vec3 second = 0.5 * diffuse;
    vec3 r_a = vec3(0.0, 0.0, 0.0);
    for (int i = 0; i < shininess; i++){
        r_a = r_a * r_a;
    }
    vec3 result = alpha * (first + second + (0.75 * specular * r_a));

    finalcolor = vec4(result , 1.0);
}

