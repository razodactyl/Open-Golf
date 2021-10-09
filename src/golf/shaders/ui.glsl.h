#pragma once
/*
    #version:1# (machine generated, don't edit!)

    Generated by sokol-shdc (https://github.com/floooh/sokol-tools)

    Cmdline: sokol-shdc --input data/shaders/ui.glsl --output src/golf/shaders/ui.glsl.h --slang glsl330:glsl300es

    Overview:

        Shader program 'ui':
            Get shader desc: ui_shader_desc(sg_query_backend());
            Vertex shader: ui_vs
                Attribute slots:
                    ATTR_ui_vs_position = 0
                    ATTR_ui_vs_texture_coord = 1
                Uniform block 'ui_vs_params':
                    C struct: ui_vs_params_t
                    Bind slot: SLOT_ui_vs_params = 0
            Fragment shader: ui_fs
                Uniform block 'ui_fs_params':
                    C struct: ui_fs_params_t
                    Bind slot: SLOT_ui_fs_params = 0
                Image 'ui_texture':
                    Type: SG_IMAGETYPE_2D
                    Component Type: SG_SAMPLERTYPE_FLOAT
                    Bind slot: SLOT_ui_texture = 0


    Shader descriptor structs:

        sg_shader ui = sg_make_shader(ui_shader_desc(sg_query_backend()));

    Vertex attribute locations for vertex shader 'ui_vs':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_ui_vs_position] = { ... },
                    [ATTR_ui_vs_texture_coord] = { ... },
                },
            },
            ...});

    Image bind slots, use as index in sg_bindings.vs_images[] or .fs_images[]

        SLOT_ui_texture = 0;

    Bind slot and C-struct for uniform block 'ui_vs_params':

        ui_vs_params_t ui_vs_params = {
            .mvp_mat = ...;
        };
        sg_apply_uniforms(SG_SHADERSTAGE_[VS|FS], SLOT_ui_vs_params, &SG_RANGE(ui_vs_params));

    Bind slot and C-struct for uniform block 'ui_fs_params':

        ui_fs_params_t ui_fs_params = {
            .color = ...;
            .tex_x = ...;
            .tex_y = ...;
            .tex_dx = ...;
            .tex_dy = ...;
            .is_font = ...;
        };
        sg_apply_uniforms(SG_SHADERSTAGE_[VS|FS], SLOT_ui_fs_params, &SG_RANGE(ui_fs_params));

*/
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#if !defined(SOKOL_SHDC_ALIGN)
  #if defined(_MSC_VER)
    #define SOKOL_SHDC_ALIGN(a) __declspec(align(a))
  #else
    #define SOKOL_SHDC_ALIGN(a) __attribute__((aligned(a)))
  #endif
#endif
#define ATTR_ui_vs_position (0)
#define ATTR_ui_vs_texture_coord (1)
#define SLOT_ui_texture (0)
#define SLOT_ui_vs_params (0)
#pragma pack(push,1)
SOKOL_SHDC_ALIGN(16) typedef struct ui_vs_params_t {
    mat4 mvp_mat;
} ui_vs_params_t;
#pragma pack(pop)
#define SLOT_ui_fs_params (0)
#pragma pack(push,1)
SOKOL_SHDC_ALIGN(16) typedef struct ui_fs_params_t {
    vec4 color;
    float tex_x;
    float tex_y;
    float tex_dx;
    float tex_dy;
    float is_font;
    uint8_t _pad_36[12];
} ui_fs_params_t;
#pragma pack(pop)
/*
    #version 330
    
    uniform vec4 ui_vs_params[4];
    out vec2 frag_texture_coord;
    layout(location = 1) in vec2 texture_coord;
    layout(location = 0) in vec3 position;
    
    void main()
    {
        frag_texture_coord = texture_coord;
        gl_Position = mat4(ui_vs_params[0], ui_vs_params[1], ui_vs_params[2], ui_vs_params[3]) * vec4(position, 1.0);
    }
    
*/
static const char ui_vs_source_glsl330[329] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x75,0x69,0x5f,0x76,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x34,0x5d,0x3b,0x0a,0x6f,0x75,0x74,0x20,
    0x76,0x65,0x63,0x32,0x20,0x66,0x72,0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,
    0x65,0x5f,0x63,0x6f,0x6f,0x72,0x64,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,
    0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x31,0x29,0x20,0x69,0x6e,
    0x20,0x76,0x65,0x63,0x32,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,0x6f,
    0x6f,0x72,0x64,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,
    0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,0x63,
    0x33,0x20,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x66,
    0x72,0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,0x6f,0x6f,0x72,
    0x64,0x20,0x3d,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,0x6f,0x6f,0x72,
    0x64,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,
    0x6f,0x6e,0x20,0x3d,0x20,0x6d,0x61,0x74,0x34,0x28,0x75,0x69,0x5f,0x76,0x73,0x5f,
    0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2c,0x20,0x75,0x69,0x5f,0x76,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2c,0x20,0x75,0x69,0x5f,0x76,
    0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2c,0x20,0x75,0x69,0x5f,
    0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,0x5d,0x29,0x20,0x2a,0x20,
    0x76,0x65,0x63,0x34,0x28,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2c,0x20,0x31,
    0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 330
    
    uniform vec4 ui_fs_params[3];
    uniform sampler2D ui_texture;
    
    in vec2 frag_texture_coord;
    layout(location = 0) out vec4 g_frag_color;
    
    void main()
    {
        vec2 _58 = vec2(ui_fs_params[1].x, ui_fs_params[1].y) + (frag_texture_coord * vec2(ui_fs_params[1].z, ui_fs_params[1].w));
        vec2 _110 = _58;
        _110.x = _58.x / float(textureSize(ui_texture, 0).x);
        vec2 _113 = _110;
        _113.y = _58.y / float(textureSize(ui_texture, 0).y);
        g_frag_color = texture(ui_texture, _113);
        float _84 = 1.0 - ui_fs_params[2].x;
        g_frag_color.w = (ui_fs_params[2].x * g_frag_color.x) + (_84 * g_frag_color.w);
        vec3 _105 = (g_frag_color.xyz * _84) + (ui_fs_params[0].xyz * ui_fs_params[2].x);
        g_frag_color = vec4(_105.x, _105.y, _105.z, g_frag_color.w);
    }
    
*/
static const char ui_fs_source_glsl330[774] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x75,0x69,0x5f,0x66,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,0x5d,0x3b,0x0a,0x75,0x6e,0x69,0x66,
    0x6f,0x72,0x6d,0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x32,0x44,0x20,0x75,0x69,
    0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x3b,0x0a,0x0a,0x69,0x6e,0x20,0x76,0x65,
    0x63,0x32,0x20,0x66,0x72,0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,
    0x63,0x6f,0x6f,0x72,0x64,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,
    0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x6f,0x75,0x74,0x20,
    0x76,0x65,0x63,0x34,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,
    0x72,0x3b,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,
    0x7b,0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x32,0x20,0x5f,0x35,0x38,0x20,0x3d,
    0x20,0x76,0x65,0x63,0x32,0x28,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,
    0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x78,0x2c,0x20,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,
    0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x79,0x29,0x20,0x2b,0x20,0x28,0x66,
    0x72,0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,0x6f,0x6f,0x72,
    0x64,0x20,0x2a,0x20,0x76,0x65,0x63,0x32,0x28,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,
    0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x7a,0x2c,0x20,0x75,0x69,0x5f,0x66,
    0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x77,0x29,0x29,0x3b,
    0x0a,0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x32,0x20,0x5f,0x31,0x31,0x30,0x20,0x3d,
    0x20,0x5f,0x35,0x38,0x3b,0x0a,0x20,0x20,0x20,0x20,0x5f,0x31,0x31,0x30,0x2e,0x78,
    0x20,0x3d,0x20,0x5f,0x35,0x38,0x2e,0x78,0x20,0x2f,0x20,0x66,0x6c,0x6f,0x61,0x74,
    0x28,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x53,0x69,0x7a,0x65,0x28,0x75,0x69,0x5f,
    0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x2c,0x20,0x30,0x29,0x2e,0x78,0x29,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x76,0x65,0x63,0x32,0x20,0x5f,0x31,0x31,0x33,0x20,0x3d,0x20,
    0x5f,0x31,0x31,0x30,0x3b,0x0a,0x20,0x20,0x20,0x20,0x5f,0x31,0x31,0x33,0x2e,0x79,
    0x20,0x3d,0x20,0x5f,0x35,0x38,0x2e,0x79,0x20,0x2f,0x20,0x66,0x6c,0x6f,0x61,0x74,
    0x28,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x53,0x69,0x7a,0x65,0x28,0x75,0x69,0x5f,
    0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x2c,0x20,0x30,0x29,0x2e,0x79,0x29,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,
    0x20,0x3d,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x28,0x75,0x69,0x5f,0x74,0x65,
    0x78,0x74,0x75,0x72,0x65,0x2c,0x20,0x5f,0x31,0x31,0x33,0x29,0x3b,0x0a,0x20,0x20,
    0x20,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x5f,0x38,0x34,0x20,0x3d,0x20,0x31,0x2e,
    0x30,0x20,0x2d,0x20,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,
    0x5b,0x32,0x5d,0x2e,0x78,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x5f,0x66,0x72,0x61,
    0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x77,0x20,0x3d,0x20,0x28,0x75,0x69,0x5f,
    0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2e,0x78,0x20,0x2a,
    0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x78,0x29,
    0x20,0x2b,0x20,0x28,0x5f,0x38,0x34,0x20,0x2a,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,
    0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x77,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x76,
    0x65,0x63,0x33,0x20,0x5f,0x31,0x30,0x35,0x20,0x3d,0x20,0x28,0x67,0x5f,0x66,0x72,
    0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x78,0x79,0x7a,0x20,0x2a,0x20,0x5f,
    0x38,0x34,0x29,0x20,0x2b,0x20,0x28,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,
    0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2e,0x78,0x79,0x7a,0x20,0x2a,0x20,0x75,0x69,0x5f,
    0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2e,0x78,0x29,0x3b,
    0x0a,0x20,0x20,0x20,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,
    0x72,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,0x28,0x5f,0x31,0x30,0x35,0x2e,0x78,0x2c,
    0x20,0x5f,0x31,0x30,0x35,0x2e,0x79,0x2c,0x20,0x5f,0x31,0x30,0x35,0x2e,0x7a,0x2c,
    0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x77,0x29,
    0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 300 es
    
    uniform vec4 ui_vs_params[4];
    out vec2 frag_texture_coord;
    layout(location = 1) in vec2 texture_coord;
    layout(location = 0) in vec3 position;
    
    void main()
    {
        frag_texture_coord = texture_coord;
        gl_Position = mat4(ui_vs_params[0], ui_vs_params[1], ui_vs_params[2], ui_vs_params[3]) * vec4(position, 1.0);
    }
    
*/
static const char ui_vs_source_glsl300es[332] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x30,0x30,0x20,0x65,0x73,0x0a,
    0x0a,0x75,0x6e,0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x75,0x69,
    0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x34,0x5d,0x3b,0x0a,0x6f,
    0x75,0x74,0x20,0x76,0x65,0x63,0x32,0x20,0x66,0x72,0x61,0x67,0x5f,0x74,0x65,0x78,
    0x74,0x75,0x72,0x65,0x5f,0x63,0x6f,0x6f,0x72,0x64,0x3b,0x0a,0x6c,0x61,0x79,0x6f,
    0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x31,0x29,
    0x20,0x69,0x6e,0x20,0x76,0x65,0x63,0x32,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,
    0x5f,0x63,0x6f,0x6f,0x72,0x64,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,
    0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x69,0x6e,0x20,
    0x76,0x65,0x63,0x33,0x20,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x0a,
    0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,
    0x20,0x20,0x66,0x72,0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,
    0x6f,0x6f,0x72,0x64,0x20,0x3d,0x20,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,
    0x6f,0x6f,0x72,0x64,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,
    0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x6d,0x61,0x74,0x34,0x28,0x75,0x69,0x5f,
    0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2c,0x20,0x75,0x69,
    0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2c,0x20,0x75,
    0x69,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2c,0x20,
    0x75,0x69,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,0x5d,0x29,
    0x20,0x2a,0x20,0x76,0x65,0x63,0x34,0x28,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,
    0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 300 es
    precision mediump float;
    precision highp int;
    
    uniform highp vec4 ui_fs_params[3];
    uniform highp sampler2D ui_texture;
    
    in highp vec2 frag_texture_coord;
    layout(location = 0) out highp vec4 g_frag_color;
    
    void main()
    {
        highp vec2 _58 = vec2(ui_fs_params[1].x, ui_fs_params[1].y) + (frag_texture_coord * vec2(ui_fs_params[1].z, ui_fs_params[1].w));
        highp vec2 _110 = _58;
        _110.x = _58.x / float(textureSize(ui_texture, 0).x);
        highp vec2 _113 = _110;
        _113.y = _58.y / float(textureSize(ui_texture, 0).y);
        g_frag_color = texture(ui_texture, _113);
        highp float _84 = 1.0 - ui_fs_params[2].x;
        g_frag_color.w = (ui_fs_params[2].x * g_frag_color.x) + (_84 * g_frag_color.w);
        highp vec3 _105 = (g_frag_color.xyz * _84) + (ui_fs_params[0].xyz * ui_fs_params[2].x);
        g_frag_color = vec4(_105.x, _105.y, _105.z, g_frag_color.w);
    }
    
*/
static const char ui_fs_source_glsl300es[877] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x30,0x30,0x20,0x65,0x73,0x0a,
    0x70,0x72,0x65,0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,0x6d,0x65,0x64,0x69,0x75,0x6d,
    0x70,0x20,0x66,0x6c,0x6f,0x61,0x74,0x3b,0x0a,0x70,0x72,0x65,0x63,0x69,0x73,0x69,
    0x6f,0x6e,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x69,0x6e,0x74,0x3b,0x0a,0x0a,0x75,
    0x6e,0x69,0x66,0x6f,0x72,0x6d,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,
    0x34,0x20,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,
    0x5d,0x3b,0x0a,0x75,0x6e,0x69,0x66,0x6f,0x72,0x6d,0x20,0x68,0x69,0x67,0x68,0x70,
    0x20,0x73,0x61,0x6d,0x70,0x6c,0x65,0x72,0x32,0x44,0x20,0x75,0x69,0x5f,0x74,0x65,
    0x78,0x74,0x75,0x72,0x65,0x3b,0x0a,0x0a,0x69,0x6e,0x20,0x68,0x69,0x67,0x68,0x70,
    0x20,0x76,0x65,0x63,0x32,0x20,0x66,0x72,0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,
    0x72,0x65,0x5f,0x63,0x6f,0x6f,0x72,0x64,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,
    0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x6f,
    0x75,0x74,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x34,0x20,0x67,0x5f,
    0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x0a,0x76,0x6f,0x69,
    0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x68,
    0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x32,0x20,0x5f,0x35,0x38,0x20,0x3d,0x20,
    0x76,0x65,0x63,0x32,0x28,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x5b,0x31,0x5d,0x2e,0x78,0x2c,0x20,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x79,0x29,0x20,0x2b,0x20,0x28,0x66,0x72,
    0x61,0x67,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x5f,0x63,0x6f,0x6f,0x72,0x64,
    0x20,0x2a,0x20,0x76,0x65,0x63,0x32,0x28,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x7a,0x2c,0x20,0x75,0x69,0x5f,0x66,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2e,0x77,0x29,0x29,0x3b,0x0a,
    0x20,0x20,0x20,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x32,0x20,0x5f,
    0x31,0x31,0x30,0x20,0x3d,0x20,0x5f,0x35,0x38,0x3b,0x0a,0x20,0x20,0x20,0x20,0x5f,
    0x31,0x31,0x30,0x2e,0x78,0x20,0x3d,0x20,0x5f,0x35,0x38,0x2e,0x78,0x20,0x2f,0x20,
    0x66,0x6c,0x6f,0x61,0x74,0x28,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x53,0x69,0x7a,
    0x65,0x28,0x75,0x69,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,0x2c,0x20,0x30,0x29,
    0x2e,0x78,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,
    0x65,0x63,0x32,0x20,0x5f,0x31,0x31,0x33,0x20,0x3d,0x20,0x5f,0x31,0x31,0x30,0x3b,
    0x0a,0x20,0x20,0x20,0x20,0x5f,0x31,0x31,0x33,0x2e,0x79,0x20,0x3d,0x20,0x5f,0x35,
    0x38,0x2e,0x79,0x20,0x2f,0x20,0x66,0x6c,0x6f,0x61,0x74,0x28,0x74,0x65,0x78,0x74,
    0x75,0x72,0x65,0x53,0x69,0x7a,0x65,0x28,0x75,0x69,0x5f,0x74,0x65,0x78,0x74,0x75,
    0x72,0x65,0x2c,0x20,0x30,0x29,0x2e,0x79,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,
    0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x74,0x65,
    0x78,0x74,0x75,0x72,0x65,0x28,0x75,0x69,0x5f,0x74,0x65,0x78,0x74,0x75,0x72,0x65,
    0x2c,0x20,0x5f,0x31,0x31,0x33,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x68,0x69,0x67,
    0x68,0x70,0x20,0x66,0x6c,0x6f,0x61,0x74,0x20,0x5f,0x38,0x34,0x20,0x3d,0x20,0x31,
    0x2e,0x30,0x20,0x2d,0x20,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x5b,0x32,0x5d,0x2e,0x78,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x5f,0x66,0x72,
    0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x77,0x20,0x3d,0x20,0x28,0x75,0x69,
    0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x32,0x5d,0x2e,0x78,0x20,
    0x2a,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x78,
    0x29,0x20,0x2b,0x20,0x28,0x5f,0x38,0x34,0x20,0x2a,0x20,0x67,0x5f,0x66,0x72,0x61,
    0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,0x77,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,
    0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,0x63,0x33,0x20,0x5f,0x31,0x30,0x35,0x20,
    0x3d,0x20,0x28,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x2e,
    0x78,0x79,0x7a,0x20,0x2a,0x20,0x5f,0x38,0x34,0x29,0x20,0x2b,0x20,0x28,0x75,0x69,
    0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2e,0x78,0x79,
    0x7a,0x20,0x2a,0x20,0x75,0x69,0x5f,0x66,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,
    0x5b,0x32,0x5d,0x2e,0x78,0x29,0x3b,0x0a,0x20,0x20,0x20,0x20,0x67,0x5f,0x66,0x72,
    0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,0x28,
    0x5f,0x31,0x30,0x35,0x2e,0x78,0x2c,0x20,0x5f,0x31,0x30,0x35,0x2e,0x79,0x2c,0x20,
    0x5f,0x31,0x30,0x35,0x2e,0x7a,0x2c,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,
    0x6f,0x6c,0x6f,0x72,0x2e,0x77,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
#if !defined(SOKOL_GFX_INCLUDED)
  #error "Please include sokol_gfx.h before ui.glsl.h"
#endif
static inline const sg_shader_desc* ui_shader_desc(sg_backend backend) {
  if (backend == SG_BACKEND_GLCORE33) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "position";
      desc.attrs[1].name = "texture_coord";
      desc.vs.source = ui_vs_source_glsl330;
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 64;
      desc.vs.uniform_blocks[0].uniforms[0].name = "ui_vs_params";
      desc.vs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.vs.uniform_blocks[0].uniforms[0].array_count = 4;
      desc.fs.source = ui_fs_source_glsl330;
      desc.fs.entry = "main";
      desc.fs.uniform_blocks[0].size = 48;
      desc.fs.uniform_blocks[0].uniforms[0].name = "ui_fs_params";
      desc.fs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.fs.uniform_blocks[0].uniforms[0].array_count = 3;
      desc.fs.images[0].name = "ui_texture";
      desc.fs.images[0].image_type = SG_IMAGETYPE_2D;
      desc.fs.images[0].sampler_type = SG_SAMPLERTYPE_FLOAT;
      desc.label = "ui_shader";
    }
    return &desc;
  }
  if (backend == SG_BACKEND_GLES3) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "position";
      desc.attrs[1].name = "texture_coord";
      desc.vs.source = ui_vs_source_glsl300es;
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 64;
      desc.vs.uniform_blocks[0].uniforms[0].name = "ui_vs_params";
      desc.vs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.vs.uniform_blocks[0].uniforms[0].array_count = 4;
      desc.fs.source = ui_fs_source_glsl300es;
      desc.fs.entry = "main";
      desc.fs.uniform_blocks[0].size = 48;
      desc.fs.uniform_blocks[0].uniforms[0].name = "ui_fs_params";
      desc.fs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.fs.uniform_blocks[0].uniforms[0].array_count = 3;
      desc.fs.images[0].name = "ui_texture";
      desc.fs.images[0].image_type = SG_IMAGETYPE_2D;
      desc.fs.images[0].sampler_type = SG_SAMPLERTYPE_FLOAT;
      desc.label = "ui_shader";
    }
    return &desc;
  }
  return 0;
}
