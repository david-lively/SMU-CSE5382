#ifndef ENUMS_H
#define ENUMS_H

#include "gl_core_4_3.hpp"

enum class BufferTarget {
    Unknown = 0
    , ArrayBuffer = gl::ARRAY_BUFFER
    , ElementArrayBuffer = gl::ELEMENT_ARRAY_BUFFER
    , PixelPackBuffer = gl::PIXEL_PACK_BUFFER
    , PixelUnpackBuffer = gl::PIXEL_UNPACK_BUFFER
    , UniformBuffer = gl::UNIFORM_BUFFER
    , TextureBuffer = gl::TEXTURE_BUFFER
    , TransformFeedbackBuffer = gl::TRANSFORM_FEEDBACK_BUFFER
    , CopyReadBuffer = gl::COPY_READ_BUFFER
    , CopyWriteBuffer = gl::COPY_WRITE_BUFFER
    , DrawIndirectBuffer = gl::DRAW_INDIRECT_BUFFER
};

/// <summary>
/// Hint to OpenGL about how a buffer will be used. (Things that are updated frequently should use Dynamic*)
/// </summary>
enum class BufferUsageHint
{
    Unknown = 0
    , StreamDraw = gl::STREAM_DRAW
    , StreamRead = gl::STREAM_READ
    , StreamCopy = gl::STREAM_COPY
    , StaticDraw = gl::STATIC_DRAW
    , StaticRead = gl::STATIC_READ
    , StaticCopy = gl::STATIC_COPY
    , DynamicDraw = gl::DYNAMIC_DRAW
    , DynamicRead = gl::DYNAMIC_READ
    , DynamicCopy = gl::DYNAMIC_COPY
};
/// <summary>
/// Types used when compiling shaders
/// </summary>
enum class ShaderType
{
    FragmentShader = gl::FRAGMENT_SHADER,
    VertexShader = gl::VERTEX_SHADER,
    GeometryShader = gl::GEOMETRY_SHADER,
    TessEvaluationShader = gl::TESS_EVALUATION_SHADER,
    TessControlShader = gl::TESS_CONTROL_SHADER,
    ComputeShader = gl::COMPUTE_SHADER
};


// Summary:
//     Used in GL.Apple.DrawElementArray, GL.Apple.DrawRangeElementArray, GL.Apple.MultiDrawElementArray,
//     GL.Apple.MultiDrawRangeElementArray, GL.Arb.DrawArraysInstanced, GL.Arb.DrawElementsInstanced,
//     GL.Ati.DrawElementArray, GL.Ati.DrawRangeElementArray, GL.Begin, GL.DrawArrays,
//     GL.DrawArraysInstanced, GL.DrawElements, GL.DrawElementsBaseVertex, GL.DrawElementsInstanced,
//     GL.DrawElementsInstancedBaseVertex, GL.DrawRangeElements, GL.DrawRangeElementsBaseVertex,
//     GL.DrawTransformFeedback, GL.DrawTransformFeedbackStream, GL.MultiDrawArrays,
//     GL.MultiDrawElements, GL.MultiDrawElementsBaseVertex, GL.Ext.DrawArrays,
//     GL.Ext.DrawArraysInstanced, GL.Ext.DrawElementsInstanced, GL.Ext.DrawRangeElements,
//     GL.Ext.MultiDrawArrays, GL.Ext.MultiDrawElements, GL.Ibm.MultiModeDrawArrays,
//     GL.Ibm.MultiModeDrawElements, GL.Sun.DrawMeshArrays
enum class BeginMode
{
    // Summary:
    //     Original was gl::POINTS = 0x0000
    Points = gl::POINTS,
    //
    // Summary:
    //     Original was gl::LINES = 0x0001
    Lines = gl::LINES,
    //
    // Summary:
    //     Original was gl::LINE_LOOP = 0x0002
    LineLoop = gl::LINE_LOOP,
    //
    // Summary:
    //     Original was gl::LINE_STRIP = 0x0003
    LineStrip = gl::LINE_STRIP,
    //
    // Summary:
    //     Original was gl::TRIANGLES = 0x0004
    Triangles = gl::TRIANGLES,
    //
    // Summary:
    //     Original was gl::TRIANGLE_STRIP = 0x0005
    TriangleStrip = gl::TRIANGLE_STRIP,
    //
    // Summary:
    //     Original was gl::TRIANGLE_FAN = 0x0006
    TriangleFan = gl::TRIANGLE_FAN,
    //
    // Summary:
    //     Original was gl::QUADS = 0x0007
    Quads = gl::QUADS,
    // Summary:
    //     Original was gl::LINES_ADJACENCY = 0xA
    LinesAdjacency = gl::LINES_ADJACENCY,
    //
    // Summary:
    //     Original was gl::LINE_STRIP_ADJACENCY = 0xB
    LineStripAdjacency = gl::LINE_STRIP_ADJACENCY,
    //
    // Summary:
    //     Original was gl::TRIANGLES_ADJACENCY = 0xC
    TrianglesAdjacency = gl::TRIANGLES_ADJACENCY,
    //
    // Summary:
    //     Original was gl::TRIANGLE_STRIP_ADJACENCY = 0xD
    TriangleStripAdjacency = gl::TRIANGLE_STRIP_ADJACENCY,
    //
    // Summary:
    //     Original was gl::PATCHES = 0x000E
    Patches = gl::PATCHES,
};

// Summary:
//     Used in GL.ColorMaterial, GL.GetMaterial, GL.Material, GL.PolygonMode, GL.Ext.BindMaterialParameter,
//     GL.Ext.IndexMaterial, GL.Ext.TextureMaterial, GL.Sgix.FragmentColorMaterial,
//     GL.Sgix.FragmentMaterial, GL.Sgix.GetFragmentMaterial
enum class MaterialFace
{
    // Summary:
    //     Original was gl::FRONT = 0x0404
    Front = gl::FRONT,
    //
    // Summary:
    //     Original was gl::BACK = 0x0405
    Back = gl::BACK,
    //
    // Summary:
    //     Original was gl::FRONT_AND_BACK = 0x0408
    FrontAndBack = gl::FRONT_AND_BACK,
};

// Summary:
//     Used in GL.PolygonMode
enum class PolygonMode
{
    // Summary:
    //     Original was gl::POINT = 0x1B00
    Point = gl::POINT,
    //
    // Summary:
    //     Original was gl::LINE = 0x1B01
    Line = gl::LINE,
    //
    // Summary:
    //     Original was gl::FILL = 0x1B02
    Fill = gl::FILL,
};

// Summary:
//     Used in GL.CullFace
enum class CullFaceMode
{
    // Summary:
    //     Original was GL_FRONT = 0x0404
    Front = 1028,
    //
    // Summary:
    //     Original was GL_BACK = 0x0405
    Back = 1029,
    //
    // Summary:
    //     Original was GL_FRONT_AND_BACK = 0x0408
    FrontAndBack = 1032,
};



// Summary:
//     Used in GL.Ati.ArrayObject, GL.Ati.GetArrayObject, GL.Disable, GL.Enable,
//     GL.IsEnabled, GL.Ext.DisableClientStateIndexed, GL.Ext.EnableClientStateIndexed
enum class EnableCap
{
    // Summary:
    //     Original was gl::POINT_SMOOTH = 0x0B10
    PointSmooth = 2832,
    //
    // Summary:
    //     Original was gl::LINE_SMOOTH = 0x0B20
    LineSmooth = 2848,
    //
    // Summary:
    //     Original was gl::LINE_STIPPLE = 0x0B24
    LineStipple = 2852,
    //
    // Summary:
    //     Original was gl::POLYGON_SMOOTH = 0x0B41
    PolygonSmooth = 2881,
    //
    // Summary:
    //     Original was gl::POLYGON_STIPPLE = 0x0B42
    PolygonStipple = 2882,
    //
    // Summary:
    //     Original was gl::CULL_FACE = 0x0B44
    CullFace = 2884,
    //
    // Summary:
    //     Original was gl::LIGHTING = 0x0B50
    Lighting = 2896,
    //
    // Summary:
    //     Original was gl::COLOR_MATERIAL = 0x0B57
    ColorMaterial = 2903,
    //
    // Summary:
    //     Original was gl::FOG = 0x0B60
    Fog = 2912,
    //
    // Summary:
    //     Original was gl::DEPTH_TEST = 0x0B71
    DepthTest = 2929,
    //
    // Summary:
    //     Original was gl::STENCIL_TEST = 0x0B90
    StencilTest = 2960,
    //
    // Summary:
    //     Original was gl::NORMALIZE = 0x0BA1
    Normalize = 2977,
    //
    // Summary:
    //     Original was gl::ALPHA_TEST = 0x0BC0
    AlphaTest = 3008,
    //
    // Summary:
    //     Original was gl::DITHER = 0x0BD0
    Dither = 3024,
    //
    // Summary:
    //     Original was gl::BLEND = 0x0BE2
    Blend = 3042,
    //
    // Summary:
    //     Original was gl::INDEX_LOGIC_OP = 0x0BF1
    IndexLogicOp = 3057,
    //
    // Summary:
    //     Original was gl::COLOR_LOGIC_OP = 0x0BF2
    ColorLogicOp = 3058,
    //
    // Summary:
    //     Original was gl::SCISSOR_TEST = 0x0C11
    ScissorTest = 3089,
    //
    // Summary:
    //     Original was gl::TEXTURE_GEN_S = 0x0C60
    TextureGenS = 3168,
    //
    // Summary:
    //     Original was gl::TEXTURE_GEN_T = 0x0C61
    TextureGenT = 3169,
    //
    // Summary:
    //     Original was gl::TEXTURE_GEN_R = 0x0C62
    TextureGenR = 3170,
    //
    // Summary:
    //     Original was gl::TEXTURE_GEN_Q = 0x0C63
    TextureGenQ = 3171,
    //
    // Summary:
    //     Original was gl::AUTO_NORMAL = 0x0D80
    AutoNormal = 3456,
    //
    // Summary:
    //     Original was gl::MAP1_COLOR_4 = 0x0D90
    Map1Color4 = 3472,
    //
    // Summary:
    //     Original was gl::MAP1_INDEX = 0x0D91
    Map1Index = 3473,
    //
    // Summary:
    //     Original was gl::MAP1_NORMAL = 0x0D92
    Map1Normal = 3474,
    //
    // Summary:
    //     Original was gl::MAP1_TEXTURE_COORD_1 = 0x0D93
    Map1TextureCoord1 = 3475,
    //
    // Summary:
    //     Original was gl::MAP1_TEXTURE_COORD_2 = 0x0D94
    Map1TextureCoord2 = 3476,
    //
    // Summary:
    //     Original was gl::MAP1_TEXTURE_COORD_3 = 0x0D95
    Map1TextureCoord3 = 3477,
    //
    // Summary:
    //     Original was gl::MAP1_TEXTURE_COORD_4 = 0x0D96
    Map1TextureCoord4 = 3478,
    //
    // Summary:
    //     Original was gl::MAP1_VERTEX_3 = 0x0D97
    Map1Vertex3 = 3479,
    //
    // Summary:
    //     Original was gl::MAP1_VERTEX_4 = 0x0D98
    Map1Vertex4 = 3480,
    //
    // Summary:
    //     Original was gl::MAP2_COLOR_4 = 0x0DB0
    Map2Color4 = 3504,
    //
    // Summary:
    //     Original was gl::MAP2_INDEX = 0x0DB1
    Map2Index = 3505,
    //
    // Summary:
    //     Original was gl::MAP2_NORMAL = 0x0DB2
    Map2Normal = 3506,
    //
    // Summary:
    //     Original was gl::MAP2_TEXTURE_COORD_1 = 0x0DB3
    Map2TextureCoord1 = 3507,
    //
    // Summary:
    //     Original was gl::MAP2_TEXTURE_COORD_2 = 0x0DB4
    Map2TextureCoord2 = 3508,
    //
    // Summary:
    //     Original was gl::MAP2_TEXTURE_COORD_3 = 0x0DB5
    Map2TextureCoord3 = 3509,
    //
    // Summary:
    //     Original was gl::MAP2_TEXTURE_COORD_4 = 0x0DB6
    Map2TextureCoord4 = 3510,
    //
    // Summary:
    //     Original was gl::MAP2_VERTEX_3 = 0x0DB7
    Map2Vertex3 = 3511,
    //
    // Summary:
    //     Original was gl::MAP2_VERTEX_4 = 0x0DB8
    Map2Vertex4 = 3512,
    //
    // Summary:
    //     Original was gl::TEXTURE_1D = 0x0DE0
    Texture1D = 3552,
    //
    // Summary:
    //     Original was gl::TEXTURE_2D = 0x0DE1
    Texture2D = 3553,
    //
    // Summary:
    //     Original was gl::POLYGON_OFFSET_POINT = 0x2A01
    PolygonOffsetPoint = 10753,
    //
    // Summary:
    //     Original was gl::POLYGON_OFFSET_LINE = 0x2A02
    PolygonOffsetLine = 10754,
    //
    // Summary:
    //     Original was gl::CLIP_PLANE0 = 0x3000
    ClipPlane0 = 12288,
    //
    // Summary:
    //     Original was gl::CLIP_PLANE1 = 0x3001
    ClipPlane1 = 12289,
    //
    // Summary:
    //     Original was gl::CLIP_PLANE2 = 0x3002
    ClipPlane2 = 12290,
    //
    // Summary:
    //     Original was gl::CLIP_PLANE3 = 0x3003
    ClipPlane3 = 12291,
    //
    // Summary:
    //     Original was gl::CLIP_PLANE4 = 0x3004
    ClipPlane4 = 12292,
    //
    // Summary:
    //     Original was gl::CLIP_PLANE5 = 0x3005
    ClipPlane5 = 12293,
    //
    // Summary:
    //     Original was gl::LIGHT0 = 0x4000
    Light0 = 16384,
    //
    // Summary:
    //     Original was gl::LIGHT1 = 0x4001
    Light1 = 16385,
    //
    // Summary:
    //     Original was gl::LIGHT2 = 0x4002
    Light2 = 16386,
    //
    // Summary:
    //     Original was gl::LIGHT3 = 0x4003
    Light3 = 16387,
    //
    // Summary:
    //     Original was gl::LIGHT4 = 0x4004
    Light4 = 16388,
    //
    // Summary:
    //     Original was gl::LIGHT5 = 0x4005
    Light5 = 16389,
    //
    // Summary:
    //     Original was gl::LIGHT6 = 0x4006
    Light6 = 16390,
    //
    // Summary:
    //     Original was gl::LIGHT7 = 0x4007
    Light7 = 16391,
    //
    // Summary:
    //     Original was gl::CONVOLUTION_1D_EXT = 0x8010
    Convolution1DExt = 32784,
    //
    // Summary:
    //     Original was gl::CONVOLUTION_1D = 0x8010
    Convolution1D = 32784,
    //
    // Summary:
    //     Original was gl::CONVOLUTION_2D = 0x8011
    Convolution2D = 32785,
    //
    // Summary:
    //     Original was gl::CONVOLUTION_2D_EXT = 0x8011
    Convolution2DExt = 32785,
    //
    // Summary:
    //     Original was gl::SEPARABLE_2D_EXT = 0x8012
    Separable2DExt = 32786,
    //
    // Summary:
    //     Original was gl::SEPARABLE_2D = 0x8012
    Separable2D = 32786,
    //
    // Summary:
    //     Original was gl::HISTOGRAM_EXT = 0x8024
    HistogramExt = 32804,
    //
    // Summary:
    //     Original was gl::HISTOGRAM = 0x8024
    Histogram = 32804,
    //
    // Summary:
    //     Original was gl::MINMAX_EXT = 0x802E
    MinmaxExt = 32814,
    //
    // Summary:
    //     Original was gl::POLYGON_OFFSET_FILL = 0x8037
    PolygonOffsetFill = 32823,
    //
    // Summary:
    //     Original was gl::RESCALE_NORMAL_EXT = 0x803A
    RescaleNormalExt = 32826,
    //
    // Summary:
    //     Original was gl::RESCALE_NORMAL = 0x803A
    RescaleNormal = 32826,
    //
    // Summary:
    //     Original was gl::TEXTURE_3D_EXT = 0x806F
    Texture3DExt = 32879,
    //
    // Summary:
    //     Original was gl::VERTEX_ARRAY = 0x8074
    VertexArray = 32884,
    //
    // Summary:
    //     Original was gl::NORMAL_ARRAY = 0x8075
    NormalArray = 32885,
    //
    // Summary:
    //     Original was gl::COLOR_ARRAY = 0x8076
    ColorArray = 32886,
    //
    // Summary:
    //     Original was gl::INDEX_ARRAY = 0x8077
    IndexArray = 32887,
    //
    // Summary:
    //     Original was gl::TEXTURE_COORD_ARRAY = 0x8078
    TextureCoordArray = 32888,
    //
    // Summary:
    //     Original was gl::EDGE_FLAG_ARRAY = 0x8079
    EdgeFlagArray = 32889,
    //
    // Summary:
    //     Original was gl::INTERLACE_SGIX = 0x8094
    InterlaceSgix = 32916,
    //
    // Summary:
    //     Original was gl::MULTISAMPLE_SGIS = 0x809D
    MultisampleSgis = 32925,
    //
    // Summary:
    //     Original was gl::MULTISAMPLE = 0x809D
    Multisample = 32925,
    //
    // Summary:
    //     Original was gl::SAMPLE_ALPHA_TO_COVERAGE = 0x809E
    SampleAlphaToCoverage = 32926,
    //
    // Summary:
    //     Original was gl::SAMPLE_ALPHA_TO_MASK_SGIS = 0x809E
    SampleAlphaToMaskSgis = 32926,
    //
    // Summary:
    //     Original was gl::SAMPLE_ALPHA_TO_ONE_SGIS = 0x809F
    SampleAlphaToOneSgis = 32927,
    //
    // Summary:
    //     Original was gl::SAMPLE_ALPHA_TO_ONE = 0x809F
    SampleAlphaToOne = 32927,
    //
    // Summary:
    //     Original was gl::SAMPLE_MASK_SGIS = 0x80A0
    SampleMaskSgis = 32928,
    //
    // Summary:
    //     Original was gl::SAMPLE_COVERAGE = 0x80A0
    SampleCoverage = 32928,
    //
    // Summary:
    //     Original was gl::TEXTURE_COLOR_TABLE_SGI = 0x80BC
    TextureColorTableSgi = 32956,
    //
    // Summary:
    //     Original was gl::COLOR_TABLE_SGI = 0x80D0
    ColorTableSgi = 32976,
    //
    // Summary:
    //     Original was gl::COLOR_TABLE = 0x80D0
    ColorTable = 32976,
    //
    // Summary:
    //     Original was gl::POST_CONVOLUTION_COLOR_TABLE = 0x80D1
    PostConvolutionColorTable = 32977,
    //
    // Summary:
    //     Original was gl::POST_CONVOLUTION_COLOR_TABLE_SGI = 0x80D1
    PostConvolutionColorTableSgi = 32977,
    //
    // Summary:
    //     Original was gl::POST_COLOR_MATRIX_COLOR_TABLE = 0x80D2
    PostColorMatrixColorTable = 32978,
    //
    // Summary:
    //     Original was gl::POST_COLOR_MATRIX_COLOR_TABLE_SGI = 0x80D2
    PostColorMatrixColorTableSgi = 32978,
    //
    // Summary:
    //     Original was gl::TEXTURE_4D_SGIS = 0x8134
    Texture4DSgis = 33076,
    //
    // Summary:
    //     Original was gl::PIXEL_TEX_GEN_SGIX = 0x8139
    PixelTexGenSgix = 33081,
    //
    // Summary:
    //     Original was gl::SPRITE_SGIX = 0x8148
    SpriteSgix = 33096,
    //
    // Summary:
    //     Original was gl::REFERENCE_PLANE_SGIX = 0x817D
    ReferencePlaneSgix = 33149,
    //
    // Summary:
    //     Original was gl::IR_INSTRUMENT1_SGIX = 0x817F
    IrInstrument1Sgix = 33151,
    //
    // Summary:
    //     Original was gl::CALLIGRAPHIC_FRAGMENT_SGIX = 0x8183
    CalligraphicFragmentSgix = 33155,
    //
    // Summary:
    //     Original was gl::FRAMEZOOM_SGIX = 0x818B
    FramezoomSgix = 33163,
    //
    // Summary:
    //     Original was gl::FOG_OFFSET_SGIX = 0x8198
    FogOffsetSgix = 33176,
    //
    // Summary:
    //     Original was gl::SHARED_TEXTURE_PALETTE_EXT = 0x81FB
    SharedTexturePaletteExt = 33275,
    //
    // Summary:
    //     Original was gl::ASYNC_HISTOGRAM_SGIX = 0x832C
    AsyncHistogramSgix = 33580,
    //
    // Summary:
    //     Original was gl::PIXEL_TEXTURE_SGIS = 0x8353
    PixelTextureSgis = 33619,
    //
    // Summary:
    //     Original was gl::ASYNC_TEX_IMAGE_SGIX = 0x835C
    AsyncTexImageSgix = 33628,
    //
    // Summary:
    //     Original was gl::ASYNC_DRAW_PIXELS_SGIX = 0x835D
    AsyncDrawPixelsSgix = 33629,
    //
    // Summary:
    //     Original was gl::ASYNC_READ_PIXELS_SGIX = 0x835E
    AsyncReadPixelsSgix = 33630,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHTING_SGIX = 0x8400
    FragmentLightingSgix = 33792,
    //
    // Summary:
    //     Original was gl::FRAGMENT_COLOR_MATERIAL_SGIX = 0x8401
    FragmentColorMaterialSgix = 33793,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT0_SGIX = 0x840C
    FragmentLight0Sgix = 33804,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT1_SGIX = 0x840D
    FragmentLight1Sgix = 33805,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT2_SGIX = 0x840E
    FragmentLight2Sgix = 33806,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT3_SGIX = 0x840F
    FragmentLight3Sgix = 33807,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT4_SGIX = 0x8410
    FragmentLight4Sgix = 33808,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT5_SGIX = 0x8411
    FragmentLight5Sgix = 33809,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT6_SGIX = 0x8412
    FragmentLight6Sgix = 33810,
    //
    // Summary:
    //     Original was gl::FRAGMENT_LIGHT7_SGIX = 0x8413
    FragmentLight7Sgix = 33811,
    //
    // Summary:
    //     Original was gl::FOG_COORD_ARRAY = 0x8457
    FogCoordArray = 33879,
    //
    // Summary:
    //     Original was gl::COLOR_SUM = 0x8458
    ColorSum = 33880,
    //
    // Summary:
    //     Original was gl::SECONDARY_COLOR_ARRAY = 0x845E
    SecondaryColorArray = 33886,
    //
    // Summary:
    //     Original was gl::TEXTURE_RECTANGLE = 0x84F5
    TextureRectangle = 34037,
    //
    // Summary:
    //     Original was gl::TEXTURE_CUBE_MAP = 0x8513
    TextureCubeMap = 34067,
    //
    // Summary:
    //     Original was gl::PROGRAM_POINT_SIZE = 0x8642
    ProgramPointSize = 34370,
    //
    // Summary:
    //     Original was gl::VERTEX_PROGRAM_POINT_SIZE = 0x8642
    VertexProgramPointSize = 34370,
    //
    // Summary:
    //     Original was gl::VERTEX_PROGRAM_TWO_SIDE = 0x8643
    VertexProgramTwoSide = 34371,
    //
    // Summary:
    //     Original was gl::DEPTH_CLAMP = 0x864F
    DepthClamp = 34383,
    //
    // Summary:
    //     Original was gl::TEXTURE_CUBE_MAP_SEAMLESS = 0x884F
    TextureCubeMapSeamless = 34895,
    //
    // Summary:
    //     Original was gl::POINT_SPRITE = 0x8861
    PointSprite = 34913,
    //
    // Summary:
    //     Original was gl::SAMPLE_SHADING = 0x8C36
    SampleShading = 35894,
    //
    // Summary:
    //     Original was gl::RASTERIZER_DISCARD = 0x8C89
    RasterizerDiscard = 35977,
    //
    // Summary:
    //     Original was gl::FRAMEBUFFER_SRGB = 0x8DB9
    FramebufferSrgb = 36281,
    //
    // Summary:
    //     Original was gl::SAMPLE_MASK = 0x8E51
    SampleMask = 36433,
    //
    // Summary:
    //     Original was gl::PRIMITIVE_RESTART = 0x8F9D
    PrimitiveRestart = 36765,
};

// Summary:
//     Used in GL.BlendFunc, GL.BlendFuncSeparate
enum class BlendingFactorSrc
{
    // Summary:
    //     Original was gl::ZERO = 0
    Zero = 0,
    //
    // Summary:
    //     Original was gl::ONE = 1
    One = 1,
    //
    // Summary:
    //     Original was gl::SRC_ALPHA = 0x0302
    SrcAlpha = 770,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC_ALPHA = 0x0303
    OneMinusSrcAlpha = 771,
    //
    // Summary:
    //     Original was gl::DST_ALPHA = 0x0304
    DstAlpha = 772,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_DST_ALPHA = 0x0305
    OneMinusDstAlpha = 773,
    //
    // Summary:
    //     Original was gl::DST_COLOR = 0x0306
    DstColor = 774,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_DST_COLOR = 0x0307
    OneMinusDstColor = 775,
    //
    // Summary:
    //     Original was gl::SRC_ALPHA_SATURATE = 0x0308
    SrcAlphaSaturate = 776,
    //
    // Summary:
    //     Original was gl::CONSTANT_COLOR_EXT = 0x8001
    ConstantColorExt = 32769,
    //
    // Summary:
    //     Original was gl::CONSTANT_COLOR = 0x8001
    ConstantColor = 32769,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_COLOR_EXT = 0x8002
    OneMinusConstantColorExt = 32770,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_COLOR = 0x8002
    OneMinusConstantColor = 32770,
    //
    // Summary:
    //     Original was gl::CONSTANT_ALPHA_EXT = 0x8003
    ConstantAlphaExt = 32771,
    //
    // Summary:
    //     Original was gl::CONSTANT_ALPHA = 0x8003
    ConstantAlpha = 32771,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_ALPHA = 0x8004
    OneMinusConstantAlpha = 32772,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_ALPHA_EXT = 0x8004
    OneMinusConstantAlphaExt = 32772,
    //
    // Summary:
    //     Original was gl::SRC1_ALPHA = 0x8589
    Src1Alpha = 34185,
    //
    // Summary:
    //     Original was gl::SRC1_COLOR = 0x88F9
    Src1Color = 35065,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC1_COLOR = 0x88FA
    OneMinusSrc1Color = 35066,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC1_ALPHA = 0x88FB
    OneMinusSrc1Alpha = 35067,
};

// Summary:
//     Used in GL.BlendFunc, GL.BlendFuncSeparate
enum class BlendingFactorDest
{
    // Summary:
    //     Original was gl::ZERO = 0
    Zero = 0,
    //
    // Summary:
    //     Original was gl::ONE = 1
    One = 1,
    //
    // Summary:
    //     Original was gl::SRC_COLOR = 0x0300
    SrcColor = 768,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC_COLOR = 0x0301
    OneMinusSrcColor = 769,
    //
    // Summary:
    //     Original was gl::SRC_ALPHA = 0x0302
    SrcAlpha = 770,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC_ALPHA = 0x0303
    OneMinusSrcAlpha = 771,
    //
    // Summary:
    //     Original was gl::DST_ALPHA = 0x0304
    DstAlpha = 772,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_DST_ALPHA = 0x0305
    OneMinusDstAlpha = 773,
    //
    // Summary:
    //     Original was gl::CONSTANT_COLOR = 0x8001
    ConstantColor = 32769,
    //
    // Summary:
    //     Original was gl::CONSTANT_COLOR_EXT = 0x8001
    ConstantColorExt = 32769,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_COLOR_EXT = 0x8002
    OneMinusConstantColorExt = 32770,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_COLOR = 0x8002
    OneMinusConstantColor = 32770,
    //
    // Summary:
    //     Original was gl::CONSTANT_ALPHA = 0x8003
    ConstantAlpha = 32771,
    //
    // Summary:
    //     Original was gl::CONSTANT_ALPHA_EXT = 0x8003
    ConstantAlphaExt = 32771,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_ALPHA_EXT = 0x8004
    OneMinusConstantAlphaExt = 32772,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_CONSTANT_ALPHA = 0x8004
    OneMinusConstantAlpha = 32772,
    //
    // Summary:
    //     Original was gl::SRC1_ALPHA = 0x8589
    Src1Alpha = 34185,
    //
    // Summary:
    //     Original was gl::SRC1_COLOR = 0x88F9
    Src1Color = 35065,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC1_COLOR = 0x88FA
    OneMinusSrc1Color = 35066,
    //
    // Summary:
    //     Original was gl::ONE_MINUS_SRC1_ALPHA = 0x88FB
    OneMinusSrc1Alpha = 35067,
};

// Summary:
//     Used in GL.VertexAttribPointer
enum class VertexAttribPointerType
{
    // Summary:
    //     Original was gl::BYTE = 0x1400
    Byte = gl::BYTE,
    //
    // Summary:
    //     Original was gl::UNSIGNED_BYTE = 0x1401
    UnsignedByte = gl::UNSIGNED_BYTE,
    //
    // Summary:
    //     Original was gl::SHORT = 0x1402
    Short = gl::SHORT,
    //
    // Summary:
    //     Original was gl::UNSIGNED_SHORT = 0x1403
    UnsignedShort = gl::UNSIGNED_SHORT,
    //
    // Summary:
    //     Original was gl::INT = 0x1404
    Int = gl::INT,
    //
    // Summary:
    //     Original was gl::UNSIGNED_INT = 0x1405
    UnsignedInt = gl::UNSIGNED_INT,
    //
    // Summary:
    //     Original was gl::FLOAT = 0x1406
    Float = gl::FLOAT,
    //
    // Summary:
    //     Original was gl::DOUBLE = 0x140A
    Double = gl::DOUBLE,
    //
    // Summary:
    //     Original was gl::HALF_FLOAT = 0x140B
    HalfFloat = gl::HALF_FLOAT,
    //
    // Summary:
    //     Original was gl::FIXED = 0x140C
    Fixed = gl::FIXED,
    //
    // Summary:
    //     Original was gl::UNSIGNED_INT_2_10_10_10_REV = 0x8368
    UnsignedInt2101010Rev = gl::UNSIGNED_INT_2_10_10_10_REV,
    //
    // Summary:
    //     Original was gl::INT_2_10_10_10_REV = 0x8D9F
    Int2101010Rev = gl::INT_2_10_10_10_REV,
};
///element types for index buffers
enum class ElementType
{
    UnsignedByte = gl::UNSIGNED_BYTE
    , UnsignedShort = gl::UNSIGNED_SHORT
    , UnsignedInt = gl::UNSIGNED_INT
};

// Summary:
//     Used in GL.Arb.CompressedTexImage1D, GL.Arb.CompressedTexImage2D, GL.Arb.CompressedTexImage3D,
//     GL.Arb.CompressedTexSubImage1D, GL.Arb.CompressedTexSubImage2D, GL.Arb.CompressedTexSubImage3D,
//     GL.Arb.FramebufferTextureFace, GL.Arb.GetCompressedTexImage, GL.Arb.TexBuffer,
//     GL.BindTexture, GL.CompressedTexImage1D, GL.CompressedTexImage2D, GL.CompressedTexImage3D,
//     GL.CompressedTexSubImage1D, GL.CompressedTexSubImage2D, GL.CompressedTexSubImage3D,
//     GL.CopyTexImage1D, GL.CopyTexImage2D, GL.CopyTexSubImage1D, GL.CopyTexSubImage2D,
//     GL.CopyTexSubImage3D, GL.FramebufferTexture1D, GL.FramebufferTexture2D, GL.FramebufferTexture3D,
//     GL.GetCompressedTexImage, GL.GetTexImage, GL.GetTexLevelParameter, GL.GetTexParameter,
//     GL.GetTexParameterI, GL.TexImage1D, GL.TexImage2D, GL.TexImage3D, GL.TexParameter,
//     GL.TexParameterI, GL.TexSubImage1D, GL.TexSubImage2D, GL.TexSubImage3D, GL.Ext.BindMultiTexture,
//     GL.Ext.BindTexture, GL.Ext.CompressedMultiTexImage1D, GL.Ext.CompressedMultiTexImage2D,
//     GL.Ext.CompressedMultiTexImage3D, GL.Ext.CompressedMultiTexSubImage1D, GL.Ext.CompressedMultiTexSubImage2D,
//     GL.Ext.CompressedMultiTexSubImage3D, GL.Ext.CompressedTextureImage1D, GL.Ext.CompressedTextureImage2D,
//     GL.Ext.CompressedTextureImage3D, GL.Ext.CompressedTextureSubImage1D, GL.Ext.CompressedTextureSubImage2D,
//     GL.Ext.CompressedTextureSubImage3D, GL.Ext.CopyMultiTexImage1D, GL.Ext.CopyMultiTexImage2D,
//     GL.Ext.CopyMultiTexSubImage1D, GL.Ext.CopyMultiTexSubImage2D, GL.Ext.CopyMultiTexSubImage3D,
//     GL.Ext.CopyTexImage1D, GL.Ext.CopyTexImage2D, GL.Ext.CopyTexSubImage1D, GL.Ext.CopyTexSubImage2D,
//     GL.Ext.CopyTexSubImage3D, GL.Ext.CopyTextureImage1D, GL.Ext.CopyTextureImage2D,
//     GL.Ext.CopyTextureSubImage1D, GL.Ext.CopyTextureSubImage2D, GL.Ext.CopyTextureSubImage3D,
//     GL.Ext.FramebufferTexture1D, GL.Ext.FramebufferTexture2D, GL.Ext.FramebufferTexture3D,
//     GL.Ext.FramebufferTextureFace, GL.Ext.GenerateMultiTexMipmap, GL.Ext.GenerateTextureMipmap,
//     GL.Ext.GetCompressedMultiTexImage, GL.Ext.GetCompressedTextureImage, GL.Ext.GetMultiTexImage,
//     GL.Ext.GetMultiTexLevelParameter, GL.Ext.GetMultiTexParameter, GL.Ext.GetMultiTexParameterI,
//     GL.Ext.GetTexParameterI, GL.Ext.GetTextureImage, GL.Ext.GetTextureLevelParameter,
//     GL.Ext.GetTextureParameter, GL.Ext.GetTextureParameterI, GL.Ext.MultiTexBuffer,
//     GL.Ext.MultiTexImage1D, GL.Ext.MultiTexImage2D, GL.Ext.MultiTexImage3D, GL.Ext.MultiTexParameter,
//     GL.Ext.MultiTexParameterI, GL.Ext.MultiTexRenderbuffer, GL.Ext.MultiTexSubImage1D,
//     GL.Ext.MultiTexSubImage2D, GL.Ext.MultiTexSubImage3D, GL.Ext.NamedFramebufferTexture1D,
//     GL.Ext.NamedFramebufferTexture2D, GL.Ext.NamedFramebufferTexture3D, GL.Ext.NamedFramebufferTextureFace,
//     GL.Ext.TexBuffer, GL.Ext.TexImage3D, GL.Ext.TexParameterI, GL.Ext.TexSubImage1D,
//     GL.Ext.TexSubImage2D, GL.Ext.TexSubImage3D, GL.Ext.TextureBuffer, GL.Ext.TextureImage1D,
//     GL.Ext.TextureImage2D, GL.Ext.TextureImage3D, GL.Ext.TextureParameter, GL.Ext.TextureParameterI,
//     GL.Ext.TextureRenderbuffer, GL.Ext.TextureSubImage1D, GL.Ext.TextureSubImage2D,
//     GL.Ext.TextureSubImage3D, GL.NV.TexRenderbuffer, GL.Sgis.DetailTexFunc, GL.Sgis.GetDetailTexFunc,
//     GL.Sgis.GetSharpenTexFunc, GL.Sgis.GetTexFilterFunc, GL.Sgis.SharpenTexFunc,
//     GL.Sgis.TexFilterFunc, GL.Sgis.TexImage4D, GL.Sgis.TexSubImage4D
enum class TextureTarget
{
    // Summary:
    //     Original was GL_TEXTURE_1D = 0x0DE0
    Texture1D = 3552,
    //
    // Summary:
    //     Original was GL_TEXTURE_2D = 0x0DE1
    Texture2D = 3553,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_1D = 0x8063
    ProxyTexture1D = 32867,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_2D = 0x8064
    ProxyTexture2D = 32868,
    //
    // Summary:
    //     Original was GL_TEXTURE_3D_EXT = 0x806F
    Texture3DExt = 32879,
    //
    // Summary:
    //     Original was GL_TEXTURE_3D = 0x806F
    Texture3D = 32879,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_3D_EXT = 0x8070
    ProxyTexture3DExt = 32880,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_3D = 0x8070
    ProxyTexture3D = 32880,
    //
    // Summary:
    //     Original was GL_DETAIL_TEXTURE_2D_SGIS = 0x8095
    DetailTexture2DSgis = 32917,
    //
    // Summary:
    //     Original was GL_TEXTURE_4D_SGIS = 0x8134
    Texture4DSgis = 33076,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_4D_SGIS = 0x8135
    ProxyTexture4DSgis = 33077,
    //
    // Summary:
    //     Original was GL_TEXTURE_MIN_LOD_SGIS = 0x813A
    TextureMinLodSgis = 33082,
    //
    // Summary:
    //     Original was GL_TEXTURE_MAX_LOD_SGIS = 0x813B
    TextureMaxLodSgis = 33083,
    //
    // Summary:
    //     Original was GL_TEXTURE_BASE_LEVEL_SGIS = 0x813C
    TextureBaseLevelSgis = 33084,
    //
    // Summary:
    //     Original was GL_TEXTURE_MAX_LEVEL_SGIS = 0x813D
    TextureMaxLevelSgis = 33085,
    //
    // Summary:
    //     Original was GL_TEXTURE_RECTANGLE_NV = 0x84F5
    TextureRectangleNv = 34037,
    //
    // Summary:
    //     Original was GL_TEXTURE_RECTANGLE_ARB = 0x84F5
    TextureRectangleArb = 34037,
    //
    // Summary:
    //     Original was GL_TEXTURE_RECTANGLE = 0x84F5
    TextureRectangle = 34037,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_RECTANGLE = 0x84F7
    ProxyTextureRectangle = 34039,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP = 0x8513
    TextureCubeMap = 34067,
    //
    // Summary:
    //     Original was GL_TEXTURE_BINDING_CUBE_MAP = 0x8514
    TextureBindingCubeMap = 34068,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515
    TextureCubeMapPositiveX = 34069,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516
    TextureCubeMapNegativeX = 34070,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517
    TextureCubeMapPositiveY = 34071,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518
    TextureCubeMapNegativeY = 34072,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519
    TextureCubeMapPositiveZ = 34073,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A
    TextureCubeMapNegativeZ = 34074,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_CUBE_MAP = 0x851B
    ProxyTextureCubeMap = 34075,
    //
    // Summary:
    //     Original was GL_TEXTURE_1D_ARRAY = 0x8C18
    Texture1DArray = 35864,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_1D_ARRAY = 0x8C19
    ProxyTexture1DArray = 35865,
    //
    // Summary:
    //     Original was GL_TEXTURE_2D_ARRAY = 0x8C1A
    Texture2DArray = 35866,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_2D_ARRAY = 0x8C1B
    ProxyTexture2DArray = 35867,
    //
    // Summary:
    //     Original was GL_TEXTURE_BUFFER = 0x8C2A
    TextureBuffer = 35882,
    //
    // Summary:
    //     Original was GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009
    TextureCubeMapArray = 36873,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B
    ProxyTextureCubeMapArray = 36875,
    //
    // Summary:
    //     Original was GL_TEXTURE_2D_MULTISAMPLE = 0x9100
    Texture2DMultisample = 37120,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_2D_MULTISAMPLE = 0x9101
    ProxyTexture2DMultisample = 37121,
    //
    // Summary:
    //     Original was GL_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102
    Texture2DMultisampleArray = 37122,
    //
    // Summary:
    //     Original was GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9103
    ProxyTexture2DMultisampleArray = 37123,
};


// Summary:
//     Used in GL.Arb.ActiveTexture, GL.Arb.ClientActiveTexture, GL.Arb.MultiTexCoord1,
//     GL.Arb.MultiTexCoord2, GL.Arb.MultiTexCoord3, GL.Arb.MultiTexCoord4, GL.ActiveTexture,
//     GL.ClientActiveTexture, GL.MultiTexCoord1, GL.MultiTexCoord2, GL.MultiTexCoord3,
//     GL.MultiTexCoord4, GL.MultiTexCoordP1, GL.MultiTexCoordP2, GL.MultiTexCoordP3,
//     GL.MultiTexCoordP4, GL.Ext.BindMultiTexture, GL.Ext.BindTexGenParameter,
//     GL.Ext.BindTextureUnitParameter, GL.Ext.CompressedMultiTexImage1D, GL.Ext.CompressedMultiTexImage2D,
//     GL.Ext.CompressedMultiTexImage3D, GL.Ext.CompressedMultiTexSubImage1D, GL.Ext.CompressedMultiTexSubImage2D,
//     GL.Ext.CompressedMultiTexSubImage3D, GL.Ext.CopyMultiTexImage1D, GL.Ext.CopyMultiTexImage2D,
//     GL.Ext.CopyMultiTexSubImage1D, GL.Ext.CopyMultiTexSubImage2D, GL.Ext.CopyMultiTexSubImage3D,
//     GL.Ext.GenerateMultiTexMipmap, GL.Ext.GetCompressedMultiTexImage, GL.Ext.GetMultiTexEnv,
//     GL.Ext.GetMultiTexGen, GL.Ext.GetMultiTexImage, GL.Ext.GetMultiTexLevelParameter,
//     GL.Ext.GetMultiTexParameter, GL.Ext.GetMultiTexParameterI, GL.Ext.MultiTexBuffer,
//     GL.Ext.MultiTexCoordPointer, GL.Ext.MultiTexEnv, GL.Ext.MultiTexGend, GL.Ext.MultiTexGen,
//     GL.Ext.MultiTexImage1D, GL.Ext.MultiTexImage2D, GL.Ext.MultiTexImage3D, GL.Ext.MultiTexParameter,
//     GL.Ext.MultiTexParameterI, GL.Ext.MultiTexRenderbuffer, GL.Ext.MultiTexSubImage1D,
//     GL.Ext.MultiTexSubImage2D, GL.Ext.MultiTexSubImage3D, GL.NV.MultiTexCoord1h,
//     GL.NV.MultiTexCoord2h, GL.NV.MultiTexCoord3h, GL.NV.MultiTexCoord4h
enum class TextureUnit
{
    // Summary:
    //     Original was GL_TEXTURE0 = 0x84C0
    Texture0 = 33984,
    //
    // Summary:
    //     Original was GL_TEXTURE1 = 0x84C1
    Texture1 = 33985,
    //
    // Summary:
    //     Original was GL_TEXTURE2 = 0x84C2
    Texture2 = 33986,
    //
    // Summary:
    //     Original was GL_TEXTURE3 = 0x84C3
    Texture3 = 33987,
    //
    // Summary:
    //     Original was GL_TEXTURE4 = 0x84C4
    Texture4 = 33988,
    //
    // Summary:
    //     Original was GL_TEXTURE5 = 0x84C5
    Texture5 = 33989,
    //
    // Summary:
    //     Original was GL_TEXTURE6 = 0x84C6
    Texture6 = 33990,
    //
    // Summary:
    //     Original was GL_TEXTURE7 = 0x84C7
    Texture7 = 33991,
    //
    // Summary:
    //     Original was GL_TEXTURE8 = 0x84C8
    Texture8 = 33992,
    //
    // Summary:
    //     Original was GL_TEXTURE9 = 0x84C9
    Texture9 = 33993,
    //
    // Summary:
    //     Original was GL_TEXTURE10 = 0x84CA
    Texture10 = 33994,
    //
    // Summary:
    //     Original was GL_TEXTURE11 = 0x84CB
    Texture11 = 33995,
    //
    // Summary:
    //     Original was GL_TEXTURE12 = 0x84CC
    Texture12 = 33996,
    //
    // Summary:
    //     Original was GL_TEXTURE13 = 0x84CD
    Texture13 = 33997,
    //
    // Summary:
    //     Original was GL_TEXTURE14 = 0x84CE
    Texture14 = 33998,
    //
    // Summary:
    //     Original was GL_TEXTURE15 = 0x84CF
    Texture15 = 33999,
    //
    // Summary:
    //     Original was GL_TEXTURE16 = 0x84D0
    Texture16 = 34000,
    //
    // Summary:
    //     Original was GL_TEXTURE17 = 0x84D1
    Texture17 = 34001,
    //
    // Summary:
    //     Original was GL_TEXTURE18 = 0x84D2
    Texture18 = 34002,
    //
    // Summary:
    //     Original was GL_TEXTURE19 = 0x84D3
    Texture19 = 34003,
    //
    // Summary:
    //     Original was GL_TEXTURE20 = 0x84D4
    Texture20 = 34004,
    //
    // Summary:
    //     Original was GL_TEXTURE21 = 0x84D5
    Texture21 = 34005,
    //
    // Summary:
    //     Original was GL_TEXTURE22 = 0x84D6
    Texture22 = 34006,
    //
    // Summary:
    //     Original was GL_TEXTURE23 = 0x84D7
    Texture23 = 34007,
    //
    // Summary:
    //     Original was GL_TEXTURE24 = 0x84D8
    Texture24 = 34008,
    //
    // Summary:
    //     Original was GL_TEXTURE25 = 0x84D9
    Texture25 = 34009,
    //
    // Summary:
    //     Original was GL_TEXTURE26 = 0x84DA
    Texture26 = 34010,
    //
    // Summary:
    //     Original was GL_TEXTURE27 = 0x84DB
    Texture27 = 34011,
    //
    // Summary:
    //     Original was GL_TEXTURE28 = 0x84DC
    Texture28 = 34012,
    //
    // Summary:
    //     Original was GL_TEXTURE29 = 0x84DD
    Texture29 = 34013,
    //
    // Summary:
    //     Original was GL_TEXTURE30 = 0x84DE
    Texture30 = 34014,
    //
    // Summary:
    //     Original was GL_TEXTURE31 = 0x84DF
    Texture31 = 34015,
};

// Summary:
//     Used in GL.Arb.CompressedTexSubImage1D, GL.Arb.CompressedTexSubImage2D, GL.Arb.CompressedTexSubImage3D,
//     GL.ColorSubTable, GL.ColorTable, GL.CompressedTexSubImage1D, GL.CompressedTexSubImage2D,
//     GL.CompressedTexSubImage3D, GL.ConvolutionFilter1D, GL.ConvolutionFilter2D,
//     GL.DrawPixels, GL.GetColorTable, GL.GetConvolutionFilter, GL.GetHistogram,
//     GL.GetMinmax, GL.GetSeparableFilter, GL.GetTexImage, GL.ReadPixels, GL.SeparableFilter2D,
//     GL.TexImage1D, GL.TexImage2D, GL.TexImage3D, GL.TexSubImage1D, GL.TexSubImage2D,
//     GL.TexSubImage3D, GL.Ext.ColorSubTable, GL.Ext.ColorTable, GL.Ext.CompressedMultiTexSubImage1D,
//     GL.Ext.CompressedMultiTexSubImage2D, GL.Ext.CompressedMultiTexSubImage3D,
//     GL.Ext.CompressedTextureSubImage1D, GL.Ext.CompressedTextureSubImage2D, GL.Ext.CompressedTextureSubImage3D,
//     GL.Ext.ConvolutionFilter1D, GL.Ext.ConvolutionFilter2D, GL.Ext.GetColorTable,
//     GL.Ext.GetConvolutionFilter, GL.Ext.GetHistogram, GL.Ext.GetMinmax, GL.Ext.GetMultiTexImage,
//     GL.Ext.GetSeparableFilter, GL.Ext.GetTextureImage, GL.Ext.MultiTexImage1D,
//     GL.Ext.MultiTexImage2D, GL.Ext.MultiTexImage3D, GL.Ext.MultiTexSubImage1D,
//     GL.Ext.MultiTexSubImage2D, GL.Ext.MultiTexSubImage3D, GL.Ext.SeparableFilter2D,
//     GL.Ext.TexImage3D, GL.Ext.TexSubImage1D, GL.Ext.TexSubImage2D, GL.Ext.TexSubImage3D,
//     GL.Ext.TextureImage1D, GL.Ext.TextureImage2D, GL.Ext.TextureImage3D, GL.Ext.TextureSubImage1D,
//     GL.Ext.TextureSubImage2D, GL.Ext.TextureSubImage3D, GL.Sgi.ColorTable, GL.Sgi.GetColorTable,
//     GL.Sgis.TexImage4D, GL.Sgis.TexSubImage4D
enum class PixelFormat
{
    // Summary:
    //     Original was GL_COLOR_INDEX = 0x1900
    ColorIndex = 6400,
    //
    // Summary:
    //     Original was GL_STENCIL_INDEX = 0x1901
    StencilIndex = 6401,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT = 0x1902
    DepthComponent = 6402,
    //
    // Summary:
    //     Original was GL_RED = 0x1903
    Red = 6403,
    //
    // Summary:
    //     Original was GL_GREEN = 0x1904
    Green = 6404,
    //
    // Summary:
    //     Original was GL_BLUE = 0x1905
    Blue = 6405,
    //
    // Summary:
    //     Original was GL_ALPHA = 0x1906
    Alpha = 6406,
    //
    // Summary:
    //     Original was GL_RGB = 0x1907
    Rgb = 6407,
    //
    // Summary:
    //     Original was GL_RGBA = 0x1908
    Rgba = 6408,
    //
    // Summary:
    //     Original was GL_LUMINANCE = 0x1909
    Luminance = 6409,
    //
    // Summary:
    //     Original was GL_LUMINANCE_ALPHA = 0x190A
    LuminanceAlpha = 6410,
    //
    // Summary:
    //     Original was GL_ABGR_EXT = 0x8000
    AbgrExt = 32768,
    //
    // Summary:
    //     Original was GL_CMYK_EXT = 0x800C
    CmykExt = 32780,
    //
    // Summary:
    //     Original was GL_CMYKA_EXT = 0x800D
    CmykaExt = 32781,
    //
    // Summary:
    //     Original was GL_BGR = 0x80E0
    Bgr = 32992,
    //
    // Summary:
    //     Original was GL_BGRA = 0x80E1
    Bgra = 32993,
    //
    // Summary:
    //     Original was GL_YCRCB_422_SGIX = 0x81BB
    Ycrcb422Sgix = 33211,
    //
    // Summary:
    //     Original was GL_YCRCB_444_SGIX = 0x81BC
    Ycrcb444Sgix = 33212,
    //
    // Summary:
    //     Original was GL_RG = 0x8227
    Rg = 33319,
    //
    // Summary:
    //     Original was GL_RG_INTEGER = 0x8228
    RgInteger = 33320,
    //
    // Summary:
    //     Original was GL_DEPTH_STENCIL = 0x84F9
    DepthStencil = 34041,
    //
    // Summary:
    //     Original was GL_RED_INTEGER = 0x8D94
    RedInteger = 36244,
    //
    // Summary:
    //     Original was GL_GREEN_INTEGER = 0x8D95
    GreenInteger = 36245,
    //
    // Summary:
    //     Original was GL_BLUE_INTEGER = 0x8D96
    BlueInteger = 36246,
    //
    // Summary:
    //     Original was GL_ALPHA_INTEGER = 0x8D97
    AlphaInteger = 36247,
    //
    // Summary:
    //     Original was GL_RGB_INTEGER = 0x8D98
    RgbInteger = 36248,
    //
    // Summary:
    //     Original was GL_RGBA_INTEGER = 0x8D99
    RgbaInteger = 36249,
    //
    // Summary:
    //     Original was GL_BGR_INTEGER = 0x8D9A
    BgrInteger = 36250,
    //
    // Summary:
    //     Original was GL_BGRA_INTEGER = 0x8D9B
    BgraInteger = 36251,
};

// Summary:
//     Used in GL.Arb.CompressedTexImage1D, GL.Arb.CompressedTexImage2D, GL.Arb.CompressedTexImage3D,
//     GL.ColorTable, GL.CompressedTexImage1D, GL.CompressedTexImage2D, GL.CompressedTexImage3D,
//     GL.ConvolutionFilter1D, GL.ConvolutionFilter2D, GL.CopyColorTable, GL.CopyConvolutionFilter1D,
//     GL.CopyConvolutionFilter2D, GL.CopyTexImage1D, GL.CopyTexImage2D, GL.Histogram,
//     GL.Minmax, GL.SeparableFilter2D, GL.TexImage1D, GL.TexImage2D, GL.TexImage2DMultisample,
//     GL.TexImage3D, GL.TexImage3DMultisample, GL.Ext.ColorTable, GL.Ext.ConvolutionFilter1D,
//     GL.Ext.ConvolutionFilter2D, GL.Ext.CopyConvolutionFilter1D, GL.Ext.CopyConvolutionFilter2D,
//     GL.Ext.CopyTexImage1D, GL.Ext.CopyTexImage2D, GL.Ext.Histogram, GL.Ext.Minmax,
//     GL.Ext.NamedRenderbufferStorage, GL.Ext.NamedRenderbufferStorageMultisampleCoverage,
//     GL.Ext.NamedRenderbufferStorageMultisample, GL.Ext.SeparableFilter2D, GL.Ext.TexImage3D,
//     GL.NV.RenderbufferStorageMultisampleCoverage, GL.Sgi.ColorTable, GL.Sgi.CopyColorTable,
//     GL.Sgis.TexImage4D
enum class PixelInternalFormat
{
    // Summary:
    //     Original was GL_ONE = 1
    One = 1,
    //
    // Summary:
    //     Original was GL_TWO = 2
    Two = 2,
    //
    // Summary:
    //     Original was GL_THREE = 3
    Three = 3,
    //
    // Summary:
    //     Original was GL_FOUR = 4
    Four = 4,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT = 0x1902
    DepthComponent = 6402,
    //
    // Summary:
    //     Original was GL_ALPHA = 0x1906
    Alpha = 6406,
    //
    // Summary:
    //     Original was GL_RGB = 0x1907
    Rgb = 6407,
    //
    // Summary:
    //     Original was GL_RGBA = 0x1908
    Rgba = 6408,
    //
    // Summary:
    //     Original was GL_LUMINANCE = 0x1909
    Luminance = 6409,
    //
    // Summary:
    //     Original was GL_LUMINANCE_ALPHA = 0x190A
    LuminanceAlpha = 6410,
    //
    // Summary:
    //     Original was GL_R3_G3_B2 = 0x2A10
    R3G3B2 = 10768,
    //
    // Summary:
    //     Original was GL_ALPHA4 = 0x803B
    Alpha4 = 32827,
    //
    // Summary:
    //     Original was GL_ALPHA8 = 0x803C
    Alpha8 = 32828,
    //
    // Summary:
    //     Original was GL_ALPHA12 = 0x803D
    Alpha12 = 32829,
    //
    // Summary:
    //     Original was GL_ALPHA16 = 0x803E
    Alpha16 = 32830,
    //
    // Summary:
    //     Original was GL_LUMINANCE4 = 0x803F
    Luminance4 = 32831,
    //
    // Summary:
    //     Original was GL_LUMINANCE8 = 0x8040
    Luminance8 = 32832,
    //
    // Summary:
    //     Original was GL_LUMINANCE12 = 0x8041
    Luminance12 = 32833,
    //
    // Summary:
    //     Original was GL_LUMINANCE16 = 0x8042
    Luminance16 = 32834,
    //
    // Summary:
    //     Original was GL_LUMINANCE4_ALPHA4 = 0x8043
    Luminance4Alpha4 = 32835,
    //
    // Summary:
    //     Original was GL_LUMINANCE6_ALPHA2 = 0x8044
    Luminance6Alpha2 = 32836,
    //
    // Summary:
    //     Original was GL_LUMINANCE8_ALPHA8 = 0x8045
    Luminance8Alpha8 = 32837,
    //
    // Summary:
    //     Original was GL_LUMINANCE12_ALPHA4 = 0x8046
    Luminance12Alpha4 = 32838,
    //
    // Summary:
    //     Original was GL_LUMINANCE12_ALPHA12 = 0x8047
    Luminance12Alpha12 = 32839,
    //
    // Summary:
    //     Original was GL_LUMINANCE16_ALPHA16 = 0x8048
    Luminance16Alpha16 = 32840,
    //
    // Summary:
    //     Original was GL_INTENSITY = 0x8049
    Intensity = 32841,
    //
    // Summary:
    //     Original was GL_INTENSITY4 = 0x804A
    Intensity4 = 32842,
    //
    // Summary:
    //     Original was GL_INTENSITY8 = 0x804B
    Intensity8 = 32843,
    //
    // Summary:
    //     Original was GL_INTENSITY12 = 0x804C
    Intensity12 = 32844,
    //
    // Summary:
    //     Original was GL_INTENSITY16 = 0x804D
    Intensity16 = 32845,
    //
    // Summary:
    //     Original was GL_RGB2_EXT = 0x804E
    Rgb2Ext = 32846,
    //
    // Summary:
    //     Original was GL_RGB4 = 0x804F
    Rgb4 = 32847,
    //
    // Summary:
    //     Original was GL_RGB5 = 0x8050
    Rgb5 = 32848,
    //
    // Summary:
    //     Original was GL_RGB8 = 0x8051
    Rgb8 = 32849,
    //
    // Summary:
    //     Original was GL_RGB10 = 0x8052
    Rgb10 = 32850,
    //
    // Summary:
    //     Original was GL_RGB12 = 0x8053
    Rgb12 = 32851,
    //
    // Summary:
    //     Original was GL_RGB16 = 0x8054
    Rgb16 = 32852,
    //
    // Summary:
    //     Original was GL_RGBA2 = 0x8055
    Rgba2 = 32853,
    //
    // Summary:
    //     Original was GL_RGBA4 = 0x8056
    Rgba4 = 32854,
    //
    // Summary:
    //     Original was GL_RGB5_A1 = 0x8057
    Rgb5A1 = 32855,
    //
    // Summary:
    //     Original was GL_RGBA8 = 0x8058
    Rgba8 = 32856,
    //
    // Summary:
    //     Original was GL_RGB10_A2 = 0x8059
    Rgb10A2 = 32857,
    //
    // Summary:
    //     Original was GL_RGBA12 = 0x805A
    Rgba12 = 32858,
    //
    // Summary:
    //     Original was GL_RGBA16 = 0x805B
    Rgba16 = 32859,
    //
    // Summary:
    //     Original was GL_DUAL_ALPHA4_SGIS = 0x8110
    DualAlpha4Sgis = 33040,
    //
    // Summary:
    //     Original was GL_DUAL_ALPHA8_SGIS = 0x8111
    DualAlpha8Sgis = 33041,
    //
    // Summary:
    //     Original was GL_DUAL_ALPHA12_SGIS = 0x8112
    DualAlpha12Sgis = 33042,
    //
    // Summary:
    //     Original was GL_DUAL_ALPHA16_SGIS = 0x8113
    DualAlpha16Sgis = 33043,
    //
    // Summary:
    //     Original was GL_DUAL_LUMINANCE4_SGIS = 0x8114
    DualLuminance4Sgis = 33044,
    //
    // Summary:
    //     Original was GL_DUAL_LUMINANCE8_SGIS = 0x8115
    DualLuminance8Sgis = 33045,
    //
    // Summary:
    //     Original was GL_DUAL_LUMINANCE12_SGIS = 0x8116
    DualLuminance12Sgis = 33046,
    //
    // Summary:
    //     Original was GL_DUAL_LUMINANCE16_SGIS = 0x8117
    DualLuminance16Sgis = 33047,
    //
    // Summary:
    //     Original was GL_DUAL_INTENSITY4_SGIS = 0x8118
    DualIntensity4Sgis = 33048,
    //
    // Summary:
    //     Original was GL_DUAL_INTENSITY8_SGIS = 0x8119
    DualIntensity8Sgis = 33049,
    //
    // Summary:
    //     Original was GL_DUAL_INTENSITY12_SGIS = 0x811A
    DualIntensity12Sgis = 33050,
    //
    // Summary:
    //     Original was GL_DUAL_INTENSITY16_SGIS = 0x811B
    DualIntensity16Sgis = 33051,
    //
    // Summary:
    //     Original was GL_DUAL_LUMINANCE_ALPHA4_SGIS = 0x811C
    DualLuminanceAlpha4Sgis = 33052,
    //
    // Summary:
    //     Original was GL_DUAL_LUMINANCE_ALPHA8_SGIS = 0x811D
    DualLuminanceAlpha8Sgis = 33053,
    //
    // Summary:
    //     Original was GL_QUAD_ALPHA4_SGIS = 0x811E
    QuadAlpha4Sgis = 33054,
    //
    // Summary:
    //     Original was GL_QUAD_ALPHA8_SGIS = 0x811F
    QuadAlpha8Sgis = 33055,
    //
    // Summary:
    //     Original was GL_QUAD_LUMINANCE4_SGIS = 0x8120
    QuadLuminance4Sgis = 33056,
    //
    // Summary:
    //     Original was GL_QUAD_LUMINANCE8_SGIS = 0x8121
    QuadLuminance8Sgis = 33057,
    //
    // Summary:
    //     Original was GL_QUAD_INTENSITY4_SGIS = 0x8122
    QuadIntensity4Sgis = 33058,
    //
    // Summary:
    //     Original was GL_QUAD_INTENSITY8_SGIS = 0x8123
    QuadIntensity8Sgis = 33059,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT16_SGIX = 0x81A5
    DepthComponent16Sgix = 33189,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT16 = 0x81a5
    DepthComponent16 = 33189,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT24_SGIX = 0x81A6
    DepthComponent24Sgix = 33190,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT24 = 0x81a6
    DepthComponent24 = 33190,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT32_SGIX = 0x81A7
    DepthComponent32Sgix = 33191,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT32 = 0x81a7
    DepthComponent32 = 33191,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RED = 0x8225
    CompressedRed = 33317,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RG = 0x8226
    CompressedRg = 33318,
    //
    // Summary:
    //     Original was GL_R8 = 0x8229
    R8 = 33321,
    //
    // Summary:
    //     Original was GL_R16 = 0x822A
    R16 = 33322,
    //
    // Summary:
    //     Original was GL_RG8 = 0x822B
    Rg8 = 33323,
    //
    // Summary:
    //     Original was GL_RG16 = 0x822C
    Rg16 = 33324,
    //
    // Summary:
    //     Original was GL_R16F = 0x822D
    R16f = 33325,
    //
    // Summary:
    //     Original was GL_R32F = 0x822E
    R32f = 33326,
    //
    // Summary:
    //     Original was GL_RG16F = 0x822F
    Rg16f = 33327,
    //
    // Summary:
    //     Original was GL_RG32F = 0x8230
    Rg32f = 33328,
    //
    // Summary:
    //     Original was GL_R8I = 0x8231
    R8i = 33329,
    //
    // Summary:
    //     Original was GL_R8UI = 0x8232
    R8ui = 33330,
    //
    // Summary:
    //     Original was GL_R16I = 0x8233
    R16i = 33331,
    //
    // Summary:
    //     Original was GL_R16UI = 0x8234
    R16ui = 33332,
    //
    // Summary:
    //     Original was GL_R32I = 0x8235
    R32i = 33333,
    //
    // Summary:
    //     Original was GL_R32UI = 0x8236
    R32ui = 33334,
    //
    // Summary:
    //     Original was GL_RG8I = 0x8237
    Rg8i = 33335,
    //
    // Summary:
    //     Original was GL_RG8UI = 0x8238
    Rg8ui = 33336,
    //
    // Summary:
    //     Original was GL_RG16I = 0x8239
    Rg16i = 33337,
    //
    // Summary:
    //     Original was GL_RG16UI = 0x823A
    Rg16ui = 33338,
    //
    // Summary:
    //     Original was GL_RG32I = 0x823B
    Rg32i = 33339,
    //
    // Summary:
    //     Original was GL_RG32UI = 0x823C
    Rg32ui = 33340,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RGB_S3TC_DXT1_EXT = 0x83F0
    CompressedRgbS3tcDxt1Ext = 33776,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = 0x83F1
    CompressedRgbaS3tcDxt1Ext = 33777,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = 0x83F2
    CompressedRgbaS3tcDxt3Ext = 33778,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = 0x83F3
    CompressedRgbaS3tcDxt5Ext = 33779,
    //
    // Summary:
    //     Original was GL_COMPRESSED_ALPHA = 0x84E9
    CompressedAlpha = 34025,
    //
    // Summary:
    //     Original was GL_COMPRESSED_LUMINANCE = 0x84EA
    CompressedLuminance = 34026,
    //
    // Summary:
    //     Original was GL_COMPRESSED_LUMINANCE_ALPHA = 0x84EB
    CompressedLuminanceAlpha = 34027,
    //
    // Summary:
    //     Original was GL_COMPRESSED_INTENSITY = 0x84EC
    CompressedIntensity = 34028,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RGB = 0x84ED
    CompressedRgb = 34029,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RGBA = 0x84EE
    CompressedRgba = 34030,
    //
    // Summary:
    //     Original was GL_DEPTH_STENCIL = 0x84F9
    DepthStencil = 34041,
    //
    // Summary:
    //     Original was GL_RGBA32F = 0x8814
    Rgba32f = 34836,
    //
    // Summary:
    //     Original was GL_RGB32F = 0x8815
    Rgb32f = 34837,
    //
    // Summary:
    //     Original was GL_RGBA16F = 0x881A
    Rgba16f = 34842,
    //
    // Summary:
    //     Original was GL_RGB16F = 0x881B
    Rgb16f = 34843,
    //
    // Summary:
    //     Original was GL_DEPTH24_STENCIL8 = 0x88F0
    Depth24Stencil8 = 35056,
    //
    // Summary:
    //     Original was GL_R11F_G11F_B10F = 0x8C3A
    R11fG11fB10f = 35898,
    //
    // Summary:
    //     Original was GL_RGB9_E5 = 0x8C3D
    Rgb9E5 = 35901,
    //
    // Summary:
    //     Original was GL_SRGB = 0x8C40
    Srgb = 35904,
    //
    // Summary:
    //     Original was GL_SRGB8 = 0x8C41
    Srgb8 = 35905,
    //
    // Summary:
    //     Original was GL_SRGB_ALPHA = 0x8C42
    SrgbAlpha = 35906,
    //
    // Summary:
    //     Original was GL_SRGB8_ALPHA8 = 0x8C43
    Srgb8Alpha8 = 35907,
    //
    // Summary:
    //     Original was GL_SLUMINANCE_ALPHA = 0x8C44
    SluminanceAlpha = 35908,
    //
    // Summary:
    //     Original was GL_SLUMINANCE8_ALPHA8 = 0x8C45
    Sluminance8Alpha8 = 35909,
    //
    // Summary:
    //     Original was GL_SLUMINANCE = 0x8C46
    Sluminance = 35910,
    //
    // Summary:
    //     Original was GL_SLUMINANCE8 = 0x8C47
    Sluminance8 = 35911,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SRGB = 0x8C48
    CompressedSrgb = 35912,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SRGB_ALPHA = 0x8C49
    CompressedSrgbAlpha = 35913,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SLUMINANCE = 0x8C4A
    CompressedSluminance = 35914,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SLUMINANCE_ALPHA = 0x8C4B
    CompressedSluminanceAlpha = 35915,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SRGB_S3TC_DXT1_EXT = 0x8C4C
    CompressedSrgbS3tcDxt1Ext = 35916,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT = 0x8C4D
    CompressedSrgbAlphaS3tcDxt1Ext = 35917,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT = 0x8C4E
    CompressedSrgbAlphaS3tcDxt3Ext = 35918,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT = 0x8C4F
    CompressedSrgbAlphaS3tcDxt5Ext = 35919,
    //
    // Summary:
    //     Original was GL_DEPTH_COMPONENT32F = 0x8CAC
    DepthComponent32f = 36012,
    //
    // Summary:
    //     Original was GL_DEPTH32F_STENCIL8 = 0x8CAD
    Depth32fStencil8 = 36013,
    //
    // Summary:
    //     Original was GL_RGBA32UI = 0x8D70
    Rgba32ui = 36208,
    //
    // Summary:
    //     Original was GL_RGB32UI = 0x8D71
    Rgb32ui = 36209,
    //
    // Summary:
    //     Original was GL_RGBA16UI = 0x8D76
    Rgba16ui = 36214,
    //
    // Summary:
    //     Original was GL_RGB16UI = 0x8D77
    Rgb16ui = 36215,
    //
    // Summary:
    //     Original was GL_RGBA8UI = 0x8D7C
    Rgba8ui = 36220,
    //
    // Summary:
    //     Original was GL_RGB8UI = 0x8D7D
    Rgb8ui = 36221,
    //
    // Summary:
    //     Original was GL_RGBA32I = 0x8D82
    Rgba32i = 36226,
    //
    // Summary:
    //     Original was GL_RGB32I = 0x8D83
    Rgb32i = 36227,
    //
    // Summary:
    //     Original was GL_RGBA16I = 0x8D88
    Rgba16i = 36232,
    //
    // Summary:
    //     Original was GL_RGB16I = 0x8D89
    Rgb16i = 36233,
    //
    // Summary:
    //     Original was GL_RGBA8I = 0x8D8E
    Rgba8i = 36238,
    //
    // Summary:
    //     Original was GL_RGB8I = 0x8D8F
    Rgb8i = 36239,
    //
    // Summary:
    //     Original was GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD
    Float32UnsignedInt248Rev = 36269,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RED_RGTC1 = 0x8DBB
    CompressedRedRgtc1 = 36283,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SIGNED_RED_RGTC1 = 0x8DBC
    CompressedSignedRedRgtc1 = 36284,
    //
    // Summary:
    //     Original was GL_COMPRESSED_RG_RGTC2 = 0x8DBD
    CompressedRgRgtc2 = 36285,
    //
    // Summary:
    //     Original was GL_COMPRESSED_SIGNED_RG_RGTC2 = 0x8DBE
    CompressedSignedRgRgtc2 = 36286,
    //
    // Summary:
    //     Original was GL_RGB10_A2UI = 0x906F
    Rgb10A2ui = 36975,
};

// Summary:
//     Used in GL.ColorSubTable, GL.ColorTable, GL.ConvolutionFilter1D, GL.ConvolutionFilter2D,
//     GL.DrawPixels, GL.GetColorTable, GL.GetConvolutionFilter, GL.GetHistogram,
//     GL.GetMinmax, GL.GetSeparableFilter, GL.GetTexImage, GL.ReadPixels, GL.SeparableFilter2D,
//     GL.TexImage1D, GL.TexImage2D, GL.TexImage3D, GL.TexSubImage1D, GL.TexSubImage2D,
//     GL.TexSubImage3D, GL.Ext.ColorSubTable, GL.Ext.ColorTable, GL.Ext.ConvolutionFilter1D,
//     GL.Ext.ConvolutionFilter2D, GL.Ext.GetColorTable, GL.Ext.GetConvolutionFilter,
//     GL.Ext.GetHistogram, GL.Ext.GetMinmax, GL.Ext.GetMultiTexImage, GL.Ext.GetSeparableFilter,
//     GL.Ext.GetTextureImage, GL.Ext.MultiTexImage1D, GL.Ext.MultiTexImage2D, GL.Ext.MultiTexImage3D,
//     GL.Ext.MultiTexSubImage1D, GL.Ext.MultiTexSubImage2D, GL.Ext.MultiTexSubImage3D,
//     GL.Ext.SeparableFilter2D, GL.Ext.TexImage3D, GL.Ext.TexSubImage1D, GL.Ext.TexSubImage2D,
//     GL.Ext.TexSubImage3D, GL.Ext.TextureImage1D, GL.Ext.TextureImage2D, GL.Ext.TextureImage3D,
//     GL.Ext.TextureSubImage1D, GL.Ext.TextureSubImage2D, GL.Ext.TextureSubImage3D,
//     GL.Sgi.ColorTable, GL.Sgi.GetColorTable, GL.Sgis.TexImage4D, GL.Sgis.TexSubImage4D
enum class PixelType
{
    // Summary:
    //     Original was GL_BYTE = 0x1400
    Byte = 5120,
    //
    // Summary:
    //     Original was GL_UNSIGNED_BYTE = 0x1401
    UnsignedByte = 5121,
    //
    // Summary:
    //     Original was GL_SHORT = 0x1402
    Short = 5122,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT = 0x1403
    UnsignedShort = 5123,
    //
    // Summary:
    //     Original was GL_INT = 0x1404
    Int = 5124,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT = 0x1405
    UnsignedInt = 5125,
    //
    // Summary:
    //     Original was GL_FLOAT = 0x1406
    Float = 5126,
    //
    // Summary:
    //     Original was GL_HALF_FLOAT = 0x140B
    HalfFloat = 5131,
    //
    // Summary:
    //     Original was GL_BITMAP = 0x1A00
    Bitmap = 6656,
    //
    // Summary:
    //     Original was GL_UNSIGNED_BYTE_3_3_2_EXT = 0x8032
    UnsignedByte332Ext = 32818,
    //
    // Summary:
    //     Original was GL_UNSIGNED_BYTE_3_3_2 = 0x8032
    UnsignedByte332 = 32818,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_4_4_4_4_EXT = 0x8033
    UnsignedShort4444Ext = 32819,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033
    UnsignedShort4444 = 32819,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034
    UnsignedShort5551 = 32820,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_5_5_5_1_EXT = 0x8034
    UnsignedShort5551Ext = 32820,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_8_8_8_8 = 0x8035
    UnsignedInt8888 = 32821,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_8_8_8_8_EXT = 0x8035
    UnsignedInt8888Ext = 32821,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_10_10_10_2 = 0x8036
    UnsignedInt1010102 = 32822,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_10_10_10_2_EXT = 0x8036
    UnsignedInt1010102Ext = 32822,
    //
    // Summary:
    //     Original was GL_UNSIGNED_BYTE_2_3_3_REVERSED = 0x8362
    UnsignedByte233Reversed = 33634,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_5_6_5 = 0x8363
    UnsignedShort565 = 33635,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_5_6_5_REVERSED = 0x8364
    UnsignedShort565Reversed = 33636,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_4_4_4_4_REVERSED = 0x8365
    UnsignedShort4444Reversed = 33637,
    //
    // Summary:
    //     Original was GL_UNSIGNED_SHORT_1_5_5_5_REVERSED = 0x8366
    UnsignedShort1555Reversed = 33638,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_8_8_8_8_REVERSED = 0x8367
    UnsignedInt8888Reversed = 33639,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_2_10_10_10_REVERSED = 0x8368
    UnsignedInt2101010Reversed = 33640,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_24_8 = 0x84FA
    UnsignedInt248 = 34042,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B
    UnsignedInt10F11F11FRev = 35899,
    //
    // Summary:
    //     Original was GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E
    UnsignedInt5999Rev = 35902,
    //
    // Summary:
    //     Original was GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD
    Float32UnsignedInt248Rev = 36269,
};


#endif
