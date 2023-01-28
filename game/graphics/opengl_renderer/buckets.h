#pragma once
/*!
 * Matches the bucket-id enum in GOAL
 */
namespace jak1 {
enum class BucketId {
  BUCKET0 = 0,
  BUCKET1 = 1,
  // 2
  SKY_DRAW = 3,
  OCEAN_MID_AND_FAR = 4,
  TFRAG_TEX_LEVEL0 = 5,
  TFRAG_LEVEL0 = 6,
  TFRAG_NEAR_LEVEL0 = 7,
  TIE_NEAR_LEVEL0 = 8,
  TIE_LEVEL0 = 9,
  MERC_TFRAG_TEX_LEVEL0 = 10,
  GENERIC_TFRAG_TEX_LEVEL0 = 11,
  TFRAG_TEX_LEVEL1 = 12,
  TFRAG_LEVEL1 = 13,
  TFRAG_NEAR_LEVEL1 = 14,
  TIE_NEAR_LEVEL1 = 15,
  TIE_LEVEL1 = 16,
  MERC_TFRAG_TEX_LEVEL1 = 17,
  GENERIC_TFRAG_TEX_LEVEL1 = 18,
  SHRUB_TEX_LEVEL0 = 19,
  SHRUB_NORMAL_LEVEL0 = 20,
  // 21
  SHRUB_BILLBOARD_LEVEL0 = 22,
  SHRUB_TRANS_LEVEL0 = 23,
  SHRUB_GENERIC_LEVEL0 = 24,
  SHRUB_TEX_LEVEL1 = 25,
  SHRUB_NORMAL_LEVEL1 = 26,
  // 27
  SHRUB_BILLBOARD_LEVEL1 = 28,
  SHRUB_TRANS_LEVEL1 = 29,
  SHRUB_GENERIC_LEVEL1 = 30,
  ALPHA_TEX_LEVEL0 = 31,
  TFRAG_TRANS0_AND_SKY_BLEND_LEVEL0 = 32,
  // 33
  TFRAG_DIRT_LEVEL0 = 34,
  // 35
  TFRAG_ICE_LEVEL0 = 36,
  // 37
  ALPHA_TEX_LEVEL1 = 38,
  TFRAG_TRANS1_AND_SKY_BLEND_LEVEL1 = 39,
  // 40
  TFRAG_DIRT_LEVEL1 = 41,
  // 42
  TFRAG_ICE_LEVEL1 = 43,
  // 44
  MERC_AFTER_ALPHA = 45,
  GENERIC_ALPHA = 46,
  SHADOW = 47,
  PRIS_TEX_LEVEL0 = 48,
  MERC_PRIS_LEVEL0 = 49,
  GENERIC_PRIS_LEVEL0 = 50,
  PRIS_TEX_LEVEL1 = 51,
  MERC_PRIS_LEVEL1 = 52,
  GENERIC_PRIS_LEVEL1 = 53,
  MERC_EYES_AFTER_PRIS = 54,
  MERC_AFTER_PRIS = 55,
  GENERIC_PRIS = 56,
  WATER_TEX_LEVEL0 = 57,
  MERC_WATER_LEVEL0 = 58,
  GENERIC_WATER_LEVEL0 = 59,
  WATER_TEX_LEVEL1 = 60,
  MERC_WATER_LEVEL1 = 61,
  GENERIC_WATER_LEVEL1 = 62,
  OCEAN_NEAR = 63,
  DEPTH_CUE = 64,
  PRE_SPRITE_TEX = 65,  // maybe it's just common textures?
  SPRITE = 66,
  DEBUG = 67,
  DEBUG_NO_ZBUF = 68,
  SUBTITLE = 69,
  MAX_BUCKETS = 70
};
}

namespace jak2 {

enum class BucketId {
  SPECIAL_BUCKET_2 = 2,
  TEX_LCOM_SKY_PRE = 4,
  SKY_DRAW = 5,
  OCEAN_MID_FAR = 6,
  TEX_L0_TFRAG = 7,
  TFRAG_L0_TFRAG = 8,
  TIE_L0_TFRAG = 9,
  MERC_L0_TFRAG = 14,
  TEX_L1_TFRAG = 18,
  TFRAG_L1_TFRAG = 19,
  TIE_L1_TFRAG = 20,
  MERC_L1_TFRAG = 25,
  TEX_L2_TFRAG = 29,
  TFRAG_L2_TFRAG = 30,
  TIE_L2_TFRAG = 31,
  MERC_L2_TFRAG = 36,
  TEX_L3_TFRAG = 40,
  TFRAG_L3_TFRAG = 41,
  TIE_L3_TFRAG = 42,
  MERC_L3_TFRAG = 47,
  TEX_L4_TFRAG = 51,
  TFRAG_L4_TFRAG = 52,
  TIE_L4_TFRAG = 53,
  MERC_L4_TFRAG = 58,
  TEX_L5_TFRAG = 62,
  TFRAG_L5_TFRAG = 63,
  TIE_L5_TFRAG = 64,
  TEX_L0_SHRUB = 73,
  SHRUB_L0_SHRUB = 74,
  MERC_L0_SHRUB = 79,
  TEX_L1_SHRUB = 82,
  SHRUB_L1_SHRUB = 83,
  TEX_L2_SHRUB = 91,
  SHRUB_L2_SHRUB = 92,
  TEX_L3_SHRUB = 100,
  SHRUB_L3_SHRUB = 101,
  TEX_L4_SHRUB = 109,
  SHRUB_L4_SHRUB = 110,
  TEX_L5_SHRUB = 118,
  SHRUB_L5_SHRUB = 119,
  TEX_L0_ALPHA = 127,
  TFRAG_T_L0_ALPHA = 128,
  MERC_L0_ALPHA = 131,
  TEX_L1_ALPHA = 137,
  MERC_L1_ALPHA = 141,
  TFRAG_T_L1_ALPHA = 138,
  TEX_L2_ALPHA = 147,
  TFRAG_T_L2_ALPHA = 148,
  MERC_L2_ALPHA = 151,
  TEX_L3_ALPHA = 157,
  TFRAG_T_L3_ALPHA = 158,
  TEX_L4_ALPHA = 167,
  TFRAG_T_L4_ALPHA = 168,
  TEX_L5_ALPHA = 177,
  TEX_LCOM_TFRAG = 187,
  MERC_LCOM_TFRAG = 188,
  TEX_LCOM_SHRUB = 191,
  MERC_LCOM_SHRUB = 192,  // ???
  TEX_L0_PRIS = 196,
  MERC_L0_PRIS = 197,
  TEX_L1_PRIS = 200,
  MERC_L1_PRIS = 201,
  TEX_L2_PRIS = 204,
  MERC_L2_PRIS = 205,
  TEX_L3_PRIS = 208,
  MERC_L3_PRIS = 209,
  TEX_L4_PRIS = 212,
  MERC_L4_PRIS = 213,
  TEX_L5_PRIS = 216,
  MERC_L5_PRIS = 217,
  TEX_LCOM_PRIS = 220,
  MERC_LCOM_PRIS = 221,
  TEX_L0_PRIS2 = 224,
  MERC_L0_PRIS2 = 225,
  TEX_L1_PRIS2 = 228,
  MERC_L1_PRIS2 = 229,
  TEX_L2_PRIS2 = 232,
  MERC_L2_PRIS2 = 233,
  TEX_L3_PRIS2 = 236,
  MERC_L3_PRIS2 = 237,
  TEX_L4_PRIS2 = 240,
  MERC_L4_PRIS2 = 241,
  TEX_L0_WATER = 252,
  MERC_L0_WATER = 253,
  TFRAG_W_L0_WATER = 255,
  TEX_L1_WATER = 261,
  MERC_L1_WATER = 262,
  TFRAG_W_L1_WATER = 264,
  TEX_L2_WATER = 270,
  MERC_L2_WATER = 271,
  TFRAG_W_L2_WATER = 273,
  TEX_L3_WATER = 279,
  MERC_L3_WATER = 280,
  TEX_L4_WATER = 288,
  MERC_L4_WATER = 289,
  TEX_LCOM_WATER = 306,
  MERC_LCOM_WATER = 307,
  TEX_LCOM_SKY_POST = 309,
  OCEAN_NEAR = 310,
  TEX_ALL_SPRITE = 312,
  PARTICLES = 313,
  TEX_ALL_WARP = 316,
  DEBUG_NO_ZBUF1 = 318,
  TEX_ALL_MAP = 319,
  PROGRESS = 320,
  SCREEN_FILTER = 321,
  BUCKET_322 = 322,
  DEBUG2 = 324,
  DEBUG_NO_ZBUF2 = 325,
  DEBUG3 = 326,
  MAX_BUCKETS = 327
};
}

enum class BucketCategory {
  TFRAG,
  TIE,
  SHRUB,
  TEX,
  MERC,
  GENERIC,
  SPRITE,
  OCEAN,
  OTHER,
  MAX_CATEGORIES
};

constexpr const char* BUCKET_CATEGORY_NAMES[(int)BucketCategory::MAX_CATEGORIES] = {
    "tfrag", "tie", "shrub", "tex", "merc", "generic", "sprite", "ocean", "other"};
