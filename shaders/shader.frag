#version 450

// layout(location = 0) in vec3 frag_color;
//
// layout(location = 0) out vec4 out_color;
//
// void main() {
//     out_color = vec4(frag_color, 1.0);
// }

layout(location = 0) in vec2 frag_tex_coord;
layout(location = 0) out vec4 out_color;

layout(binding = 0) uniform sampler2D tex_sampler;

void main() {
    out_color = texture(tex_sampler, frag_tex_coord);

    // for transparency support?
    if (out_color.a < 0.1) {
        discard;
    }
}
