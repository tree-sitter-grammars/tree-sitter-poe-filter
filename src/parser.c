#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 26

enum {
  anon_sym_Show = 1,
  anon_sym_Hide = 2,
  anon_sym_AlternateQuality = 3,
  anon_sym_AnyEnchantment = 4,
  anon_sym_ArchnemesisMod = 5,
  anon_sym_AreaLevel = 6,
  anon_sym_BaseArmour = 7,
  anon_sym_BaseDefencePercentile = 8,
  anon_sym_BaseEnergyShield = 9,
  anon_sym_BaseEvasion = 10,
  anon_sym_BaseType = 11,
  anon_sym_BaseWard = 12,
  anon_sym_BlightedMap = 13,
  anon_sym_Class = 14,
  anon_sym_Corrupted = 15,
  anon_sym_CorruptedMods = 16,
  anon_sym_DropLevel = 17,
  anon_sym_ElderItem = 18,
  anon_sym_ElderMap = 19,
  anon_sym_EnchantmentPassiveNode = 20,
  anon_sym_EnchantmentPassiveNum = 21,
  anon_sym_FracturedItem = 22,
  anon_sym_GemLevel = 23,
  anon_sym_GemQualityType = 24,
  anon_sym_HasEaterOfWorldsImplicit = 25,
  anon_sym_HasEnchantment = 26,
  anon_sym_HasExplicitMod = 27,
  anon_sym_HasInfluence = 28,
  anon_sym_HasSearingExarchImplicit = 29,
  anon_sym_Height = 30,
  anon_sym_Identified = 31,
  anon_sym_ItemLevel = 32,
  anon_sym_LinkedSockets = 33,
  anon_sym_MapTier = 34,
  anon_sym_Mirrored = 35,
  anon_sym_Quality = 36,
  anon_sym_Rarity = 37,
  anon_sym_Replica = 38,
  anon_sym_Scourged = 39,
  anon_sym_ShapedMap = 40,
  anon_sym_ShaperItem = 41,
  anon_sym_SocketGroup = 42,
  anon_sym_Sockets = 43,
  anon_sym_StackSize = 44,
  anon_sym_SynthesisedItem = 45,
  anon_sym_UberBlightedMap = 46,
  anon_sym_Width = 47,
  anon_sym_PlayAlertSound = 48,
  anon_sym_None = 49,
  anon_sym_PlayAlertSoundPositional = 50,
  anon_sym_CustomAlertSound = 51,
  aux_sym_action_token1 = 52,
  anon_sym_CustomAlertSoundOptional = 53,
  anon_sym_DisableDropSound = 54,
  anon_sym_EnableDropSound = 55,
  anon_sym_DisableDropSoundIfAlertSound = 56,
  anon_sym_EnableDropSoundIfAlertSound = 57,
  anon_sym_MinimapIcon = 58,
  anon_sym_DASH1 = 59,
  anon_sym_PlayEffect = 60,
  anon_sym_Temp = 61,
  anon_sym_SetBackgroundColor = 62,
  anon_sym_SetBorderColor = 63,
  anon_sym_SetFontSize = 64,
  anon_sym_SetTextColor = 65,
  anon_sym_Continue = 66,
  aux_sym__equal_operator_token1 = 67,
  aux_sym__range_operator_token1 = 68,
  sym_boolean = 69,
  anon_sym_DQUOTE = 70,
  aux_sym_quality_token1 = 71,
  anon_sym_Superior = 72,
  anon_sym_Divergent = 73,
  anon_sym_Anomalous = 74,
  anon_sym_Phantasmal = 75,
  aux_sym_rarity_token1 = 76,
  anon_sym_Normal = 77,
  anon_sym_Magic = 78,
  anon_sym_Rare = 79,
  anon_sym_Unique = 80,
  aux_sym_influence_token1 = 81,
  anon_sym_Shaper = 82,
  anon_sym_Elder = 83,
  anon_sym_Crusader = 84,
  anon_sym_Hunter = 85,
  anon_sym_Redeemer = 86,
  anon_sym_Warlord = 87,
  aux_sym_sockets_token1 = 88,
  aux_sym_sockets_token2 = 89,
  anon_sym_Red = 90,
  anon_sym_Green = 91,
  anon_sym_Blue = 92,
  anon_sym_Brown = 93,
  anon_sym_White = 94,
  anon_sym_Yellow = 95,
  anon_sym_Cyan = 96,
  anon_sym_Grey = 97,
  anon_sym_Orange = 98,
  anon_sym_Pink = 99,
  anon_sym_Purple = 100,
  anon_sym_Circle = 101,
  anon_sym_Diamond = 102,
  anon_sym_Hexagon = 103,
  anon_sym_Square = 104,
  anon_sym_Star = 105,
  anon_sym_Triangle = 106,
  anon_sym_Cross = 107,
  anon_sym_Moon = 108,
  anon_sym_Raindrop = 109,
  anon_sym_Kite = 110,
  anon_sym_Pentagon = 111,
  anon_sym_UpsideDownHouse = 112,
  aux_sym_string_token1 = 113,
  aux_sym_string_token2 = 114,
  aux_sym_file_token1 = 115,
  sym_number = 116,
  aux_sym__id_token1 = 117,
  aux_sym__volume_token1 = 118,
  aux_sym__color_token1 = 119,
  aux_sym__icon_size_token1 = 120,
  aux_sym__font_size_token1 = 121,
  sym_comment = 122,
  sym__space = 123,
  sym__eol = 124,
  sym_filter = 125,
  sym_block = 126,
  sym_condition = 127,
  sym_action = 128,
  sym_continue = 129,
  sym__equal_operator = 130,
  sym__range_operator = 131,
  sym_quality = 132,
  sym_rarity = 133,
  sym_influence = 134,
  sym_sockets = 135,
  sym_colour = 136,
  sym_shape = 137,
  sym_string = 138,
  sym_file = 139,
  sym__quantity = 140,
  sym__id = 141,
  sym__volume = 142,
  sym__color = 143,
  sym__icon_size = 144,
  sym__font_size = 145,
  aux_sym_filter_repeat1 = 146,
  aux_sym_block_repeat1 = 147,
  aux_sym_condition_repeat1 = 148,
  aux_sym_condition_repeat2 = 149,
  aux_sym_condition_repeat3 = 150,
  aux_sym_condition_repeat4 = 151,
  aux_sym_condition_repeat5 = 152,
  aux_sym_condition_repeat6 = 153,
  aux_sym_condition_repeat7 = 154,
  aux_sym_condition_repeat8 = 155,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Show] = "Show",
  [anon_sym_Hide] = "Hide",
  [anon_sym_AlternateQuality] = "name",
  [anon_sym_AnyEnchantment] = "name",
  [anon_sym_ArchnemesisMod] = "name",
  [anon_sym_AreaLevel] = "name",
  [anon_sym_BaseArmour] = "name",
  [anon_sym_BaseDefencePercentile] = "name",
  [anon_sym_BaseEnergyShield] = "name",
  [anon_sym_BaseEvasion] = "name",
  [anon_sym_BaseType] = "name",
  [anon_sym_BaseWard] = "name",
  [anon_sym_BlightedMap] = "name",
  [anon_sym_Class] = "name",
  [anon_sym_Corrupted] = "name",
  [anon_sym_CorruptedMods] = "name",
  [anon_sym_DropLevel] = "name",
  [anon_sym_ElderItem] = "name",
  [anon_sym_ElderMap] = "name",
  [anon_sym_EnchantmentPassiveNode] = "name",
  [anon_sym_EnchantmentPassiveNum] = "name",
  [anon_sym_FracturedItem] = "name",
  [anon_sym_GemLevel] = "name",
  [anon_sym_GemQualityType] = "name",
  [anon_sym_HasEaterOfWorldsImplicit] = "name",
  [anon_sym_HasEnchantment] = "name",
  [anon_sym_HasExplicitMod] = "name",
  [anon_sym_HasInfluence] = "name",
  [anon_sym_HasSearingExarchImplicit] = "name",
  [anon_sym_Height] = "name",
  [anon_sym_Identified] = "name",
  [anon_sym_ItemLevel] = "name",
  [anon_sym_LinkedSockets] = "name",
  [anon_sym_MapTier] = "name",
  [anon_sym_Mirrored] = "name",
  [anon_sym_Quality] = "name",
  [anon_sym_Rarity] = "name",
  [anon_sym_Replica] = "name",
  [anon_sym_Scourged] = "name",
  [anon_sym_ShapedMap] = "name",
  [anon_sym_ShaperItem] = "name",
  [anon_sym_SocketGroup] = "name",
  [anon_sym_Sockets] = "name",
  [anon_sym_StackSize] = "name",
  [anon_sym_SynthesisedItem] = "name",
  [anon_sym_UberBlightedMap] = "name",
  [anon_sym_Width] = "name",
  [anon_sym_PlayAlertSound] = "name",
  [anon_sym_None] = "None",
  [anon_sym_PlayAlertSoundPositional] = "name",
  [anon_sym_CustomAlertSound] = "name",
  [aux_sym_action_token1] = "disable",
  [anon_sym_CustomAlertSoundOptional] = "name",
  [anon_sym_DisableDropSound] = "name",
  [anon_sym_EnableDropSound] = "name",
  [anon_sym_DisableDropSoundIfAlertSound] = "name",
  [anon_sym_EnableDropSoundIfAlertSound] = "name",
  [anon_sym_MinimapIcon] = "name",
  [anon_sym_DASH1] = "disable",
  [anon_sym_PlayEffect] = "name",
  [anon_sym_Temp] = "Temp",
  [anon_sym_SetBackgroundColor] = "name",
  [anon_sym_SetBorderColor] = "name",
  [anon_sym_SetFontSize] = "name",
  [anon_sym_SetTextColor] = "name",
  [anon_sym_Continue] = "Continue",
  [aux_sym__equal_operator_token1] = "operator",
  [aux_sym__range_operator_token1] = "operator",
  [sym_boolean] = "boolean",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quality_token1] = "quality_token1",
  [anon_sym_Superior] = "Superior",
  [anon_sym_Divergent] = "Divergent",
  [anon_sym_Anomalous] = "Anomalous",
  [anon_sym_Phantasmal] = "Phantasmal",
  [aux_sym_rarity_token1] = "rarity_token1",
  [anon_sym_Normal] = "Normal",
  [anon_sym_Magic] = "Magic",
  [anon_sym_Rare] = "Rare",
  [anon_sym_Unique] = "Unique",
  [aux_sym_influence_token1] = "influence_token1",
  [anon_sym_Shaper] = "Shaper",
  [anon_sym_Elder] = "Elder",
  [anon_sym_Crusader] = "Crusader",
  [anon_sym_Hunter] = "Hunter",
  [anon_sym_Redeemer] = "Redeemer",
  [anon_sym_Warlord] = "Warlord",
  [aux_sym_sockets_token1] = "sockets_token1",
  [aux_sym_sockets_token2] = "sockets_token2",
  [anon_sym_Red] = "Red",
  [anon_sym_Green] = "Green",
  [anon_sym_Blue] = "Blue",
  [anon_sym_Brown] = "Brown",
  [anon_sym_White] = "White",
  [anon_sym_Yellow] = "Yellow",
  [anon_sym_Cyan] = "Cyan",
  [anon_sym_Grey] = "Grey",
  [anon_sym_Orange] = "Orange",
  [anon_sym_Pink] = "Pink",
  [anon_sym_Purple] = "Purple",
  [anon_sym_Circle] = "Circle",
  [anon_sym_Diamond] = "Diamond",
  [anon_sym_Hexagon] = "Hexagon",
  [anon_sym_Square] = "Square",
  [anon_sym_Star] = "Star",
  [anon_sym_Triangle] = "Triangle",
  [anon_sym_Cross] = "Cross",
  [anon_sym_Moon] = "Moon",
  [anon_sym_Raindrop] = "Raindrop",
  [anon_sym_Kite] = "Kite",
  [anon_sym_Pentagon] = "Pentagon",
  [anon_sym_UpsideDownHouse] = "UpsideDownHouse",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_file_token1] = "file_token1",
  [sym_number] = "number",
  [aux_sym__id_token1] = "number",
  [aux_sym__volume_token1] = "number",
  [aux_sym__color_token1] = "number",
  [aux_sym__icon_size_token1] = "number",
  [aux_sym__font_size_token1] = "number",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [sym__eol] = "_eol",
  [sym_filter] = "filter",
  [sym_block] = "block",
  [sym_condition] = "condition",
  [sym_action] = "action",
  [sym_continue] = "continue",
  [sym__equal_operator] = "_equal_operator",
  [sym__range_operator] = "_range_operator",
  [sym_quality] = "quality",
  [sym_rarity] = "rarity",
  [sym_influence] = "influence",
  [sym_sockets] = "sockets",
  [sym_colour] = "colour",
  [sym_shape] = "shape",
  [sym_string] = "string",
  [sym_file] = "file",
  [sym__quantity] = "_quantity",
  [sym__id] = "_id",
  [sym__volume] = "_volume",
  [sym__color] = "_color",
  [sym__icon_size] = "_icon_size",
  [sym__font_size] = "_font_size",
  [aux_sym_filter_repeat1] = "filter_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_condition_repeat1] = "condition_repeat1",
  [aux_sym_condition_repeat2] = "condition_repeat2",
  [aux_sym_condition_repeat3] = "condition_repeat3",
  [aux_sym_condition_repeat4] = "condition_repeat4",
  [aux_sym_condition_repeat5] = "condition_repeat5",
  [aux_sym_condition_repeat6] = "condition_repeat6",
  [aux_sym_condition_repeat7] = "condition_repeat7",
  [aux_sym_condition_repeat8] = "condition_repeat8",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Show] = anon_sym_Show,
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_AlternateQuality] = anon_sym_AlternateQuality,
  [anon_sym_AnyEnchantment] = anon_sym_AlternateQuality,
  [anon_sym_ArchnemesisMod] = anon_sym_AlternateQuality,
  [anon_sym_AreaLevel] = anon_sym_AlternateQuality,
  [anon_sym_BaseArmour] = anon_sym_AlternateQuality,
  [anon_sym_BaseDefencePercentile] = anon_sym_AlternateQuality,
  [anon_sym_BaseEnergyShield] = anon_sym_AlternateQuality,
  [anon_sym_BaseEvasion] = anon_sym_AlternateQuality,
  [anon_sym_BaseType] = anon_sym_AlternateQuality,
  [anon_sym_BaseWard] = anon_sym_AlternateQuality,
  [anon_sym_BlightedMap] = anon_sym_AlternateQuality,
  [anon_sym_Class] = anon_sym_AlternateQuality,
  [anon_sym_Corrupted] = anon_sym_AlternateQuality,
  [anon_sym_CorruptedMods] = anon_sym_AlternateQuality,
  [anon_sym_DropLevel] = anon_sym_AlternateQuality,
  [anon_sym_ElderItem] = anon_sym_AlternateQuality,
  [anon_sym_ElderMap] = anon_sym_AlternateQuality,
  [anon_sym_EnchantmentPassiveNode] = anon_sym_AlternateQuality,
  [anon_sym_EnchantmentPassiveNum] = anon_sym_AlternateQuality,
  [anon_sym_FracturedItem] = anon_sym_AlternateQuality,
  [anon_sym_GemLevel] = anon_sym_AlternateQuality,
  [anon_sym_GemQualityType] = anon_sym_AlternateQuality,
  [anon_sym_HasEaterOfWorldsImplicit] = anon_sym_AlternateQuality,
  [anon_sym_HasEnchantment] = anon_sym_AlternateQuality,
  [anon_sym_HasExplicitMod] = anon_sym_AlternateQuality,
  [anon_sym_HasInfluence] = anon_sym_AlternateQuality,
  [anon_sym_HasSearingExarchImplicit] = anon_sym_AlternateQuality,
  [anon_sym_Height] = anon_sym_AlternateQuality,
  [anon_sym_Identified] = anon_sym_AlternateQuality,
  [anon_sym_ItemLevel] = anon_sym_AlternateQuality,
  [anon_sym_LinkedSockets] = anon_sym_AlternateQuality,
  [anon_sym_MapTier] = anon_sym_AlternateQuality,
  [anon_sym_Mirrored] = anon_sym_AlternateQuality,
  [anon_sym_Quality] = anon_sym_AlternateQuality,
  [anon_sym_Rarity] = anon_sym_AlternateQuality,
  [anon_sym_Replica] = anon_sym_AlternateQuality,
  [anon_sym_Scourged] = anon_sym_AlternateQuality,
  [anon_sym_ShapedMap] = anon_sym_AlternateQuality,
  [anon_sym_ShaperItem] = anon_sym_AlternateQuality,
  [anon_sym_SocketGroup] = anon_sym_AlternateQuality,
  [anon_sym_Sockets] = anon_sym_AlternateQuality,
  [anon_sym_StackSize] = anon_sym_AlternateQuality,
  [anon_sym_SynthesisedItem] = anon_sym_AlternateQuality,
  [anon_sym_UberBlightedMap] = anon_sym_AlternateQuality,
  [anon_sym_Width] = anon_sym_AlternateQuality,
  [anon_sym_PlayAlertSound] = anon_sym_AlternateQuality,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_PlayAlertSoundPositional] = anon_sym_AlternateQuality,
  [anon_sym_CustomAlertSound] = anon_sym_AlternateQuality,
  [aux_sym_action_token1] = aux_sym_action_token1,
  [anon_sym_CustomAlertSoundOptional] = anon_sym_AlternateQuality,
  [anon_sym_DisableDropSound] = anon_sym_AlternateQuality,
  [anon_sym_EnableDropSound] = anon_sym_AlternateQuality,
  [anon_sym_DisableDropSoundIfAlertSound] = anon_sym_AlternateQuality,
  [anon_sym_EnableDropSoundIfAlertSound] = anon_sym_AlternateQuality,
  [anon_sym_MinimapIcon] = anon_sym_AlternateQuality,
  [anon_sym_DASH1] = aux_sym_action_token1,
  [anon_sym_PlayEffect] = anon_sym_AlternateQuality,
  [anon_sym_Temp] = anon_sym_Temp,
  [anon_sym_SetBackgroundColor] = anon_sym_AlternateQuality,
  [anon_sym_SetBorderColor] = anon_sym_AlternateQuality,
  [anon_sym_SetFontSize] = anon_sym_AlternateQuality,
  [anon_sym_SetTextColor] = anon_sym_AlternateQuality,
  [anon_sym_Continue] = anon_sym_Continue,
  [aux_sym__equal_operator_token1] = aux_sym__equal_operator_token1,
  [aux_sym__range_operator_token1] = aux_sym__equal_operator_token1,
  [sym_boolean] = sym_boolean,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quality_token1] = aux_sym_quality_token1,
  [anon_sym_Superior] = anon_sym_Superior,
  [anon_sym_Divergent] = anon_sym_Divergent,
  [anon_sym_Anomalous] = anon_sym_Anomalous,
  [anon_sym_Phantasmal] = anon_sym_Phantasmal,
  [aux_sym_rarity_token1] = aux_sym_rarity_token1,
  [anon_sym_Normal] = anon_sym_Normal,
  [anon_sym_Magic] = anon_sym_Magic,
  [anon_sym_Rare] = anon_sym_Rare,
  [anon_sym_Unique] = anon_sym_Unique,
  [aux_sym_influence_token1] = aux_sym_influence_token1,
  [anon_sym_Shaper] = anon_sym_Shaper,
  [anon_sym_Elder] = anon_sym_Elder,
  [anon_sym_Crusader] = anon_sym_Crusader,
  [anon_sym_Hunter] = anon_sym_Hunter,
  [anon_sym_Redeemer] = anon_sym_Redeemer,
  [anon_sym_Warlord] = anon_sym_Warlord,
  [aux_sym_sockets_token1] = aux_sym_sockets_token1,
  [aux_sym_sockets_token2] = aux_sym_sockets_token2,
  [anon_sym_Red] = anon_sym_Red,
  [anon_sym_Green] = anon_sym_Green,
  [anon_sym_Blue] = anon_sym_Blue,
  [anon_sym_Brown] = anon_sym_Brown,
  [anon_sym_White] = anon_sym_White,
  [anon_sym_Yellow] = anon_sym_Yellow,
  [anon_sym_Cyan] = anon_sym_Cyan,
  [anon_sym_Grey] = anon_sym_Grey,
  [anon_sym_Orange] = anon_sym_Orange,
  [anon_sym_Pink] = anon_sym_Pink,
  [anon_sym_Purple] = anon_sym_Purple,
  [anon_sym_Circle] = anon_sym_Circle,
  [anon_sym_Diamond] = anon_sym_Diamond,
  [anon_sym_Hexagon] = anon_sym_Hexagon,
  [anon_sym_Square] = anon_sym_Square,
  [anon_sym_Star] = anon_sym_Star,
  [anon_sym_Triangle] = anon_sym_Triangle,
  [anon_sym_Cross] = anon_sym_Cross,
  [anon_sym_Moon] = anon_sym_Moon,
  [anon_sym_Raindrop] = anon_sym_Raindrop,
  [anon_sym_Kite] = anon_sym_Kite,
  [anon_sym_Pentagon] = anon_sym_Pentagon,
  [anon_sym_UpsideDownHouse] = anon_sym_UpsideDownHouse,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [sym_number] = sym_number,
  [aux_sym__id_token1] = sym_number,
  [aux_sym__volume_token1] = sym_number,
  [aux_sym__color_token1] = sym_number,
  [aux_sym__icon_size_token1] = sym_number,
  [aux_sym__font_size_token1] = sym_number,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [sym__eol] = sym__eol,
  [sym_filter] = sym_filter,
  [sym_block] = sym_block,
  [sym_condition] = sym_condition,
  [sym_action] = sym_action,
  [sym_continue] = sym_continue,
  [sym__equal_operator] = sym__equal_operator,
  [sym__range_operator] = sym__range_operator,
  [sym_quality] = sym_quality,
  [sym_rarity] = sym_rarity,
  [sym_influence] = sym_influence,
  [sym_sockets] = sym_sockets,
  [sym_colour] = sym_colour,
  [sym_shape] = sym_shape,
  [sym_string] = sym_string,
  [sym_file] = sym_file,
  [sym__quantity] = sym__quantity,
  [sym__id] = sym__id,
  [sym__volume] = sym__volume,
  [sym__color] = sym__color,
  [sym__icon_size] = sym__icon_size,
  [sym__font_size] = sym__font_size,
  [aux_sym_filter_repeat1] = aux_sym_filter_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_condition_repeat1] = aux_sym_condition_repeat1,
  [aux_sym_condition_repeat2] = aux_sym_condition_repeat2,
  [aux_sym_condition_repeat3] = aux_sym_condition_repeat3,
  [aux_sym_condition_repeat4] = aux_sym_condition_repeat4,
  [aux_sym_condition_repeat5] = aux_sym_condition_repeat5,
  [aux_sym_condition_repeat6] = aux_sym_condition_repeat6,
  [aux_sym_condition_repeat7] = aux_sym_condition_repeat7,
  [aux_sym_condition_repeat8] = aux_sym_condition_repeat8,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AlternateQuality] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AnyEnchantment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ArchnemesisMod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AreaLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseArmour] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseDefencePercentile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseEnergyShield] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseEvasion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseWard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BlightedMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Corrupted] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CorruptedMods] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DropLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ElderItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ElderMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnchantmentPassiveNode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnchantmentPassiveNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_FracturedItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GemLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GemQualityType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasEaterOfWorldsImplicit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasEnchantment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasExplicitMod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasInfluence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasSearingExarchImplicit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Height] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Identified] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ItemLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LinkedSockets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MapTier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Mirrored] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Quality] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Rarity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Replica] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Scourged] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ShapedMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ShaperItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SocketGroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Sockets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_StackSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SynthesisedItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_UberBlightedMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PlayAlertSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayAlertSoundPositional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CustomAlertSound] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_action_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CustomAlertSoundOptional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DisableDropSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnableDropSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DisableDropSoundIfAlertSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnableDropSoundIfAlertSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MinimapIcon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PlayEffect] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Temp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetBackgroundColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SetBorderColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SetFontSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SetTextColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Continue] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__equal_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__range_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quality_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Superior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Divergent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Anomalous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Phantasmal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unique] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_influence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Shaper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Elder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Crusader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hunter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Redeemer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warlord] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sockets_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sockets_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Brown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_White] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Grey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Orange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Circle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Diamond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hexagon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Square] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Star] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Triangle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cross] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Moon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Raindrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pentagon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UpsideDownHouse] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__id_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__volume_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__color_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__icon_size_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__font_size_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym__equal_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__range_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_quality] = {
    .visible = true,
    .named = true,
  },
  [sym_rarity] = {
    .visible = true,
    .named = true,
  },
  [sym_influence] = {
    .visible = true,
    .named = true,
  },
  [sym_sockets] = {
    .visible = true,
    .named = true,
  },
  [sym_colour] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
  },
  [sym__id] = {
    .visible = false,
    .named = true,
  },
  [sym__volume] = {
    .visible = false,
    .named = true,
  },
  [sym__color] = {
    .visible = false,
    .named = true,
  },
  [sym__icon_size] = {
    .visible = false,
    .named = true,
  },
  [sym__font_size] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_filter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat8] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alpha = 1,
  field_blue = 2,
  field_class = 3,
  field_enchantment = 4,
  field_green = 5,
  field_id = 6,
  field_modifier = 7,
  field_red = 8,
  field_size = 9,
  field_sockets = 10,
  field_type = 11,
  field_volume = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alpha] = "alpha",
  [field_blue] = "blue",
  [field_class] = "class",
  [field_enchantment] = "enchantment",
  [field_green] = "green",
  [field_id] = "id",
  [field_modifier] = "modifier",
  [field_red] = "red",
  [field_size] = "size",
  [field_sockets] = "sockets",
  [field_type] = "type",
  [field_volume] = "volume",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 1},
  [16] = {.index = 18, .length = 1},
  [17] = {.index = 19, .length = 1},
  [18] = {.index = 20, .length = 1},
  [19] = {.index = 21, .length = 1},
  [20] = {.index = 22, .length = 1},
  [21] = {.index = 23, .length = 1},
  [22] = {.index = 24, .length = 2},
  [23] = {.index = 23, .length = 1},
  [24] = {.index = 26, .length = 3},
  [25] = {.index = 29, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_modifier, 1},
  [1] =
    {field_modifier, 1, .inherited = true},
  [2] =
    {field_modifier, 0, .inherited = true},
    {field_modifier, 1, .inherited = true},
  [4] =
    {field_type, 1},
  [5] =
    {field_type, 1, .inherited = true},
  [6] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [8] =
    {field_class, 1},
  [9] =
    {field_class, 1, .inherited = true},
  [10] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [12] =
    {field_enchantment, 1},
  [13] =
    {field_enchantment, 1, .inherited = true},
  [14] =
    {field_enchantment, 0, .inherited = true},
    {field_enchantment, 1, .inherited = true},
  [16] =
    {field_sockets, 0},
  [17] =
    {field_id, 2},
  [18] =
    {field_size, 2},
  [19] =
    {field_modifier, 3, .inherited = true},
  [20] =
    {field_type, 3, .inherited = true},
  [21] =
    {field_class, 3, .inherited = true},
  [22] =
    {field_enchantment, 3, .inherited = true},
  [23] =
    {field_volume, 4},
  [24] =
    {field_id, 2},
    {field_volume, 4},
  [26] =
    {field_blue, 6},
    {field_green, 4},
    {field_red, 2},
  [29] =
    {field_alpha, 8},
    {field_blue, 6},
    {field_green, 4},
    {field_red, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [14] = {
    [2] = aux_sym_action_token1,
  },
  [21] = {
    [2] = aux_sym_action_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 151,
  [181] = 169,
};

static inline bool aux_sym_string_token1_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'A'
                ? (c < ','
                  ? c == '\''
                  : (c <= '-' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token1_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < ':'
                ? (c < '\''
                  ? c == ' '
                  : (c <= '\'' || (c >= ',' && c <= '-')))
                : (c <= ':' || (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'J'
                ? (c < ','
                  ? c == '\''
                  : (c <= ',' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token2_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'C'
                ? (c < ','
                  ? c == '\''
                  : (c <= '-' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token2_character_set_3(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'C'
                ? (c < ','
                  ? c == '\''
                  : (c <= '-' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token2_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'B'
                ? (c < ','
                  ? c == '\''
                  : (c <= '-' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token2_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'A'
                ? (c < ','
                  ? c == '\''
                  : (c <= '-' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_string_token2_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'A'
                ? (c < ','
                  ? c == '\''
                  : (c <= '-' || c == ':'))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'y')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(794);
      if (lookahead == '\n') ADVANCE(1730);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '"') ADVANCE(932);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '-') ADVANCE(1038);
      if (lookahead == '0') ADVANCE(974);
      if (lookahead == '1') ADVANCE(972);
      if (lookahead == '2') ADVANCE(965);
      if (lookahead == '3') ADVANCE(964);
      if (lookahead == '4') ADVANCE(973);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == 'A') ADVANCE(971);
      if (lookahead == 'B') ADVANCE(966);
      if (lookahead == 'C') ADVANCE(1322);
      if (lookahead == 'D') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(1365);
      if (lookahead == 'F') ADVANCE(1089);
      if (lookahead == 'G') ADVANCE(969);
      if (lookahead == 'H') ADVANCE(1097);
      if (lookahead == 'I') ADVANCE(1179);
      if (lookahead == 'K') ADVANCE(1340);
      if (lookahead == 'L') ADVANCE(1323);
      if (lookahead == 'M') ADVANCE(1090);
      if (lookahead == 'N') ADVANCE(1478);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1228);
      if (lookahead == 'Q') ADVANCE(1662);
      if (lookahead == 'R') ADVANCE(967);
      if (lookahead == 'S') ADVANCE(1142);
      if (lookahead == 'T') ADVANCE(1226);
      if (lookahead == 'U') ADVANCE(1135);
      if (lookahead == 'W') ADVANCE(968);
      if (lookahead == 'Y') ADVANCE(1225);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(975);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == ' ') ADVANCE(1036);
      if (lookahead == '#') ADVANCE(1728);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1037);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == ' ') ADVANCE(1705);
      if (lookahead == '#') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 127 || 159 < lookahead)) ADVANCE(1707);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1730);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1730);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1729);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '"') ADVANCE(931);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1708);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '"') ADVANCE(931);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(987);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1708);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(987);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(897);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(931);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(502);
      if (lookahead == 'C') ADVANCE(649);
      if (lookahead == 'D') ADVANCE(375);
      if (lookahead == 'E') ADVANCE(434);
      if (lookahead == 'H') ADVANCE(758);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(577);
      if (lookahead == 'P') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(334);
      if (lookahead == 'U') ADVANCE(520);
      if (lookahead == 'W') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1724);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(649);
      if (lookahead == 'E') ADVANCE(434);
      if (lookahead == 'H') ADVANCE(758);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == 'R') ADVANCE(284);
      if (lookahead == 'S') ADVANCE(333);
      if (lookahead == 'W') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1724);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1719);
      if (lookahead == '1') ADVANCE(1723);
      if (lookahead == '2') ADVANCE(1720);
      if (lookahead == 'C') ADVANCE(662);
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead == 'H') ADVANCE(767);
      if (lookahead == 'N') ADVANCE(569);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == 'W') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1722);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1719);
      if (lookahead == '1') ADVANCE(1723);
      if (lookahead == '2') ADVANCE(1720);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1722);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1714);
      if (lookahead == '3') ADVANCE(1716);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1718);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1717);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '1') ADVANCE(1713);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1712);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '4') ADVANCE(1726);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1725);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(974);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(910);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(431);
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(630);
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == 'E') ADVANCE(519);
      if (lookahead == 'T') ADVANCE(787);
      if (lookahead == 'W') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(438);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(439);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(440);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(209);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(411);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(566);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(578);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(579);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(557);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(635);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(656);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'S') ADVANCE(279);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(780);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(487);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(637);
      if (lookahead == 's') ADVANCE(879);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(537);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(464);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(724);
      if (lookahead == 'M') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(725);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(726);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(727);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(466);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'Q') ADVANCE(764);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(297);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(298);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(542);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(544);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(526);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(570);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(306);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(276);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'Q') ADVANCE(766);
      END_STATE();
    case 60:
      if (lookahead == 'S') ADVANCE(331);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(348);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(576);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(370);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(560);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(567);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(571);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(572);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(574);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(575);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(380);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(788);
      END_STATE();
    case 72:
      if (lookahead == 'W') ADVANCE(551);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(599);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == 'p') ADVANCE(673);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(437);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(945);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(942);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'q') ADVANCE(745);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead == 'y') ADVANCE(488);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(720);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(990);
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(1014);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(863);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(871);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(803);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(847);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(890);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(902);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(811);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(901);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(962);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(951);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(705);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(633);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(1018);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'y') ADVANCE(1004);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 306:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 309:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 310:
      if (lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 311:
      if (lookahead == 'f') ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 313:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(786);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(358);
      END_STATE();
    case 322:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 323:
      if (lookahead == 'g') ADVANCE(545);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(638);
      END_STATE();
    case 325:
      if (lookahead == 'g') ADVANCE(546);
      END_STATE();
    case 326:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 327:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 328:
      if (lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 329:
      if (lookahead == 'h') ADVANCE(887);
      END_STATE();
    case 330:
      if (lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 331:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 332:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 333:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 334:
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(601);
      END_STATE();
    case 335:
      if (lookahead == 'h') ADVANCE(516);
      END_STATE();
    case 336:
      if (lookahead == 'h') ADVANCE(716);
      END_STATE();
    case 337:
      if (lookahead == 'h') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 338:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 339:
      if (lookahead == 'h') ADVANCE(734);
      END_STATE();
    case 340:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 341:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 342:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 343:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 344:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(789);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 390:
      if (lookahead == 'k') ADVANCE(1008);
      END_STATE();
    case 391:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 392:
      if (lookahead == 'k') ADVANCE(324);
      END_STATE();
    case 393:
      if (lookahead == 'k') ADVANCE(238);
      END_STATE();
    case 394:
      if (lookahead == 'k') ADVANCE(258);
      END_STATE();
    case 395:
      if (lookahead == 'k') ADVANCE(269);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(839);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(805);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(827);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(940);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(933);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(532);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(533);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(553);
      END_STATE();
    case 430:
      if (lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 432:
      if (lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 433:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 434:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 437:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 441:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 442:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 443:
      if (lookahead == 'm') ADVANCE(829);
      END_STATE();
    case 444:
      if (lookahead == 'm') ADVANCE(875);
      END_STATE();
    case 445:
      if (lookahead == 'm') ADVANCE(837);
      END_STATE();
    case 446:
      if (lookahead == 'm') ADVANCE(883);
      END_STATE();
    case 447:
      if (lookahead == 'm') ADVANCE(835);
      END_STATE();
    case 448:
      if (lookahead == 'm') ADVANCE(582);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 450:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 451:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 452:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 453:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 454:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 455:
      if (lookahead == 'm') ADVANCE(564);
      END_STATE();
    case 456:
      if (lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 457:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 458:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 459:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 460:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 461:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 462:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 463:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 464:
      if (lookahead == 'm') ADVANCE(602);
      END_STATE();
    case 465:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 466:
      if (lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 469:
      if (lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(1026);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(996);
      END_STATE();
    case 472:
      if (lookahead == 'n') ADVANCE(992);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 475:
      if (lookahead == 'n') ADVANCE(1032);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 477:
      if (lookahead == 'n') ADVANCE(813);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 480:
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead == 'r') ADVANCE(625);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 482:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 483:
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 484:
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 486:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(701);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(730);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(447);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(913);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(831);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(1028);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(873);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(877);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(885);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 594:
      if (lookahead == 'p') ADVANCE(733);
      END_STATE();
    case 595:
      if (lookahead == 'p') ADVANCE(717);
      END_STATE();
    case 596:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 597:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 598:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 599:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 600:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 601:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 602:
      if (lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 603:
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 604:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 605:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 606:
      if (lookahead == 'q') ADVANCE(754);
      END_STATE();
    case 607:
      if (lookahead == 'q') ADVANCE(760);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(807);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(954);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 627:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 628:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 630:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 663:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 664:
      if (lookahead == 's') ADVANCE(821);
      END_STATE();
    case 665:
      if (lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 666:
      if (lookahead == 's') ADVANCE(938);
      END_STATE();
    case 667:
      if (lookahead == 's') ADVANCE(825);
      END_STATE();
    case 668:
      if (lookahead == 's') ADVANCE(859);
      END_STATE();
    case 669:
      if (lookahead == 's') ADVANCE(933);
      END_STATE();
    case 670:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 672:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 674:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 675:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 676:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 677:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 678:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 680:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(843);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(933);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 742:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 743:
      if (lookahead == 'u') ADVANCE(595);
      END_STATE();
    case 744:
      if (lookahead == 'u') ADVANCE(666);
      END_STATE();
    case 745:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 746:
      if (lookahead == 'u') ADVANCE(587);
      END_STATE();
    case 747:
      if (lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 748:
      if (lookahead == 'u') ADVANCE(669);
      END_STATE();
    case 749:
      if (lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 750:
      if (lookahead == 'u') ADVANCE(496);
      END_STATE();
    case 751:
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 752:
      if (lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 753:
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 754:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 755:
      if (lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 756:
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 757:
      if (lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 758:
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 759:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 762:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 763:
      if (lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 764:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 765:
      if (lookahead == 'u') ADVANCE(651);
      END_STATE();
    case 766:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 767:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 768:
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 769:
      if (lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 770:
      if (lookahead == 'v') ADVANCE(253);
      END_STATE();
    case 771:
      if (lookahead == 'v') ADVANCE(256);
      END_STATE();
    case 772:
      if (lookahead == 'v') ADVANCE(259);
      END_STATE();
    case 773:
      if (lookahead == 'v') ADVANCE(261);
      END_STATE();
    case 774:
      if (lookahead == 'v') ADVANCE(302);
      END_STATE();
    case 775:
      if (lookahead == 'w') ADVANCE(795);
      END_STATE();
    case 776:
      if (lookahead == 'w') ADVANCE(1000);
      END_STATE();
    case 777:
      if (lookahead == 'w') ADVANCE(471);
      END_STATE();
    case 778:
      if (lookahead == 'w') ADVANCE(476);
      END_STATE();
    case 779:
      if (lookahead == 'x') ADVANCE(693);
      END_STATE();
    case 780:
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 781:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 782:
      if (lookahead == 'y') ADVANCE(867);
      END_STATE();
    case 783:
      if (lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 784:
      if (lookahead == 'y') ADVANCE(799);
      END_STATE();
    case 785:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 786:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 787:
      if (lookahead == 'y') ADVANCE(591);
      END_STATE();
    case 788:
      if (lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 789:
      if (lookahead == 'z') ADVANCE(222);
      END_STATE();
    case 790:
      if (lookahead == 'z') ADVANCE(224);
      END_STATE();
    case 791:
      if (eof) ADVANCE(794);
      if (lookahead == '\n') ADVANCE(1730);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '-') ADVANCE(1038);
      if (lookahead == '0') ADVANCE(987);
      if (lookahead == '1') ADVANCE(985);
      if (lookahead == '2') ADVANCE(978);
      if (lookahead == '3') ADVANCE(977);
      if (lookahead == '4') ADVANCE(986);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == 'A') ADVANCE(984);
      if (lookahead == 'B') ADVANCE(979);
      if (lookahead == 'C') ADVANCE(1322);
      if (lookahead == 'D') ADVANCE(983);
      if (lookahead == 'E') ADVANCE(1365);
      if (lookahead == 'F') ADVANCE(1089);
      if (lookahead == 'G') ADVANCE(982);
      if (lookahead == 'H') ADVANCE(1097);
      if (lookahead == 'I') ADVANCE(1179);
      if (lookahead == 'K') ADVANCE(1340);
      if (lookahead == 'L') ADVANCE(1323);
      if (lookahead == 'M') ADVANCE(1090);
      if (lookahead == 'N') ADVANCE(1478);
      if (lookahead == 'O') ADVANCE(1580);
      if (lookahead == 'P') ADVANCE(1228);
      if (lookahead == 'Q') ADVANCE(1662);
      if (lookahead == 'R') ADVANCE(980);
      if (lookahead == 'S') ADVANCE(1142);
      if (lookahead == 'T') ADVANCE(1226);
      if (lookahead == 'U') ADVANCE(1135);
      if (lookahead == 'W') ADVANCE(981);
      if (lookahead == 'Y') ADVANCE(1225);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(791)
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(988);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 792:
      if (eof) ADVANCE(794);
      if (lookahead == '\n') ADVANCE(1730);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '"') ADVANCE(931);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1708);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'D') ADVANCE(345);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(199);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == 'K') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(349);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(530);
      if (lookahead == 'O') ADVANCE(647);
      if (lookahead == 'P') ADVANCE(236);
      if (lookahead == 'Q') ADVANCE(742);
      if (lookahead == 'R') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead == 'W') ADVANCE(337);
      if (lookahead == 'Y') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(793)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 793:
      if (eof) ADVANCE(794);
      if (lookahead == '\n') ADVANCE(1730);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(925);
      if (lookahead == '#') ADVANCE(1728);
      if (lookahead == '0') ADVANCE(1708);
      if (lookahead == '<') ADVANCE(928);
      if (lookahead == '=') ADVANCE(926);
      if (lookahead == '>') ADVANCE(928);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(350);
      if (lookahead == 'D') ADVANCE(345);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(199);
      if (lookahead == 'H') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == 'K') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(349);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(530);
      if (lookahead == 'O') ADVANCE(647);
      if (lookahead == 'P') ADVANCE(236);
      if (lookahead == 'Q') ADVANCE(742);
      if (lookahead == 'R') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead == 'W') ADVANCE(337);
      if (lookahead == 'Y') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(793)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_Show);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_Hide);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_AlternateQuality);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_AlternateQuality);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_AnyEnchantment);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_AnyEnchantment);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_ArchnemesisMod);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_ArchnemesisMod);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_AreaLevel);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_AreaLevel);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BaseArmour);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_BaseArmour);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_BaseDefencePercentile);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_BaseDefencePercentile);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_BaseEnergyShield);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_BaseEnergyShield);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_BaseEvasion);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_BaseEvasion);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_BaseType);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_BaseType);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_BaseWard);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_BaseWard);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_BlightedMap);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_BlightedMap);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_Class);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_Corrupted);
      if (lookahead == 'M') ADVANCE(1488);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_Corrupted);
      if (lookahead == 'M') ADVANCE(540);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_CorruptedMods);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_CorruptedMods);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_DropLevel);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_DropLevel);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_ElderItem);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_ElderItem);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_ElderMap);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_ElderMap);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNode);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNode);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNum);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNum);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_FracturedItem);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_FracturedItem);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_GemLevel);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_GemLevel);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_GemQualityType);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_GemQualityType);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_HasEaterOfWorldsImplicit);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_HasEaterOfWorldsImplicit);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_HasEnchantment);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_HasEnchantment);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_HasExplicitMod);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_HasExplicitMod);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_HasInfluence);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_HasInfluence);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_HasSearingExarchImplicit);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_HasSearingExarchImplicit);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_Height);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_Identified);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_Identified);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_ItemLevel);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_ItemLevel);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_LinkedSockets);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_LinkedSockets);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_MapTier);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_MapTier);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_Mirrored);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_Mirrored);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_Quality);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_Quality);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_Rarity);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_Rarity);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_Replica);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_Replica);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_Scourged);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_Scourged);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_ShapedMap);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_ShapedMap);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_ShaperItem);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_ShaperItem);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_SocketGroup);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_SocketGroup);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_Sockets);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_Sockets);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_StackSize);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_StackSize);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_SynthesisedItem);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_SynthesisedItem);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_UberBlightedMap);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_UberBlightedMap);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_Width);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_PlayAlertSound);
      if (lookahead == 'P') ADVANCE(1489);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_PlayAlertSound);
      if (lookahead == 'P') ADVANCE(541);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_None);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_PlayAlertSoundPositional);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_PlayAlertSoundPositional);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_CustomAlertSound);
      if (lookahead == 'O') ADVANCE(1532);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_CustomAlertSound);
      if (lookahead == 'O') ADVANCE(594);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_action_token1);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_CustomAlertSoundOptional);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_CustomAlertSoundOptional);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_DisableDropSound);
      if (lookahead == 'I') ADVANCE(1294);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_DisableDropSound);
      if (lookahead == 'I') ADVANCE(313);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_EnableDropSound);
      if (lookahead == 'I') ADVANCE(312);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_EnableDropSound);
      if (lookahead == 'I') ADVANCE(1293);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_DisableDropSoundIfAlertSound);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_DisableDropSoundIfAlertSound);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_EnableDropSoundIfAlertSound);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_EnableDropSoundIfAlertSound);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_MinimapIcon);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_MinimapIcon);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_PlayEffect);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_PlayEffect);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_Temp);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_Temp);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_SetBackgroundColor);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_SetBackgroundColor);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_SetBorderColor);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_SetBorderColor);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_SetFontSize);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_SetFontSize);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_SetTextColor);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_SetTextColor);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_Continue);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_Continue);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      if (lookahead == '=') ADVANCE(925);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      if (lookahead == '=') ADVANCE(927);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_boolean);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'N') ADVANCE(526);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_quality_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_Superior);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_Superior);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_Divergent);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_Divergent);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_Anomalous);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_Anomalous);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_Phantasmal);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_Phantasmal);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_rarity_token1);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_Normal);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_Normal);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_Magic);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_Magic);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_Rare);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_Rare);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_Unique);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_Unique);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_influence_token1);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_Shaper);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_Shaper);
      if (lookahead == 'I') ADVANCE(1647);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_Elder);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_Elder);
      if (lookahead == 'I') ADVANCE(1646);
      if (lookahead == 'M') ADVANCE(1106);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_Crusader);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_Crusader);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_Hunter);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_Hunter);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_Redeemer);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_Redeemer);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_Warlord);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_Warlord);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '0') ADVANCE(1709);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '5') ADVANCE(1710);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1711);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'a') ADVANCE(1599);
      if (lookahead == 'l') ADVANCE(1319);
      if (lookahead == 'r') ADVANCE(1475);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_2(lookahead)) ADVANCE(1704);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_2(lookahead)) ADVANCE(1704);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'a') ADVANCE(1561);
      if (lookahead == 'h') ADVANCE(1343);
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_2(lookahead)) ADVANCE(1704);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'e') ADVANCE(1403);
      if (lookahead == 'r') ADVANCE(1194);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'i') ADVANCE(1100);
      if (lookahead == 'r') ADVANCE(1477);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'l') ADVANCE(1645);
      if (lookahead == 'n') ADVANCE(1479);
      if (lookahead == 'r') ADVANCE(1138);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1711);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1711);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(976);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '0') ADVANCE(1709);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '5') ADVANCE(1710);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1711);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'a') ADVANCE(1599);
      if (lookahead == 'l') ADVANCE(1319);
      if (lookahead == 'r') ADVANCE(1475);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_2(lookahead)) ADVANCE(1704);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_2(lookahead)) ADVANCE(1704);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'a') ADVANCE(1561);
      if (lookahead == 'h') ADVANCE(1343);
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_2(lookahead)) ADVANCE(1704);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'e') ADVANCE(1403);
      if (lookahead == 'r') ADVANCE(1194);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'i') ADVANCE(1100);
      if (lookahead == 'r') ADVANCE(1477);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'l') ADVANCE(1645);
      if (lookahead == 'n') ADVANCE(1479);
      if (lookahead == 'r') ADVANCE(1138);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1711);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1711);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(989);
      if (aux_sym_string_token2_character_set_3(lookahead)) ADVANCE(1704);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_Red);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_Red);
      if (lookahead == 'e') ADVANCE(1233);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_Green);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_Green);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_Blue);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_Blue);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_Brown);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_Brown);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_White);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_White);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_Yellow);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_Yellow);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_Cyan);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_Cyan);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_Grey);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_Grey);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_Orange);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_Orange);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_Pink);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_Pink);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_Purple);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_Purple);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_Circle);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_Diamond);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_Diamond);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_Hexagon);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_Hexagon);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_Square);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_Square);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_Star);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_Star);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_Triangle);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_Triangle);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_Cross);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_Cross);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_Moon);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_Moon);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_Raindrop);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_Raindrop);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_Kite);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_Kite);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_Pentagon);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_Pentagon);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_UpsideDownHouse);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_UpsideDownHouse);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(1036);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1037);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_2(lookahead)) ADVANCE(1037);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '1') ADVANCE(910);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'A') ADVANCE(1396);
      if (lookahead == 'E') ADVANCE(1288);
      if (aux_sym_string_token2_character_set_4(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'A') ADVANCE(1567);
      if (lookahead == 'D') ADVANCE(1229);
      if (lookahead == 'E') ADVANCE(1471);
      if (lookahead == 'T') ADVANCE(1700);
      if (lookahead == 'W') ADVANCE(1116);
      if (aux_sym_string_token2_character_set_4(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'A') ADVANCE(1399);
      if (aux_sym_string_token2_character_set_4(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'A') ADVANCE(1400);
      if (aux_sym_string_token2_character_set_4(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'A') ADVANCE(1401);
      if (aux_sym_string_token2_character_set_4(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'B') ADVANCE(1119);
      if (lookahead == 'F') ADVANCE(1515);
      if (lookahead == 'T') ADVANCE(1203);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'B') ADVANCE(1377);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'C') ADVANCE(1519);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'C') ADVANCE(1520);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'C') ADVANCE(1521);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'D') ADVANCE(1504);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'D') ADVANCE(1571);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'D') ADVANCE(1584);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'E') ADVANCE(1130);
      if (lookahead == 'I') ADVANCE(1430);
      if (lookahead == 'S') ADVANCE(1271);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'E') ADVANCE(1693);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'E') ADVANCE(1443);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'G') ADVANCE(1572);
      if (lookahead == 's') ADVANCE(880);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'H') ADVANCE(1485);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'I') ADVANCE(1153);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'I') ADVANCE(1422);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'I') ADVANCE(1648);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'I') ADVANCE(1650);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'I') ADVANCE(1424);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'L') ADVANCE(1202);
      if (lookahead == 'Q') ADVANCE(1681);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'L') ADVANCE(1278);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'L') ADVANCE(1281);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'L') ADVANCE(1282);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'M') ADVANCE(1108);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'M') ADVANCE(1490);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'M') ADVANCE(1109);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'M') ADVANCE(1492);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'M') ADVANCE(1111);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'N') ADVANCE(1512);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'O') ADVANCE(1287);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'P') ADVANCE(1265);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'P') ADVANCE(1112);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'Q') ADVANCE(1682);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1311);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1321);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1518);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1342);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1508);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1511);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1513);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1514);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1516);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'S') ADVANCE(1517);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'T') ADVANCE(1353);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'T') ADVANCE(1701);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'W') ADVANCE(1506);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == 'r') ADVANCE(1099);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1297);
      if (lookahead == 'i') ADVANCE(1440);
      if (lookahead == 'o') ADVANCE(1483);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1136);
      if (lookahead == 'c') ADVANCE(1314);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1694);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1140);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1063);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(870);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1302);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1589);
      if (lookahead == 'e') ADVANCE(1341);
      if (lookahead == 'i') ADVANCE(1181);
      if (lookahead == 'u') ADVANCE(1472);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1385);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1144);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1415);
      if (lookahead == 's') ADVANCE(1134);
      if (lookahead == 'v') ADVANCE(1237);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1600);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1426);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1524);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1366);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1439);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1525);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1609);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1527);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1528);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1577);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1530);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1610);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1444);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1371);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1372);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1564);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1373);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1582);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'o') ADVANCE(1583);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1531);
      if (lookahead == 'o') ADVANCE(1688);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1570);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1605);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1376);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1450);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1451);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1639);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1190);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1303);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1390);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1651);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == 'x') ADVANCE(1538);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1393);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1473);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1474);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1137);
      if (aux_sym_string_token2_character_set_5(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'b') ADVANCE(1232);
      if (lookahead == 'n') ADVANCE(1320);
      if (lookahead == 'p') ADVANCE(1598);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'b') ADVANCE(1380);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'b') ADVANCE(1402);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1309);
      if (lookahead == 'e') ADVANCE(1094);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(946);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1360);
      if (lookahead == 'r') ADVANCE(1021);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1361);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1476);
      if (lookahead == 'e') ADVANCE(1613);
      if (lookahead == 'h') ADVANCE(1120);
      if (lookahead == 'o') ADVANCE(1150);
      if (lookahead == 'q') ADVANCE(1665);
      if (lookahead == 't') ADVANCE(1093);
      if (lookahead == 'u') ADVANCE(1537);
      if (lookahead == 'y') ADVANCE(1445);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1378);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1642);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1318);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1095);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1618);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1217);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1219);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1363);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1364);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1335);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1497);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1337);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1338);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1277);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1316);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'c') ADVANCE(1317);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(991);
      if (lookahead == 'p') ADVANCE(1387);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1066);
      if (lookahead == 'r') ADVANCE(953);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1015);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(963);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(818);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(864);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(872);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(823);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(856);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(804);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(848);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(889);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(903);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(812);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(895);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(900);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(907);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(905);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1078);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1059);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1270);
      if (lookahead == 't') ADVANCE(1231);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1628);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1197);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1593);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1596);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1227);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1224);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1068);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1569);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1070);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1239);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1259);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1264);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1060);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'd') ADVANCE(1048);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1247);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1040);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(995);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(798);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1031);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(892);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(948);
      if (lookahead == 'i') ADVANCE(1624);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(930);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1684);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1692);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1160);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(999);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1013);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1050);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1007);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1011);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1019);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(950);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(816);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(924);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1023);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1075);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(882);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1073);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(920);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(850);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(842);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1035);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1071);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(810);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(834);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1388);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1410);
      if (lookahead == 'r') ADVANCE(1348);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1049);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1441);
      if (lookahead == 'h') ADVANCE(1124);
      if (lookahead == 'i') ADVANCE(1436);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'u') ADVANCE(1559);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1292);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1177);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1423);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1545);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1417);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1573);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1186);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1418);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1560);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1164);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1546);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1165);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1166);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1367);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1405);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1178);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1368);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1406);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1429);
      if (lookahead == 'y') ADVANCE(1005);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1566);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1167);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1369);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1407);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1615);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1370);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1408);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1547);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1548);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1448);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1565);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1549);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1550);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1576);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1634);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1551);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1588);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1568);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1147);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1604);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1381);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1469);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1447);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1118);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1606);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1455);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1458);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1464);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1466);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1467);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1685);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1188);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1192);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1686);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1687);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1585);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1586);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1587);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1051);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1088);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1291);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1374);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1339);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1266);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1257);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1042);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'f') ADVANCE(1043);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1053);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1313);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1325);
      if (lookahead == 'p') ADVANCE(1086);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1310);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1699);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1208);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1240);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1494);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1495);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1383);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1574);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1273);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'g') ADVANCE(1315);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(888);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1470);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1614);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1351);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1267);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1637);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1125);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1655);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1132);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1133);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'h') ADVANCE(1061);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1296);
      if (lookahead == 'u') ADVANCE(1196);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1544);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1702);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1557);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead == 'o') ADVANCE(1437);
      if (lookahead == 'r') ADVANCE(1507);
      if (lookahead == 'u') ADVANCE(1597);
      if (lookahead == 'y') ADVANCE(1102);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1425);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1683);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1139);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1290);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1146);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1152);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1438);
      if (lookahead == 'r') ADVANCE(1200);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1595);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1625);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1468);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1629);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1446);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1644);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1630);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1621);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1622);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1249);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1632);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1298);
      if (lookahead == 'x') ADVANCE(1096);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1703);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1636);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1612);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1184);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1413);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1498);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1113);
      if (lookahead == 'u') ADVANCE(1201);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1496);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1384);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1268);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1501);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1256);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1503);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1154);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1155);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1656);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(1307);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(1009);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(1077);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(1305);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(1230);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(1252);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'k') ADVANCE(1262);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1189);
      if (lookahead == 'n') ADVANCE(1091);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(944);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(840);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(806);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(828);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(858);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(941);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(899);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(894);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1678);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1480);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1481);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1358);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1206);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1183);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1207);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1172);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1209);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1214);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1223);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1331);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1602);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1327);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1375);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1491);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1333);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1328);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1499);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1336);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1500);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1502);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1261);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1355);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1356);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1283);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1284);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1285);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1286);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1062);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1041);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(830);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(876);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(838);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(884);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(836);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1523);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1123);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1104);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1103);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1114);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1493);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1510);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1263);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1272);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1274);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1275);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1276);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1540);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1065);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'm') ADVANCE(1541);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1362);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1003);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1027);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(997);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(993);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1289);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1017);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1033);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1056);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(814);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(909);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1359);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1641);
      if (lookahead == 'r') ADVANCE(1558);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1187);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1300);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1346);
      if (lookahead == 'r') ADVANCE(1563);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1653);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1161);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1157);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1304);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1626);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1295);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1631);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1148);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1199);
      if (lookahead == 'r') ADVANCE(1412);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1640);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1633);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1126);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1193);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1652);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1617);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1170);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1171);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1623);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1173);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1115);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1174);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1117);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1175);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1619);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1176);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1620);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1635);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1675);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1149);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1236);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead == 'v') ADVANCE(1122);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1649);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1660);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'n') ADVANCE(1661);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1690);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1666);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1543);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1449);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1411);
      if (lookahead == 'y') ADVANCE(1054);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1689);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1664);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1404);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1427);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1668);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1680);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1526);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1539);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1182);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1611);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1168);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1562);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1169);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1442);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1431);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1432);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1434);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1435);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1552);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1554);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1555);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1460);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1556);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1462);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1691);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1667);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1575);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1601);
      if (lookahead == 'u') ADVANCE(1603);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1670);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1578);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1672);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1671);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1185);
      if (lookahead == 'u') ADVANCE(1409);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1673);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1674);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1454);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1676);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1677);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1151);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1392);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1394);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1395);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'o') ADVANCE(1542);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(914);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1057);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(832);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1029);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(874);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(820);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(878);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(886);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1204);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1654);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1212);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1220);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1382);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1638);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1248);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1391);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1081);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1397);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1398);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1083);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'p') ADVANCE(1064);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'q') ADVANCE(1669);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1045);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(955);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(959);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(862);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(957);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1072);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(961);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(935);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(808);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(922);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(918);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(916);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1143);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1663);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1535);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1306);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1389);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1162);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1509);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1163);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1299);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1347);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1416);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1156);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1486);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1145);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1487);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1505);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1452);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1484);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1379);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1643);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1210);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1238);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1244);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1105);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1301);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1334);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1191);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1522);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1657);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1658);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1659);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1047);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1052);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(822);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1025);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(939);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(826);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(860);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1067);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1058);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1627);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1345);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1195);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1590);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1591);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1201);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1127);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1344);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1349);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1330);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1324);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1221);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1414);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1607);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1357);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1280);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1044);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(854);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1055);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1046);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(937);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(912);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(802);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(846);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(844);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(852);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1074);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1695);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1696);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1312);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1482);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1308);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1698);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1697);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1326);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1198);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1419);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1594);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1350);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1205);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1235);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1241);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1215);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1107);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1332);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1679);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1080);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1069);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1234);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1243);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1246);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1251);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1255);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1254);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1260);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1079);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1128);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1352);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1279);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1354);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1082);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1084);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1085);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1420);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 't') ADVANCE(1421);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1098);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1536);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1592);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1110);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1581);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1529);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1453);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1211);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1456);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1457);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1553);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1459);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1461);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1213);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1463);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1465);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1269);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1579);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1608);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1129);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1131);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'v') ADVANCE(1222);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'v') ADVANCE(1242);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'v') ADVANCE(1245);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'v') ADVANCE(1250);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'v') ADVANCE(1253);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'w') ADVANCE(796);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'w') ADVANCE(1001);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'w') ADVANCE(1428);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'w') ADVANCE(1433);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'x') ADVANCE(1616);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'x') ADVANCE(1121);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(1039);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(868);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(866);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(800);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(1087);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(1076);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(1533);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'y') ADVANCE(1534);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'z') ADVANCE(1216);
      if (aux_sym_string_token2_character_set_6(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'z') ADVANCE(1218);
      if (aux_sym_string_token2_character_set_6(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(1704);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead == ' ') ADVANCE(1705);
      if (lookahead == '#') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 127 || 159 < lookahead)) ADVANCE(1707);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= 31) ||
          lookahead == '"' ||
          lookahead == '*' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '|' ||
          (127 <= lookahead && lookahead <= 159)) ADVANCE(1728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1706);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 127 || 159 < lookahead)) ADVANCE(1707);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(1711);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym_number);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1711);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1711);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__id_token1);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__id_token1);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1712);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1714);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1715);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1714);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1714);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1717);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(1721);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1719);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1722);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1719);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1719);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1722);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym__icon_size_token1);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1725);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1725);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1728);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1729);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 792},
  [2] = {.lex_state = 792},
  [3] = {.lex_state = 792},
  [4] = {.lex_state = 792},
  [5] = {.lex_state = 792},
  [6] = {.lex_state = 792},
  [7] = {.lex_state = 792},
  [8] = {.lex_state = 792},
  [9] = {.lex_state = 792},
  [10] = {.lex_state = 792},
  [11] = {.lex_state = 792},
  [12] = {.lex_state = 792},
  [13] = {.lex_state = 792},
  [14] = {.lex_state = 792},
  [15] = {.lex_state = 792},
  [16] = {.lex_state = 792},
  [17] = {.lex_state = 792},
  [18] = {.lex_state = 792},
  [19] = {.lex_state = 792},
  [20] = {.lex_state = 792},
  [21] = {.lex_state = 792},
  [22] = {.lex_state = 792},
  [23] = {.lex_state = 792},
  [24] = {.lex_state = 792},
  [25] = {.lex_state = 792},
  [26] = {.lex_state = 792},
  [27] = {.lex_state = 792},
  [28] = {.lex_state = 792},
  [29] = {.lex_state = 792},
  [30] = {.lex_state = 792},
  [31] = {.lex_state = 792},
  [32] = {.lex_state = 792},
  [33] = {.lex_state = 792},
  [34] = {.lex_state = 792},
  [35] = {.lex_state = 792},
  [36] = {.lex_state = 792},
  [37] = {.lex_state = 792},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 792},
  [42] = {.lex_state = 792},
  [43] = {.lex_state = 792},
  [44] = {.lex_state = 792},
  [45] = {.lex_state = 792},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 792},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 792},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 792},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 792},
  [140] = {.lex_state = 792},
  [141] = {.lex_state = 792},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 792},
  [144] = {.lex_state = 792},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 792},
  [149] = {.lex_state = 792},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 792},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 792},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 792},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_AlternateQuality] = ACTIONS(1),
    [anon_sym_AnyEnchantment] = ACTIONS(1),
    [anon_sym_ArchnemesisMod] = ACTIONS(1),
    [anon_sym_AreaLevel] = ACTIONS(1),
    [anon_sym_BaseArmour] = ACTIONS(1),
    [anon_sym_BaseDefencePercentile] = ACTIONS(1),
    [anon_sym_BaseEnergyShield] = ACTIONS(1),
    [anon_sym_BaseEvasion] = ACTIONS(1),
    [anon_sym_BaseType] = ACTIONS(1),
    [anon_sym_BaseWard] = ACTIONS(1),
    [anon_sym_BlightedMap] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_Corrupted] = ACTIONS(1),
    [anon_sym_CorruptedMods] = ACTIONS(1),
    [anon_sym_DropLevel] = ACTIONS(1),
    [anon_sym_ElderItem] = ACTIONS(1),
    [anon_sym_ElderMap] = ACTIONS(1),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(1),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(1),
    [anon_sym_FracturedItem] = ACTIONS(1),
    [anon_sym_GemLevel] = ACTIONS(1),
    [anon_sym_GemQualityType] = ACTIONS(1),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(1),
    [anon_sym_HasEnchantment] = ACTIONS(1),
    [anon_sym_HasExplicitMod] = ACTIONS(1),
    [anon_sym_HasInfluence] = ACTIONS(1),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_Identified] = ACTIONS(1),
    [anon_sym_ItemLevel] = ACTIONS(1),
    [anon_sym_LinkedSockets] = ACTIONS(1),
    [anon_sym_MapTier] = ACTIONS(1),
    [anon_sym_Mirrored] = ACTIONS(1),
    [anon_sym_Quality] = ACTIONS(1),
    [anon_sym_Rarity] = ACTIONS(1),
    [anon_sym_Replica] = ACTIONS(1),
    [anon_sym_Scourged] = ACTIONS(1),
    [anon_sym_ShapedMap] = ACTIONS(1),
    [anon_sym_ShaperItem] = ACTIONS(1),
    [anon_sym_SocketGroup] = ACTIONS(1),
    [anon_sym_Sockets] = ACTIONS(1),
    [anon_sym_StackSize] = ACTIONS(1),
    [anon_sym_SynthesisedItem] = ACTIONS(1),
    [anon_sym_UberBlightedMap] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [anon_sym_PlayAlertSound] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(1),
    [anon_sym_CustomAlertSound] = ACTIONS(1),
    [aux_sym_action_token1] = ACTIONS(1),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(1),
    [anon_sym_DisableDropSound] = ACTIONS(1),
    [anon_sym_EnableDropSound] = ACTIONS(1),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(1),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(1),
    [anon_sym_MinimapIcon] = ACTIONS(1),
    [anon_sym_DASH1] = ACTIONS(1),
    [anon_sym_PlayEffect] = ACTIONS(1),
    [anon_sym_Temp] = ACTIONS(1),
    [anon_sym_SetBackgroundColor] = ACTIONS(1),
    [anon_sym_SetBorderColor] = ACTIONS(1),
    [anon_sym_SetFontSize] = ACTIONS(1),
    [anon_sym_SetTextColor] = ACTIONS(1),
    [anon_sym_Continue] = ACTIONS(1),
    [aux_sym__equal_operator_token1] = ACTIONS(1),
    [aux_sym__range_operator_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_quality_token1] = ACTIONS(1),
    [anon_sym_Superior] = ACTIONS(1),
    [anon_sym_Divergent] = ACTIONS(1),
    [anon_sym_Anomalous] = ACTIONS(1),
    [anon_sym_Phantasmal] = ACTIONS(1),
    [aux_sym_rarity_token1] = ACTIONS(1),
    [anon_sym_Normal] = ACTIONS(1),
    [anon_sym_Magic] = ACTIONS(1),
    [anon_sym_Rare] = ACTIONS(1),
    [anon_sym_Unique] = ACTIONS(1),
    [aux_sym_influence_token1] = ACTIONS(1),
    [anon_sym_Shaper] = ACTIONS(1),
    [anon_sym_Elder] = ACTIONS(1),
    [anon_sym_Crusader] = ACTIONS(1),
    [anon_sym_Hunter] = ACTIONS(1),
    [anon_sym_Redeemer] = ACTIONS(1),
    [anon_sym_Warlord] = ACTIONS(1),
    [aux_sym_sockets_token1] = ACTIONS(1),
    [aux_sym_sockets_token2] = ACTIONS(1),
    [anon_sym_Red] = ACTIONS(1),
    [anon_sym_Green] = ACTIONS(1),
    [anon_sym_Blue] = ACTIONS(1),
    [anon_sym_Brown] = ACTIONS(1),
    [anon_sym_White] = ACTIONS(1),
    [anon_sym_Yellow] = ACTIONS(1),
    [anon_sym_Cyan] = ACTIONS(1),
    [anon_sym_Grey] = ACTIONS(1),
    [anon_sym_Orange] = ACTIONS(1),
    [anon_sym_Pink] = ACTIONS(1),
    [anon_sym_Purple] = ACTIONS(1),
    [anon_sym_Circle] = ACTIONS(1),
    [anon_sym_Diamond] = ACTIONS(1),
    [anon_sym_Hexagon] = ACTIONS(1),
    [anon_sym_Square] = ACTIONS(1),
    [anon_sym_Star] = ACTIONS(1),
    [anon_sym_Triangle] = ACTIONS(1),
    [anon_sym_Cross] = ACTIONS(1),
    [anon_sym_Moon] = ACTIONS(1),
    [anon_sym_Raindrop] = ACTIONS(1),
    [anon_sym_Kite] = ACTIONS(1),
    [anon_sym_Pentagon] = ACTIONS(1),
    [anon_sym_UpsideDownHouse] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__id_token1] = ACTIONS(1),
    [aux_sym__volume_token1] = ACTIONS(1),
    [aux_sym__color_token1] = ACTIONS(1),
    [aux_sym__icon_size_token1] = ACTIONS(1),
    [aux_sym__font_size_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_filter] = STATE(179),
    [sym_block] = STATE(42),
    [aux_sym_filter_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Show] = ACTIONS(7),
    [anon_sym_Hide] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(9),
  },
  [2] = {
    [sym_condition] = STATE(2),
    [sym_action] = STATE(2),
    [sym_continue] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_Show] = ACTIONS(11),
    [anon_sym_Hide] = ACTIONS(11),
    [anon_sym_AlternateQuality] = ACTIONS(13),
    [anon_sym_AnyEnchantment] = ACTIONS(13),
    [anon_sym_ArchnemesisMod] = ACTIONS(16),
    [anon_sym_AreaLevel] = ACTIONS(19),
    [anon_sym_BaseArmour] = ACTIONS(19),
    [anon_sym_BaseDefencePercentile] = ACTIONS(19),
    [anon_sym_BaseEnergyShield] = ACTIONS(19),
    [anon_sym_BaseEvasion] = ACTIONS(19),
    [anon_sym_BaseType] = ACTIONS(22),
    [anon_sym_BaseWard] = ACTIONS(19),
    [anon_sym_BlightedMap] = ACTIONS(13),
    [anon_sym_Class] = ACTIONS(25),
    [anon_sym_Corrupted] = ACTIONS(28),
    [anon_sym_CorruptedMods] = ACTIONS(19),
    [anon_sym_DropLevel] = ACTIONS(19),
    [anon_sym_ElderItem] = ACTIONS(13),
    [anon_sym_ElderMap] = ACTIONS(13),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(31),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(19),
    [anon_sym_FracturedItem] = ACTIONS(13),
    [anon_sym_GemLevel] = ACTIONS(19),
    [anon_sym_GemQualityType] = ACTIONS(34),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(19),
    [anon_sym_HasEnchantment] = ACTIONS(31),
    [anon_sym_HasExplicitMod] = ACTIONS(37),
    [anon_sym_HasInfluence] = ACTIONS(40),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(19),
    [anon_sym_Height] = ACTIONS(19),
    [anon_sym_Identified] = ACTIONS(13),
    [anon_sym_ItemLevel] = ACTIONS(19),
    [anon_sym_LinkedSockets] = ACTIONS(19),
    [anon_sym_MapTier] = ACTIONS(19),
    [anon_sym_Mirrored] = ACTIONS(13),
    [anon_sym_Quality] = ACTIONS(19),
    [anon_sym_Rarity] = ACTIONS(43),
    [anon_sym_Replica] = ACTIONS(13),
    [anon_sym_Scourged] = ACTIONS(13),
    [anon_sym_ShapedMap] = ACTIONS(13),
    [anon_sym_ShaperItem] = ACTIONS(13),
    [anon_sym_SocketGroup] = ACTIONS(46),
    [anon_sym_Sockets] = ACTIONS(46),
    [anon_sym_StackSize] = ACTIONS(19),
    [anon_sym_SynthesisedItem] = ACTIONS(13),
    [anon_sym_UberBlightedMap] = ACTIONS(13),
    [anon_sym_Width] = ACTIONS(19),
    [anon_sym_PlayAlertSound] = ACTIONS(49),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(52),
    [anon_sym_CustomAlertSound] = ACTIONS(55),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(58),
    [anon_sym_DisableDropSound] = ACTIONS(61),
    [anon_sym_EnableDropSound] = ACTIONS(61),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(64),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(64),
    [anon_sym_MinimapIcon] = ACTIONS(67),
    [anon_sym_PlayEffect] = ACTIONS(70),
    [anon_sym_SetBackgroundColor] = ACTIONS(73),
    [anon_sym_SetBorderColor] = ACTIONS(73),
    [anon_sym_SetFontSize] = ACTIONS(76),
    [anon_sym_SetTextColor] = ACTIONS(73),
    [anon_sym_Continue] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(82),
  },
  [3] = {
    [sym_condition] = STATE(2),
    [sym_action] = STATE(2),
    [sym_continue] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_Show] = ACTIONS(85),
    [anon_sym_Hide] = ACTIONS(85),
    [anon_sym_AlternateQuality] = ACTIONS(87),
    [anon_sym_AnyEnchantment] = ACTIONS(87),
    [anon_sym_ArchnemesisMod] = ACTIONS(89),
    [anon_sym_AreaLevel] = ACTIONS(91),
    [anon_sym_BaseArmour] = ACTIONS(91),
    [anon_sym_BaseDefencePercentile] = ACTIONS(91),
    [anon_sym_BaseEnergyShield] = ACTIONS(91),
    [anon_sym_BaseEvasion] = ACTIONS(91),
    [anon_sym_BaseType] = ACTIONS(93),
    [anon_sym_BaseWard] = ACTIONS(91),
    [anon_sym_BlightedMap] = ACTIONS(87),
    [anon_sym_Class] = ACTIONS(95),
    [anon_sym_Corrupted] = ACTIONS(97),
    [anon_sym_CorruptedMods] = ACTIONS(91),
    [anon_sym_DropLevel] = ACTIONS(91),
    [anon_sym_ElderItem] = ACTIONS(87),
    [anon_sym_ElderMap] = ACTIONS(87),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(99),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(91),
    [anon_sym_FracturedItem] = ACTIONS(87),
    [anon_sym_GemLevel] = ACTIONS(91),
    [anon_sym_GemQualityType] = ACTIONS(101),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(91),
    [anon_sym_HasEnchantment] = ACTIONS(99),
    [anon_sym_HasExplicitMod] = ACTIONS(103),
    [anon_sym_HasInfluence] = ACTIONS(105),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(91),
    [anon_sym_Height] = ACTIONS(91),
    [anon_sym_Identified] = ACTIONS(87),
    [anon_sym_ItemLevel] = ACTIONS(91),
    [anon_sym_LinkedSockets] = ACTIONS(91),
    [anon_sym_MapTier] = ACTIONS(91),
    [anon_sym_Mirrored] = ACTIONS(87),
    [anon_sym_Quality] = ACTIONS(91),
    [anon_sym_Rarity] = ACTIONS(107),
    [anon_sym_Replica] = ACTIONS(87),
    [anon_sym_Scourged] = ACTIONS(87),
    [anon_sym_ShapedMap] = ACTIONS(87),
    [anon_sym_ShaperItem] = ACTIONS(87),
    [anon_sym_SocketGroup] = ACTIONS(109),
    [anon_sym_Sockets] = ACTIONS(109),
    [anon_sym_StackSize] = ACTIONS(91),
    [anon_sym_SynthesisedItem] = ACTIONS(87),
    [anon_sym_UberBlightedMap] = ACTIONS(87),
    [anon_sym_Width] = ACTIONS(91),
    [anon_sym_PlayAlertSound] = ACTIONS(111),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(113),
    [anon_sym_CustomAlertSound] = ACTIONS(115),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(117),
    [anon_sym_DisableDropSound] = ACTIONS(119),
    [anon_sym_EnableDropSound] = ACTIONS(119),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(121),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(121),
    [anon_sym_MinimapIcon] = ACTIONS(123),
    [anon_sym_PlayEffect] = ACTIONS(125),
    [anon_sym_SetBackgroundColor] = ACTIONS(127),
    [anon_sym_SetBorderColor] = ACTIONS(127),
    [anon_sym_SetFontSize] = ACTIONS(129),
    [anon_sym_SetTextColor] = ACTIONS(127),
    [anon_sym_Continue] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(133),
  },
  [4] = {
    [sym_condition] = STATE(3),
    [sym_action] = STATE(3),
    [sym_continue] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_AlternateQuality] = ACTIONS(87),
    [anon_sym_AnyEnchantment] = ACTIONS(87),
    [anon_sym_ArchnemesisMod] = ACTIONS(89),
    [anon_sym_AreaLevel] = ACTIONS(91),
    [anon_sym_BaseArmour] = ACTIONS(91),
    [anon_sym_BaseDefencePercentile] = ACTIONS(91),
    [anon_sym_BaseEnergyShield] = ACTIONS(91),
    [anon_sym_BaseEvasion] = ACTIONS(91),
    [anon_sym_BaseType] = ACTIONS(93),
    [anon_sym_BaseWard] = ACTIONS(91),
    [anon_sym_BlightedMap] = ACTIONS(87),
    [anon_sym_Class] = ACTIONS(95),
    [anon_sym_Corrupted] = ACTIONS(97),
    [anon_sym_CorruptedMods] = ACTIONS(91),
    [anon_sym_DropLevel] = ACTIONS(91),
    [anon_sym_ElderItem] = ACTIONS(87),
    [anon_sym_ElderMap] = ACTIONS(87),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(99),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(91),
    [anon_sym_FracturedItem] = ACTIONS(87),
    [anon_sym_GemLevel] = ACTIONS(91),
    [anon_sym_GemQualityType] = ACTIONS(101),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(91),
    [anon_sym_HasEnchantment] = ACTIONS(99),
    [anon_sym_HasExplicitMod] = ACTIONS(103),
    [anon_sym_HasInfluence] = ACTIONS(105),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(91),
    [anon_sym_Height] = ACTIONS(91),
    [anon_sym_Identified] = ACTIONS(87),
    [anon_sym_ItemLevel] = ACTIONS(91),
    [anon_sym_LinkedSockets] = ACTIONS(91),
    [anon_sym_MapTier] = ACTIONS(91),
    [anon_sym_Mirrored] = ACTIONS(87),
    [anon_sym_Quality] = ACTIONS(91),
    [anon_sym_Rarity] = ACTIONS(107),
    [anon_sym_Replica] = ACTIONS(87),
    [anon_sym_Scourged] = ACTIONS(87),
    [anon_sym_ShapedMap] = ACTIONS(87),
    [anon_sym_ShaperItem] = ACTIONS(87),
    [anon_sym_SocketGroup] = ACTIONS(109),
    [anon_sym_Sockets] = ACTIONS(109),
    [anon_sym_StackSize] = ACTIONS(91),
    [anon_sym_SynthesisedItem] = ACTIONS(87),
    [anon_sym_UberBlightedMap] = ACTIONS(87),
    [anon_sym_Width] = ACTIONS(91),
    [anon_sym_PlayAlertSound] = ACTIONS(111),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(113),
    [anon_sym_CustomAlertSound] = ACTIONS(115),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(117),
    [anon_sym_DisableDropSound] = ACTIONS(119),
    [anon_sym_EnableDropSound] = ACTIONS(119),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(121),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(121),
    [anon_sym_MinimapIcon] = ACTIONS(123),
    [anon_sym_PlayEffect] = ACTIONS(125),
    [anon_sym_SetBackgroundColor] = ACTIONS(127),
    [anon_sym_SetBorderColor] = ACTIONS(127),
    [anon_sym_SetFontSize] = ACTIONS(129),
    [anon_sym_SetTextColor] = ACTIONS(127),
    [anon_sym_Continue] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(135),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_Show] = ACTIONS(137),
    [anon_sym_Hide] = ACTIONS(137),
    [anon_sym_AlternateQuality] = ACTIONS(137),
    [anon_sym_AnyEnchantment] = ACTIONS(137),
    [anon_sym_ArchnemesisMod] = ACTIONS(137),
    [anon_sym_AreaLevel] = ACTIONS(137),
    [anon_sym_BaseArmour] = ACTIONS(137),
    [anon_sym_BaseDefencePercentile] = ACTIONS(137),
    [anon_sym_BaseEnergyShield] = ACTIONS(137),
    [anon_sym_BaseEvasion] = ACTIONS(137),
    [anon_sym_BaseType] = ACTIONS(137),
    [anon_sym_BaseWard] = ACTIONS(137),
    [anon_sym_BlightedMap] = ACTIONS(137),
    [anon_sym_Class] = ACTIONS(137),
    [anon_sym_Corrupted] = ACTIONS(139),
    [anon_sym_CorruptedMods] = ACTIONS(137),
    [anon_sym_DropLevel] = ACTIONS(137),
    [anon_sym_ElderItem] = ACTIONS(137),
    [anon_sym_ElderMap] = ACTIONS(137),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(137),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(137),
    [anon_sym_FracturedItem] = ACTIONS(137),
    [anon_sym_GemLevel] = ACTIONS(137),
    [anon_sym_GemQualityType] = ACTIONS(137),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(137),
    [anon_sym_HasEnchantment] = ACTIONS(137),
    [anon_sym_HasExplicitMod] = ACTIONS(137),
    [anon_sym_HasInfluence] = ACTIONS(137),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(137),
    [anon_sym_Height] = ACTIONS(137),
    [anon_sym_Identified] = ACTIONS(137),
    [anon_sym_ItemLevel] = ACTIONS(137),
    [anon_sym_LinkedSockets] = ACTIONS(137),
    [anon_sym_MapTier] = ACTIONS(137),
    [anon_sym_Mirrored] = ACTIONS(137),
    [anon_sym_Quality] = ACTIONS(137),
    [anon_sym_Rarity] = ACTIONS(137),
    [anon_sym_Replica] = ACTIONS(137),
    [anon_sym_Scourged] = ACTIONS(137),
    [anon_sym_ShapedMap] = ACTIONS(137),
    [anon_sym_ShaperItem] = ACTIONS(137),
    [anon_sym_SocketGroup] = ACTIONS(137),
    [anon_sym_Sockets] = ACTIONS(137),
    [anon_sym_StackSize] = ACTIONS(137),
    [anon_sym_SynthesisedItem] = ACTIONS(137),
    [anon_sym_UberBlightedMap] = ACTIONS(137),
    [anon_sym_Width] = ACTIONS(137),
    [anon_sym_PlayAlertSound] = ACTIONS(139),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(137),
    [anon_sym_CustomAlertSound] = ACTIONS(139),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(137),
    [anon_sym_DisableDropSound] = ACTIONS(139),
    [anon_sym_EnableDropSound] = ACTIONS(139),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(137),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(137),
    [anon_sym_MinimapIcon] = ACTIONS(137),
    [anon_sym_PlayEffect] = ACTIONS(137),
    [anon_sym_SetBackgroundColor] = ACTIONS(137),
    [anon_sym_SetBorderColor] = ACTIONS(137),
    [anon_sym_SetFontSize] = ACTIONS(137),
    [anon_sym_SetTextColor] = ACTIONS(137),
    [anon_sym_Continue] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(137),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_Show] = ACTIONS(141),
    [anon_sym_Hide] = ACTIONS(141),
    [anon_sym_AlternateQuality] = ACTIONS(141),
    [anon_sym_AnyEnchantment] = ACTIONS(141),
    [anon_sym_ArchnemesisMod] = ACTIONS(141),
    [anon_sym_AreaLevel] = ACTIONS(141),
    [anon_sym_BaseArmour] = ACTIONS(141),
    [anon_sym_BaseDefencePercentile] = ACTIONS(141),
    [anon_sym_BaseEnergyShield] = ACTIONS(141),
    [anon_sym_BaseEvasion] = ACTIONS(141),
    [anon_sym_BaseType] = ACTIONS(141),
    [anon_sym_BaseWard] = ACTIONS(141),
    [anon_sym_BlightedMap] = ACTIONS(141),
    [anon_sym_Class] = ACTIONS(141),
    [anon_sym_Corrupted] = ACTIONS(143),
    [anon_sym_CorruptedMods] = ACTIONS(141),
    [anon_sym_DropLevel] = ACTIONS(141),
    [anon_sym_ElderItem] = ACTIONS(141),
    [anon_sym_ElderMap] = ACTIONS(141),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(141),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(141),
    [anon_sym_FracturedItem] = ACTIONS(141),
    [anon_sym_GemLevel] = ACTIONS(141),
    [anon_sym_GemQualityType] = ACTIONS(141),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(141),
    [anon_sym_HasEnchantment] = ACTIONS(141),
    [anon_sym_HasExplicitMod] = ACTIONS(141),
    [anon_sym_HasInfluence] = ACTIONS(141),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(141),
    [anon_sym_Height] = ACTIONS(141),
    [anon_sym_Identified] = ACTIONS(141),
    [anon_sym_ItemLevel] = ACTIONS(141),
    [anon_sym_LinkedSockets] = ACTIONS(141),
    [anon_sym_MapTier] = ACTIONS(141),
    [anon_sym_Mirrored] = ACTIONS(141),
    [anon_sym_Quality] = ACTIONS(141),
    [anon_sym_Rarity] = ACTIONS(141),
    [anon_sym_Replica] = ACTIONS(141),
    [anon_sym_Scourged] = ACTIONS(141),
    [anon_sym_ShapedMap] = ACTIONS(141),
    [anon_sym_ShaperItem] = ACTIONS(141),
    [anon_sym_SocketGroup] = ACTIONS(141),
    [anon_sym_Sockets] = ACTIONS(141),
    [anon_sym_StackSize] = ACTIONS(141),
    [anon_sym_SynthesisedItem] = ACTIONS(141),
    [anon_sym_UberBlightedMap] = ACTIONS(141),
    [anon_sym_Width] = ACTIONS(141),
    [anon_sym_PlayAlertSound] = ACTIONS(143),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(141),
    [anon_sym_CustomAlertSound] = ACTIONS(143),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(141),
    [anon_sym_DisableDropSound] = ACTIONS(143),
    [anon_sym_EnableDropSound] = ACTIONS(143),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(141),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(141),
    [anon_sym_MinimapIcon] = ACTIONS(141),
    [anon_sym_PlayEffect] = ACTIONS(141),
    [anon_sym_SetBackgroundColor] = ACTIONS(141),
    [anon_sym_SetBorderColor] = ACTIONS(141),
    [anon_sym_SetFontSize] = ACTIONS(141),
    [anon_sym_SetTextColor] = ACTIONS(141),
    [anon_sym_Continue] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(141),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_Show] = ACTIONS(145),
    [anon_sym_Hide] = ACTIONS(145),
    [anon_sym_AlternateQuality] = ACTIONS(145),
    [anon_sym_AnyEnchantment] = ACTIONS(145),
    [anon_sym_ArchnemesisMod] = ACTIONS(145),
    [anon_sym_AreaLevel] = ACTIONS(145),
    [anon_sym_BaseArmour] = ACTIONS(145),
    [anon_sym_BaseDefencePercentile] = ACTIONS(145),
    [anon_sym_BaseEnergyShield] = ACTIONS(145),
    [anon_sym_BaseEvasion] = ACTIONS(145),
    [anon_sym_BaseType] = ACTIONS(145),
    [anon_sym_BaseWard] = ACTIONS(145),
    [anon_sym_BlightedMap] = ACTIONS(145),
    [anon_sym_Class] = ACTIONS(145),
    [anon_sym_Corrupted] = ACTIONS(147),
    [anon_sym_CorruptedMods] = ACTIONS(145),
    [anon_sym_DropLevel] = ACTIONS(145),
    [anon_sym_ElderItem] = ACTIONS(145),
    [anon_sym_ElderMap] = ACTIONS(145),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(145),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(145),
    [anon_sym_FracturedItem] = ACTIONS(145),
    [anon_sym_GemLevel] = ACTIONS(145),
    [anon_sym_GemQualityType] = ACTIONS(145),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(145),
    [anon_sym_HasEnchantment] = ACTIONS(145),
    [anon_sym_HasExplicitMod] = ACTIONS(145),
    [anon_sym_HasInfluence] = ACTIONS(145),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(145),
    [anon_sym_Height] = ACTIONS(145),
    [anon_sym_Identified] = ACTIONS(145),
    [anon_sym_ItemLevel] = ACTIONS(145),
    [anon_sym_LinkedSockets] = ACTIONS(145),
    [anon_sym_MapTier] = ACTIONS(145),
    [anon_sym_Mirrored] = ACTIONS(145),
    [anon_sym_Quality] = ACTIONS(145),
    [anon_sym_Rarity] = ACTIONS(145),
    [anon_sym_Replica] = ACTIONS(145),
    [anon_sym_Scourged] = ACTIONS(145),
    [anon_sym_ShapedMap] = ACTIONS(145),
    [anon_sym_ShaperItem] = ACTIONS(145),
    [anon_sym_SocketGroup] = ACTIONS(145),
    [anon_sym_Sockets] = ACTIONS(145),
    [anon_sym_StackSize] = ACTIONS(145),
    [anon_sym_SynthesisedItem] = ACTIONS(145),
    [anon_sym_UberBlightedMap] = ACTIONS(145),
    [anon_sym_Width] = ACTIONS(145),
    [anon_sym_PlayAlertSound] = ACTIONS(147),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(145),
    [anon_sym_CustomAlertSound] = ACTIONS(147),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(145),
    [anon_sym_DisableDropSound] = ACTIONS(147),
    [anon_sym_EnableDropSound] = ACTIONS(147),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(145),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(145),
    [anon_sym_MinimapIcon] = ACTIONS(145),
    [anon_sym_PlayEffect] = ACTIONS(145),
    [anon_sym_SetBackgroundColor] = ACTIONS(145),
    [anon_sym_SetBorderColor] = ACTIONS(145),
    [anon_sym_SetFontSize] = ACTIONS(145),
    [anon_sym_SetTextColor] = ACTIONS(145),
    [anon_sym_Continue] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(145),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_Show] = ACTIONS(149),
    [anon_sym_Hide] = ACTIONS(149),
    [anon_sym_AlternateQuality] = ACTIONS(149),
    [anon_sym_AnyEnchantment] = ACTIONS(149),
    [anon_sym_ArchnemesisMod] = ACTIONS(149),
    [anon_sym_AreaLevel] = ACTIONS(149),
    [anon_sym_BaseArmour] = ACTIONS(149),
    [anon_sym_BaseDefencePercentile] = ACTIONS(149),
    [anon_sym_BaseEnergyShield] = ACTIONS(149),
    [anon_sym_BaseEvasion] = ACTIONS(149),
    [anon_sym_BaseType] = ACTIONS(149),
    [anon_sym_BaseWard] = ACTIONS(149),
    [anon_sym_BlightedMap] = ACTIONS(149),
    [anon_sym_Class] = ACTIONS(149),
    [anon_sym_Corrupted] = ACTIONS(151),
    [anon_sym_CorruptedMods] = ACTIONS(149),
    [anon_sym_DropLevel] = ACTIONS(149),
    [anon_sym_ElderItem] = ACTIONS(149),
    [anon_sym_ElderMap] = ACTIONS(149),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(149),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(149),
    [anon_sym_FracturedItem] = ACTIONS(149),
    [anon_sym_GemLevel] = ACTIONS(149),
    [anon_sym_GemQualityType] = ACTIONS(149),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(149),
    [anon_sym_HasEnchantment] = ACTIONS(149),
    [anon_sym_HasExplicitMod] = ACTIONS(149),
    [anon_sym_HasInfluence] = ACTIONS(149),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(149),
    [anon_sym_Height] = ACTIONS(149),
    [anon_sym_Identified] = ACTIONS(149),
    [anon_sym_ItemLevel] = ACTIONS(149),
    [anon_sym_LinkedSockets] = ACTIONS(149),
    [anon_sym_MapTier] = ACTIONS(149),
    [anon_sym_Mirrored] = ACTIONS(149),
    [anon_sym_Quality] = ACTIONS(149),
    [anon_sym_Rarity] = ACTIONS(149),
    [anon_sym_Replica] = ACTIONS(149),
    [anon_sym_Scourged] = ACTIONS(149),
    [anon_sym_ShapedMap] = ACTIONS(149),
    [anon_sym_ShaperItem] = ACTIONS(149),
    [anon_sym_SocketGroup] = ACTIONS(149),
    [anon_sym_Sockets] = ACTIONS(149),
    [anon_sym_StackSize] = ACTIONS(149),
    [anon_sym_SynthesisedItem] = ACTIONS(149),
    [anon_sym_UberBlightedMap] = ACTIONS(149),
    [anon_sym_Width] = ACTIONS(149),
    [anon_sym_PlayAlertSound] = ACTIONS(151),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(149),
    [anon_sym_CustomAlertSound] = ACTIONS(151),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(149),
    [anon_sym_DisableDropSound] = ACTIONS(151),
    [anon_sym_EnableDropSound] = ACTIONS(151),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(149),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(149),
    [anon_sym_MinimapIcon] = ACTIONS(149),
    [anon_sym_PlayEffect] = ACTIONS(149),
    [anon_sym_SetBackgroundColor] = ACTIONS(149),
    [anon_sym_SetBorderColor] = ACTIONS(149),
    [anon_sym_SetFontSize] = ACTIONS(149),
    [anon_sym_SetTextColor] = ACTIONS(149),
    [anon_sym_Continue] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(149),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_Show] = ACTIONS(153),
    [anon_sym_Hide] = ACTIONS(153),
    [anon_sym_AlternateQuality] = ACTIONS(153),
    [anon_sym_AnyEnchantment] = ACTIONS(153),
    [anon_sym_ArchnemesisMod] = ACTIONS(153),
    [anon_sym_AreaLevel] = ACTIONS(153),
    [anon_sym_BaseArmour] = ACTIONS(153),
    [anon_sym_BaseDefencePercentile] = ACTIONS(153),
    [anon_sym_BaseEnergyShield] = ACTIONS(153),
    [anon_sym_BaseEvasion] = ACTIONS(153),
    [anon_sym_BaseType] = ACTIONS(153),
    [anon_sym_BaseWard] = ACTIONS(153),
    [anon_sym_BlightedMap] = ACTIONS(153),
    [anon_sym_Class] = ACTIONS(153),
    [anon_sym_Corrupted] = ACTIONS(155),
    [anon_sym_CorruptedMods] = ACTIONS(153),
    [anon_sym_DropLevel] = ACTIONS(153),
    [anon_sym_ElderItem] = ACTIONS(153),
    [anon_sym_ElderMap] = ACTIONS(153),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(153),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(153),
    [anon_sym_FracturedItem] = ACTIONS(153),
    [anon_sym_GemLevel] = ACTIONS(153),
    [anon_sym_GemQualityType] = ACTIONS(153),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(153),
    [anon_sym_HasEnchantment] = ACTIONS(153),
    [anon_sym_HasExplicitMod] = ACTIONS(153),
    [anon_sym_HasInfluence] = ACTIONS(153),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(153),
    [anon_sym_Height] = ACTIONS(153),
    [anon_sym_Identified] = ACTIONS(153),
    [anon_sym_ItemLevel] = ACTIONS(153),
    [anon_sym_LinkedSockets] = ACTIONS(153),
    [anon_sym_MapTier] = ACTIONS(153),
    [anon_sym_Mirrored] = ACTIONS(153),
    [anon_sym_Quality] = ACTIONS(153),
    [anon_sym_Rarity] = ACTIONS(153),
    [anon_sym_Replica] = ACTIONS(153),
    [anon_sym_Scourged] = ACTIONS(153),
    [anon_sym_ShapedMap] = ACTIONS(153),
    [anon_sym_ShaperItem] = ACTIONS(153),
    [anon_sym_SocketGroup] = ACTIONS(153),
    [anon_sym_Sockets] = ACTIONS(153),
    [anon_sym_StackSize] = ACTIONS(153),
    [anon_sym_SynthesisedItem] = ACTIONS(153),
    [anon_sym_UberBlightedMap] = ACTIONS(153),
    [anon_sym_Width] = ACTIONS(153),
    [anon_sym_PlayAlertSound] = ACTIONS(155),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(153),
    [anon_sym_CustomAlertSound] = ACTIONS(155),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(153),
    [anon_sym_DisableDropSound] = ACTIONS(155),
    [anon_sym_EnableDropSound] = ACTIONS(155),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(153),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(153),
    [anon_sym_MinimapIcon] = ACTIONS(153),
    [anon_sym_PlayEffect] = ACTIONS(153),
    [anon_sym_SetBackgroundColor] = ACTIONS(153),
    [anon_sym_SetBorderColor] = ACTIONS(153),
    [anon_sym_SetFontSize] = ACTIONS(153),
    [anon_sym_SetTextColor] = ACTIONS(153),
    [anon_sym_Continue] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(153),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_Show] = ACTIONS(157),
    [anon_sym_Hide] = ACTIONS(157),
    [anon_sym_AlternateQuality] = ACTIONS(157),
    [anon_sym_AnyEnchantment] = ACTIONS(157),
    [anon_sym_ArchnemesisMod] = ACTIONS(157),
    [anon_sym_AreaLevel] = ACTIONS(157),
    [anon_sym_BaseArmour] = ACTIONS(157),
    [anon_sym_BaseDefencePercentile] = ACTIONS(157),
    [anon_sym_BaseEnergyShield] = ACTIONS(157),
    [anon_sym_BaseEvasion] = ACTIONS(157),
    [anon_sym_BaseType] = ACTIONS(157),
    [anon_sym_BaseWard] = ACTIONS(157),
    [anon_sym_BlightedMap] = ACTIONS(157),
    [anon_sym_Class] = ACTIONS(157),
    [anon_sym_Corrupted] = ACTIONS(159),
    [anon_sym_CorruptedMods] = ACTIONS(157),
    [anon_sym_DropLevel] = ACTIONS(157),
    [anon_sym_ElderItem] = ACTIONS(157),
    [anon_sym_ElderMap] = ACTIONS(157),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(157),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(157),
    [anon_sym_FracturedItem] = ACTIONS(157),
    [anon_sym_GemLevel] = ACTIONS(157),
    [anon_sym_GemQualityType] = ACTIONS(157),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(157),
    [anon_sym_HasEnchantment] = ACTIONS(157),
    [anon_sym_HasExplicitMod] = ACTIONS(157),
    [anon_sym_HasInfluence] = ACTIONS(157),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(157),
    [anon_sym_Height] = ACTIONS(157),
    [anon_sym_Identified] = ACTIONS(157),
    [anon_sym_ItemLevel] = ACTIONS(157),
    [anon_sym_LinkedSockets] = ACTIONS(157),
    [anon_sym_MapTier] = ACTIONS(157),
    [anon_sym_Mirrored] = ACTIONS(157),
    [anon_sym_Quality] = ACTIONS(157),
    [anon_sym_Rarity] = ACTIONS(157),
    [anon_sym_Replica] = ACTIONS(157),
    [anon_sym_Scourged] = ACTIONS(157),
    [anon_sym_ShapedMap] = ACTIONS(157),
    [anon_sym_ShaperItem] = ACTIONS(157),
    [anon_sym_SocketGroup] = ACTIONS(157),
    [anon_sym_Sockets] = ACTIONS(157),
    [anon_sym_StackSize] = ACTIONS(157),
    [anon_sym_SynthesisedItem] = ACTIONS(157),
    [anon_sym_UberBlightedMap] = ACTIONS(157),
    [anon_sym_Width] = ACTIONS(157),
    [anon_sym_PlayAlertSound] = ACTIONS(159),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(157),
    [anon_sym_CustomAlertSound] = ACTIONS(159),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(157),
    [anon_sym_DisableDropSound] = ACTIONS(159),
    [anon_sym_EnableDropSound] = ACTIONS(159),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(157),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(157),
    [anon_sym_MinimapIcon] = ACTIONS(157),
    [anon_sym_PlayEffect] = ACTIONS(157),
    [anon_sym_SetBackgroundColor] = ACTIONS(157),
    [anon_sym_SetBorderColor] = ACTIONS(157),
    [anon_sym_SetFontSize] = ACTIONS(157),
    [anon_sym_SetTextColor] = ACTIONS(157),
    [anon_sym_Continue] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(157),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_Show] = ACTIONS(161),
    [anon_sym_Hide] = ACTIONS(161),
    [anon_sym_AlternateQuality] = ACTIONS(161),
    [anon_sym_AnyEnchantment] = ACTIONS(161),
    [anon_sym_ArchnemesisMod] = ACTIONS(161),
    [anon_sym_AreaLevel] = ACTIONS(161),
    [anon_sym_BaseArmour] = ACTIONS(161),
    [anon_sym_BaseDefencePercentile] = ACTIONS(161),
    [anon_sym_BaseEnergyShield] = ACTIONS(161),
    [anon_sym_BaseEvasion] = ACTIONS(161),
    [anon_sym_BaseType] = ACTIONS(161),
    [anon_sym_BaseWard] = ACTIONS(161),
    [anon_sym_BlightedMap] = ACTIONS(161),
    [anon_sym_Class] = ACTIONS(161),
    [anon_sym_Corrupted] = ACTIONS(163),
    [anon_sym_CorruptedMods] = ACTIONS(161),
    [anon_sym_DropLevel] = ACTIONS(161),
    [anon_sym_ElderItem] = ACTIONS(161),
    [anon_sym_ElderMap] = ACTIONS(161),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(161),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(161),
    [anon_sym_FracturedItem] = ACTIONS(161),
    [anon_sym_GemLevel] = ACTIONS(161),
    [anon_sym_GemQualityType] = ACTIONS(161),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(161),
    [anon_sym_HasEnchantment] = ACTIONS(161),
    [anon_sym_HasExplicitMod] = ACTIONS(161),
    [anon_sym_HasInfluence] = ACTIONS(161),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(161),
    [anon_sym_Height] = ACTIONS(161),
    [anon_sym_Identified] = ACTIONS(161),
    [anon_sym_ItemLevel] = ACTIONS(161),
    [anon_sym_LinkedSockets] = ACTIONS(161),
    [anon_sym_MapTier] = ACTIONS(161),
    [anon_sym_Mirrored] = ACTIONS(161),
    [anon_sym_Quality] = ACTIONS(161),
    [anon_sym_Rarity] = ACTIONS(161),
    [anon_sym_Replica] = ACTIONS(161),
    [anon_sym_Scourged] = ACTIONS(161),
    [anon_sym_ShapedMap] = ACTIONS(161),
    [anon_sym_ShaperItem] = ACTIONS(161),
    [anon_sym_SocketGroup] = ACTIONS(161),
    [anon_sym_Sockets] = ACTIONS(161),
    [anon_sym_StackSize] = ACTIONS(161),
    [anon_sym_SynthesisedItem] = ACTIONS(161),
    [anon_sym_UberBlightedMap] = ACTIONS(161),
    [anon_sym_Width] = ACTIONS(161),
    [anon_sym_PlayAlertSound] = ACTIONS(163),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(161),
    [anon_sym_CustomAlertSound] = ACTIONS(163),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(161),
    [anon_sym_DisableDropSound] = ACTIONS(163),
    [anon_sym_EnableDropSound] = ACTIONS(163),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(161),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(161),
    [anon_sym_MinimapIcon] = ACTIONS(161),
    [anon_sym_PlayEffect] = ACTIONS(161),
    [anon_sym_SetBackgroundColor] = ACTIONS(161),
    [anon_sym_SetBorderColor] = ACTIONS(161),
    [anon_sym_SetFontSize] = ACTIONS(161),
    [anon_sym_SetTextColor] = ACTIONS(161),
    [anon_sym_Continue] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(161),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_Show] = ACTIONS(165),
    [anon_sym_Hide] = ACTIONS(165),
    [anon_sym_AlternateQuality] = ACTIONS(165),
    [anon_sym_AnyEnchantment] = ACTIONS(165),
    [anon_sym_ArchnemesisMod] = ACTIONS(165),
    [anon_sym_AreaLevel] = ACTIONS(165),
    [anon_sym_BaseArmour] = ACTIONS(165),
    [anon_sym_BaseDefencePercentile] = ACTIONS(165),
    [anon_sym_BaseEnergyShield] = ACTIONS(165),
    [anon_sym_BaseEvasion] = ACTIONS(165),
    [anon_sym_BaseType] = ACTIONS(165),
    [anon_sym_BaseWard] = ACTIONS(165),
    [anon_sym_BlightedMap] = ACTIONS(165),
    [anon_sym_Class] = ACTIONS(165),
    [anon_sym_Corrupted] = ACTIONS(167),
    [anon_sym_CorruptedMods] = ACTIONS(165),
    [anon_sym_DropLevel] = ACTIONS(165),
    [anon_sym_ElderItem] = ACTIONS(165),
    [anon_sym_ElderMap] = ACTIONS(165),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(165),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(165),
    [anon_sym_FracturedItem] = ACTIONS(165),
    [anon_sym_GemLevel] = ACTIONS(165),
    [anon_sym_GemQualityType] = ACTIONS(165),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(165),
    [anon_sym_HasEnchantment] = ACTIONS(165),
    [anon_sym_HasExplicitMod] = ACTIONS(165),
    [anon_sym_HasInfluence] = ACTIONS(165),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(165),
    [anon_sym_Height] = ACTIONS(165),
    [anon_sym_Identified] = ACTIONS(165),
    [anon_sym_ItemLevel] = ACTIONS(165),
    [anon_sym_LinkedSockets] = ACTIONS(165),
    [anon_sym_MapTier] = ACTIONS(165),
    [anon_sym_Mirrored] = ACTIONS(165),
    [anon_sym_Quality] = ACTIONS(165),
    [anon_sym_Rarity] = ACTIONS(165),
    [anon_sym_Replica] = ACTIONS(165),
    [anon_sym_Scourged] = ACTIONS(165),
    [anon_sym_ShapedMap] = ACTIONS(165),
    [anon_sym_ShaperItem] = ACTIONS(165),
    [anon_sym_SocketGroup] = ACTIONS(165),
    [anon_sym_Sockets] = ACTIONS(165),
    [anon_sym_StackSize] = ACTIONS(165),
    [anon_sym_SynthesisedItem] = ACTIONS(165),
    [anon_sym_UberBlightedMap] = ACTIONS(165),
    [anon_sym_Width] = ACTIONS(165),
    [anon_sym_PlayAlertSound] = ACTIONS(167),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(165),
    [anon_sym_CustomAlertSound] = ACTIONS(167),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(165),
    [anon_sym_DisableDropSound] = ACTIONS(167),
    [anon_sym_EnableDropSound] = ACTIONS(167),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(165),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(165),
    [anon_sym_MinimapIcon] = ACTIONS(165),
    [anon_sym_PlayEffect] = ACTIONS(165),
    [anon_sym_SetBackgroundColor] = ACTIONS(165),
    [anon_sym_SetBorderColor] = ACTIONS(165),
    [anon_sym_SetFontSize] = ACTIONS(165),
    [anon_sym_SetTextColor] = ACTIONS(165),
    [anon_sym_Continue] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(165),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_Show] = ACTIONS(169),
    [anon_sym_Hide] = ACTIONS(169),
    [anon_sym_AlternateQuality] = ACTIONS(169),
    [anon_sym_AnyEnchantment] = ACTIONS(169),
    [anon_sym_ArchnemesisMod] = ACTIONS(169),
    [anon_sym_AreaLevel] = ACTIONS(169),
    [anon_sym_BaseArmour] = ACTIONS(169),
    [anon_sym_BaseDefencePercentile] = ACTIONS(169),
    [anon_sym_BaseEnergyShield] = ACTIONS(169),
    [anon_sym_BaseEvasion] = ACTIONS(169),
    [anon_sym_BaseType] = ACTIONS(169),
    [anon_sym_BaseWard] = ACTIONS(169),
    [anon_sym_BlightedMap] = ACTIONS(169),
    [anon_sym_Class] = ACTIONS(169),
    [anon_sym_Corrupted] = ACTIONS(171),
    [anon_sym_CorruptedMods] = ACTIONS(169),
    [anon_sym_DropLevel] = ACTIONS(169),
    [anon_sym_ElderItem] = ACTIONS(169),
    [anon_sym_ElderMap] = ACTIONS(169),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(169),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(169),
    [anon_sym_FracturedItem] = ACTIONS(169),
    [anon_sym_GemLevel] = ACTIONS(169),
    [anon_sym_GemQualityType] = ACTIONS(169),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(169),
    [anon_sym_HasEnchantment] = ACTIONS(169),
    [anon_sym_HasExplicitMod] = ACTIONS(169),
    [anon_sym_HasInfluence] = ACTIONS(169),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(169),
    [anon_sym_Height] = ACTIONS(169),
    [anon_sym_Identified] = ACTIONS(169),
    [anon_sym_ItemLevel] = ACTIONS(169),
    [anon_sym_LinkedSockets] = ACTIONS(169),
    [anon_sym_MapTier] = ACTIONS(169),
    [anon_sym_Mirrored] = ACTIONS(169),
    [anon_sym_Quality] = ACTIONS(169),
    [anon_sym_Rarity] = ACTIONS(169),
    [anon_sym_Replica] = ACTIONS(169),
    [anon_sym_Scourged] = ACTIONS(169),
    [anon_sym_ShapedMap] = ACTIONS(169),
    [anon_sym_ShaperItem] = ACTIONS(169),
    [anon_sym_SocketGroup] = ACTIONS(169),
    [anon_sym_Sockets] = ACTIONS(169),
    [anon_sym_StackSize] = ACTIONS(169),
    [anon_sym_SynthesisedItem] = ACTIONS(169),
    [anon_sym_UberBlightedMap] = ACTIONS(169),
    [anon_sym_Width] = ACTIONS(169),
    [anon_sym_PlayAlertSound] = ACTIONS(171),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(169),
    [anon_sym_CustomAlertSound] = ACTIONS(171),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(169),
    [anon_sym_DisableDropSound] = ACTIONS(171),
    [anon_sym_EnableDropSound] = ACTIONS(171),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(169),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(169),
    [anon_sym_MinimapIcon] = ACTIONS(169),
    [anon_sym_PlayEffect] = ACTIONS(169),
    [anon_sym_SetBackgroundColor] = ACTIONS(169),
    [anon_sym_SetBorderColor] = ACTIONS(169),
    [anon_sym_SetFontSize] = ACTIONS(169),
    [anon_sym_SetTextColor] = ACTIONS(169),
    [anon_sym_Continue] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(169),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_Show] = ACTIONS(173),
    [anon_sym_Hide] = ACTIONS(173),
    [anon_sym_AlternateQuality] = ACTIONS(173),
    [anon_sym_AnyEnchantment] = ACTIONS(173),
    [anon_sym_ArchnemesisMod] = ACTIONS(173),
    [anon_sym_AreaLevel] = ACTIONS(173),
    [anon_sym_BaseArmour] = ACTIONS(173),
    [anon_sym_BaseDefencePercentile] = ACTIONS(173),
    [anon_sym_BaseEnergyShield] = ACTIONS(173),
    [anon_sym_BaseEvasion] = ACTIONS(173),
    [anon_sym_BaseType] = ACTIONS(173),
    [anon_sym_BaseWard] = ACTIONS(173),
    [anon_sym_BlightedMap] = ACTIONS(173),
    [anon_sym_Class] = ACTIONS(173),
    [anon_sym_Corrupted] = ACTIONS(175),
    [anon_sym_CorruptedMods] = ACTIONS(173),
    [anon_sym_DropLevel] = ACTIONS(173),
    [anon_sym_ElderItem] = ACTIONS(173),
    [anon_sym_ElderMap] = ACTIONS(173),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(173),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(173),
    [anon_sym_FracturedItem] = ACTIONS(173),
    [anon_sym_GemLevel] = ACTIONS(173),
    [anon_sym_GemQualityType] = ACTIONS(173),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(173),
    [anon_sym_HasEnchantment] = ACTIONS(173),
    [anon_sym_HasExplicitMod] = ACTIONS(173),
    [anon_sym_HasInfluence] = ACTIONS(173),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(173),
    [anon_sym_Height] = ACTIONS(173),
    [anon_sym_Identified] = ACTIONS(173),
    [anon_sym_ItemLevel] = ACTIONS(173),
    [anon_sym_LinkedSockets] = ACTIONS(173),
    [anon_sym_MapTier] = ACTIONS(173),
    [anon_sym_Mirrored] = ACTIONS(173),
    [anon_sym_Quality] = ACTIONS(173),
    [anon_sym_Rarity] = ACTIONS(173),
    [anon_sym_Replica] = ACTIONS(173),
    [anon_sym_Scourged] = ACTIONS(173),
    [anon_sym_ShapedMap] = ACTIONS(173),
    [anon_sym_ShaperItem] = ACTIONS(173),
    [anon_sym_SocketGroup] = ACTIONS(173),
    [anon_sym_Sockets] = ACTIONS(173),
    [anon_sym_StackSize] = ACTIONS(173),
    [anon_sym_SynthesisedItem] = ACTIONS(173),
    [anon_sym_UberBlightedMap] = ACTIONS(173),
    [anon_sym_Width] = ACTIONS(173),
    [anon_sym_PlayAlertSound] = ACTIONS(175),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(173),
    [anon_sym_CustomAlertSound] = ACTIONS(175),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(173),
    [anon_sym_DisableDropSound] = ACTIONS(175),
    [anon_sym_EnableDropSound] = ACTIONS(175),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(173),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(173),
    [anon_sym_MinimapIcon] = ACTIONS(173),
    [anon_sym_PlayEffect] = ACTIONS(173),
    [anon_sym_SetBackgroundColor] = ACTIONS(173),
    [anon_sym_SetBorderColor] = ACTIONS(173),
    [anon_sym_SetFontSize] = ACTIONS(173),
    [anon_sym_SetTextColor] = ACTIONS(173),
    [anon_sym_Continue] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(173),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_Show] = ACTIONS(177),
    [anon_sym_Hide] = ACTIONS(177),
    [anon_sym_AlternateQuality] = ACTIONS(177),
    [anon_sym_AnyEnchantment] = ACTIONS(177),
    [anon_sym_ArchnemesisMod] = ACTIONS(177),
    [anon_sym_AreaLevel] = ACTIONS(177),
    [anon_sym_BaseArmour] = ACTIONS(177),
    [anon_sym_BaseDefencePercentile] = ACTIONS(177),
    [anon_sym_BaseEnergyShield] = ACTIONS(177),
    [anon_sym_BaseEvasion] = ACTIONS(177),
    [anon_sym_BaseType] = ACTIONS(177),
    [anon_sym_BaseWard] = ACTIONS(177),
    [anon_sym_BlightedMap] = ACTIONS(177),
    [anon_sym_Class] = ACTIONS(177),
    [anon_sym_Corrupted] = ACTIONS(179),
    [anon_sym_CorruptedMods] = ACTIONS(177),
    [anon_sym_DropLevel] = ACTIONS(177),
    [anon_sym_ElderItem] = ACTIONS(177),
    [anon_sym_ElderMap] = ACTIONS(177),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(177),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(177),
    [anon_sym_FracturedItem] = ACTIONS(177),
    [anon_sym_GemLevel] = ACTIONS(177),
    [anon_sym_GemQualityType] = ACTIONS(177),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(177),
    [anon_sym_HasEnchantment] = ACTIONS(177),
    [anon_sym_HasExplicitMod] = ACTIONS(177),
    [anon_sym_HasInfluence] = ACTIONS(177),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(177),
    [anon_sym_Height] = ACTIONS(177),
    [anon_sym_Identified] = ACTIONS(177),
    [anon_sym_ItemLevel] = ACTIONS(177),
    [anon_sym_LinkedSockets] = ACTIONS(177),
    [anon_sym_MapTier] = ACTIONS(177),
    [anon_sym_Mirrored] = ACTIONS(177),
    [anon_sym_Quality] = ACTIONS(177),
    [anon_sym_Rarity] = ACTIONS(177),
    [anon_sym_Replica] = ACTIONS(177),
    [anon_sym_Scourged] = ACTIONS(177),
    [anon_sym_ShapedMap] = ACTIONS(177),
    [anon_sym_ShaperItem] = ACTIONS(177),
    [anon_sym_SocketGroup] = ACTIONS(177),
    [anon_sym_Sockets] = ACTIONS(177),
    [anon_sym_StackSize] = ACTIONS(177),
    [anon_sym_SynthesisedItem] = ACTIONS(177),
    [anon_sym_UberBlightedMap] = ACTIONS(177),
    [anon_sym_Width] = ACTIONS(177),
    [anon_sym_PlayAlertSound] = ACTIONS(179),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(177),
    [anon_sym_CustomAlertSound] = ACTIONS(179),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(177),
    [anon_sym_DisableDropSound] = ACTIONS(179),
    [anon_sym_EnableDropSound] = ACTIONS(179),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(177),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(177),
    [anon_sym_MinimapIcon] = ACTIONS(177),
    [anon_sym_PlayEffect] = ACTIONS(177),
    [anon_sym_SetBackgroundColor] = ACTIONS(177),
    [anon_sym_SetBorderColor] = ACTIONS(177),
    [anon_sym_SetFontSize] = ACTIONS(177),
    [anon_sym_SetTextColor] = ACTIONS(177),
    [anon_sym_Continue] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(177),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_Show] = ACTIONS(181),
    [anon_sym_Hide] = ACTIONS(181),
    [anon_sym_AlternateQuality] = ACTIONS(181),
    [anon_sym_AnyEnchantment] = ACTIONS(181),
    [anon_sym_ArchnemesisMod] = ACTIONS(181),
    [anon_sym_AreaLevel] = ACTIONS(181),
    [anon_sym_BaseArmour] = ACTIONS(181),
    [anon_sym_BaseDefencePercentile] = ACTIONS(181),
    [anon_sym_BaseEnergyShield] = ACTIONS(181),
    [anon_sym_BaseEvasion] = ACTIONS(181),
    [anon_sym_BaseType] = ACTIONS(181),
    [anon_sym_BaseWard] = ACTIONS(181),
    [anon_sym_BlightedMap] = ACTIONS(181),
    [anon_sym_Class] = ACTIONS(181),
    [anon_sym_Corrupted] = ACTIONS(183),
    [anon_sym_CorruptedMods] = ACTIONS(181),
    [anon_sym_DropLevel] = ACTIONS(181),
    [anon_sym_ElderItem] = ACTIONS(181),
    [anon_sym_ElderMap] = ACTIONS(181),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(181),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(181),
    [anon_sym_FracturedItem] = ACTIONS(181),
    [anon_sym_GemLevel] = ACTIONS(181),
    [anon_sym_GemQualityType] = ACTIONS(181),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(181),
    [anon_sym_HasEnchantment] = ACTIONS(181),
    [anon_sym_HasExplicitMod] = ACTIONS(181),
    [anon_sym_HasInfluence] = ACTIONS(181),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(181),
    [anon_sym_Height] = ACTIONS(181),
    [anon_sym_Identified] = ACTIONS(181),
    [anon_sym_ItemLevel] = ACTIONS(181),
    [anon_sym_LinkedSockets] = ACTIONS(181),
    [anon_sym_MapTier] = ACTIONS(181),
    [anon_sym_Mirrored] = ACTIONS(181),
    [anon_sym_Quality] = ACTIONS(181),
    [anon_sym_Rarity] = ACTIONS(181),
    [anon_sym_Replica] = ACTIONS(181),
    [anon_sym_Scourged] = ACTIONS(181),
    [anon_sym_ShapedMap] = ACTIONS(181),
    [anon_sym_ShaperItem] = ACTIONS(181),
    [anon_sym_SocketGroup] = ACTIONS(181),
    [anon_sym_Sockets] = ACTIONS(181),
    [anon_sym_StackSize] = ACTIONS(181),
    [anon_sym_SynthesisedItem] = ACTIONS(181),
    [anon_sym_UberBlightedMap] = ACTIONS(181),
    [anon_sym_Width] = ACTIONS(181),
    [anon_sym_PlayAlertSound] = ACTIONS(183),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(181),
    [anon_sym_CustomAlertSound] = ACTIONS(183),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(181),
    [anon_sym_DisableDropSound] = ACTIONS(183),
    [anon_sym_EnableDropSound] = ACTIONS(183),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(181),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(181),
    [anon_sym_MinimapIcon] = ACTIONS(181),
    [anon_sym_PlayEffect] = ACTIONS(181),
    [anon_sym_SetBackgroundColor] = ACTIONS(181),
    [anon_sym_SetBorderColor] = ACTIONS(181),
    [anon_sym_SetFontSize] = ACTIONS(181),
    [anon_sym_SetTextColor] = ACTIONS(181),
    [anon_sym_Continue] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(181),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_Show] = ACTIONS(185),
    [anon_sym_Hide] = ACTIONS(185),
    [anon_sym_AlternateQuality] = ACTIONS(185),
    [anon_sym_AnyEnchantment] = ACTIONS(185),
    [anon_sym_ArchnemesisMod] = ACTIONS(185),
    [anon_sym_AreaLevel] = ACTIONS(185),
    [anon_sym_BaseArmour] = ACTIONS(185),
    [anon_sym_BaseDefencePercentile] = ACTIONS(185),
    [anon_sym_BaseEnergyShield] = ACTIONS(185),
    [anon_sym_BaseEvasion] = ACTIONS(185),
    [anon_sym_BaseType] = ACTIONS(185),
    [anon_sym_BaseWard] = ACTIONS(185),
    [anon_sym_BlightedMap] = ACTIONS(185),
    [anon_sym_Class] = ACTIONS(185),
    [anon_sym_Corrupted] = ACTIONS(187),
    [anon_sym_CorruptedMods] = ACTIONS(185),
    [anon_sym_DropLevel] = ACTIONS(185),
    [anon_sym_ElderItem] = ACTIONS(185),
    [anon_sym_ElderMap] = ACTIONS(185),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(185),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(185),
    [anon_sym_FracturedItem] = ACTIONS(185),
    [anon_sym_GemLevel] = ACTIONS(185),
    [anon_sym_GemQualityType] = ACTIONS(185),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(185),
    [anon_sym_HasEnchantment] = ACTIONS(185),
    [anon_sym_HasExplicitMod] = ACTIONS(185),
    [anon_sym_HasInfluence] = ACTIONS(185),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(185),
    [anon_sym_Height] = ACTIONS(185),
    [anon_sym_Identified] = ACTIONS(185),
    [anon_sym_ItemLevel] = ACTIONS(185),
    [anon_sym_LinkedSockets] = ACTIONS(185),
    [anon_sym_MapTier] = ACTIONS(185),
    [anon_sym_Mirrored] = ACTIONS(185),
    [anon_sym_Quality] = ACTIONS(185),
    [anon_sym_Rarity] = ACTIONS(185),
    [anon_sym_Replica] = ACTIONS(185),
    [anon_sym_Scourged] = ACTIONS(185),
    [anon_sym_ShapedMap] = ACTIONS(185),
    [anon_sym_ShaperItem] = ACTIONS(185),
    [anon_sym_SocketGroup] = ACTIONS(185),
    [anon_sym_Sockets] = ACTIONS(185),
    [anon_sym_StackSize] = ACTIONS(185),
    [anon_sym_SynthesisedItem] = ACTIONS(185),
    [anon_sym_UberBlightedMap] = ACTIONS(185),
    [anon_sym_Width] = ACTIONS(185),
    [anon_sym_PlayAlertSound] = ACTIONS(187),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(185),
    [anon_sym_CustomAlertSound] = ACTIONS(187),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(185),
    [anon_sym_DisableDropSound] = ACTIONS(187),
    [anon_sym_EnableDropSound] = ACTIONS(187),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(185),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(185),
    [anon_sym_MinimapIcon] = ACTIONS(185),
    [anon_sym_PlayEffect] = ACTIONS(185),
    [anon_sym_SetBackgroundColor] = ACTIONS(185),
    [anon_sym_SetBorderColor] = ACTIONS(185),
    [anon_sym_SetFontSize] = ACTIONS(185),
    [anon_sym_SetTextColor] = ACTIONS(185),
    [anon_sym_Continue] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(185),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_Show] = ACTIONS(189),
    [anon_sym_Hide] = ACTIONS(189),
    [anon_sym_AlternateQuality] = ACTIONS(189),
    [anon_sym_AnyEnchantment] = ACTIONS(189),
    [anon_sym_ArchnemesisMod] = ACTIONS(189),
    [anon_sym_AreaLevel] = ACTIONS(189),
    [anon_sym_BaseArmour] = ACTIONS(189),
    [anon_sym_BaseDefencePercentile] = ACTIONS(189),
    [anon_sym_BaseEnergyShield] = ACTIONS(189),
    [anon_sym_BaseEvasion] = ACTIONS(189),
    [anon_sym_BaseType] = ACTIONS(189),
    [anon_sym_BaseWard] = ACTIONS(189),
    [anon_sym_BlightedMap] = ACTIONS(189),
    [anon_sym_Class] = ACTIONS(189),
    [anon_sym_Corrupted] = ACTIONS(191),
    [anon_sym_CorruptedMods] = ACTIONS(189),
    [anon_sym_DropLevel] = ACTIONS(189),
    [anon_sym_ElderItem] = ACTIONS(189),
    [anon_sym_ElderMap] = ACTIONS(189),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(189),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(189),
    [anon_sym_FracturedItem] = ACTIONS(189),
    [anon_sym_GemLevel] = ACTIONS(189),
    [anon_sym_GemQualityType] = ACTIONS(189),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(189),
    [anon_sym_HasEnchantment] = ACTIONS(189),
    [anon_sym_HasExplicitMod] = ACTIONS(189),
    [anon_sym_HasInfluence] = ACTIONS(189),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(189),
    [anon_sym_Height] = ACTIONS(189),
    [anon_sym_Identified] = ACTIONS(189),
    [anon_sym_ItemLevel] = ACTIONS(189),
    [anon_sym_LinkedSockets] = ACTIONS(189),
    [anon_sym_MapTier] = ACTIONS(189),
    [anon_sym_Mirrored] = ACTIONS(189),
    [anon_sym_Quality] = ACTIONS(189),
    [anon_sym_Rarity] = ACTIONS(189),
    [anon_sym_Replica] = ACTIONS(189),
    [anon_sym_Scourged] = ACTIONS(189),
    [anon_sym_ShapedMap] = ACTIONS(189),
    [anon_sym_ShaperItem] = ACTIONS(189),
    [anon_sym_SocketGroup] = ACTIONS(189),
    [anon_sym_Sockets] = ACTIONS(189),
    [anon_sym_StackSize] = ACTIONS(189),
    [anon_sym_SynthesisedItem] = ACTIONS(189),
    [anon_sym_UberBlightedMap] = ACTIONS(189),
    [anon_sym_Width] = ACTIONS(189),
    [anon_sym_PlayAlertSound] = ACTIONS(191),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(189),
    [anon_sym_CustomAlertSound] = ACTIONS(191),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(189),
    [anon_sym_DisableDropSound] = ACTIONS(191),
    [anon_sym_EnableDropSound] = ACTIONS(191),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(189),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(189),
    [anon_sym_MinimapIcon] = ACTIONS(189),
    [anon_sym_PlayEffect] = ACTIONS(189),
    [anon_sym_SetBackgroundColor] = ACTIONS(189),
    [anon_sym_SetBorderColor] = ACTIONS(189),
    [anon_sym_SetFontSize] = ACTIONS(189),
    [anon_sym_SetTextColor] = ACTIONS(189),
    [anon_sym_Continue] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(189),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_Show] = ACTIONS(193),
    [anon_sym_Hide] = ACTIONS(193),
    [anon_sym_AlternateQuality] = ACTIONS(193),
    [anon_sym_AnyEnchantment] = ACTIONS(193),
    [anon_sym_ArchnemesisMod] = ACTIONS(193),
    [anon_sym_AreaLevel] = ACTIONS(193),
    [anon_sym_BaseArmour] = ACTIONS(193),
    [anon_sym_BaseDefencePercentile] = ACTIONS(193),
    [anon_sym_BaseEnergyShield] = ACTIONS(193),
    [anon_sym_BaseEvasion] = ACTIONS(193),
    [anon_sym_BaseType] = ACTIONS(193),
    [anon_sym_BaseWard] = ACTIONS(193),
    [anon_sym_BlightedMap] = ACTIONS(193),
    [anon_sym_Class] = ACTIONS(193),
    [anon_sym_Corrupted] = ACTIONS(195),
    [anon_sym_CorruptedMods] = ACTIONS(193),
    [anon_sym_DropLevel] = ACTIONS(193),
    [anon_sym_ElderItem] = ACTIONS(193),
    [anon_sym_ElderMap] = ACTIONS(193),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(193),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(193),
    [anon_sym_FracturedItem] = ACTIONS(193),
    [anon_sym_GemLevel] = ACTIONS(193),
    [anon_sym_GemQualityType] = ACTIONS(193),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(193),
    [anon_sym_HasEnchantment] = ACTIONS(193),
    [anon_sym_HasExplicitMod] = ACTIONS(193),
    [anon_sym_HasInfluence] = ACTIONS(193),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(193),
    [anon_sym_Height] = ACTIONS(193),
    [anon_sym_Identified] = ACTIONS(193),
    [anon_sym_ItemLevel] = ACTIONS(193),
    [anon_sym_LinkedSockets] = ACTIONS(193),
    [anon_sym_MapTier] = ACTIONS(193),
    [anon_sym_Mirrored] = ACTIONS(193),
    [anon_sym_Quality] = ACTIONS(193),
    [anon_sym_Rarity] = ACTIONS(193),
    [anon_sym_Replica] = ACTIONS(193),
    [anon_sym_Scourged] = ACTIONS(193),
    [anon_sym_ShapedMap] = ACTIONS(193),
    [anon_sym_ShaperItem] = ACTIONS(193),
    [anon_sym_SocketGroup] = ACTIONS(193),
    [anon_sym_Sockets] = ACTIONS(193),
    [anon_sym_StackSize] = ACTIONS(193),
    [anon_sym_SynthesisedItem] = ACTIONS(193),
    [anon_sym_UberBlightedMap] = ACTIONS(193),
    [anon_sym_Width] = ACTIONS(193),
    [anon_sym_PlayAlertSound] = ACTIONS(195),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(193),
    [anon_sym_CustomAlertSound] = ACTIONS(195),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(193),
    [anon_sym_DisableDropSound] = ACTIONS(195),
    [anon_sym_EnableDropSound] = ACTIONS(195),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(193),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(193),
    [anon_sym_MinimapIcon] = ACTIONS(193),
    [anon_sym_PlayEffect] = ACTIONS(193),
    [anon_sym_SetBackgroundColor] = ACTIONS(193),
    [anon_sym_SetBorderColor] = ACTIONS(193),
    [anon_sym_SetFontSize] = ACTIONS(193),
    [anon_sym_SetTextColor] = ACTIONS(193),
    [anon_sym_Continue] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(193),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_Show] = ACTIONS(197),
    [anon_sym_Hide] = ACTIONS(197),
    [anon_sym_AlternateQuality] = ACTIONS(197),
    [anon_sym_AnyEnchantment] = ACTIONS(197),
    [anon_sym_ArchnemesisMod] = ACTIONS(197),
    [anon_sym_AreaLevel] = ACTIONS(197),
    [anon_sym_BaseArmour] = ACTIONS(197),
    [anon_sym_BaseDefencePercentile] = ACTIONS(197),
    [anon_sym_BaseEnergyShield] = ACTIONS(197),
    [anon_sym_BaseEvasion] = ACTIONS(197),
    [anon_sym_BaseType] = ACTIONS(197),
    [anon_sym_BaseWard] = ACTIONS(197),
    [anon_sym_BlightedMap] = ACTIONS(197),
    [anon_sym_Class] = ACTIONS(197),
    [anon_sym_Corrupted] = ACTIONS(199),
    [anon_sym_CorruptedMods] = ACTIONS(197),
    [anon_sym_DropLevel] = ACTIONS(197),
    [anon_sym_ElderItem] = ACTIONS(197),
    [anon_sym_ElderMap] = ACTIONS(197),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(197),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(197),
    [anon_sym_FracturedItem] = ACTIONS(197),
    [anon_sym_GemLevel] = ACTIONS(197),
    [anon_sym_GemQualityType] = ACTIONS(197),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(197),
    [anon_sym_HasEnchantment] = ACTIONS(197),
    [anon_sym_HasExplicitMod] = ACTIONS(197),
    [anon_sym_HasInfluence] = ACTIONS(197),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(197),
    [anon_sym_Height] = ACTIONS(197),
    [anon_sym_Identified] = ACTIONS(197),
    [anon_sym_ItemLevel] = ACTIONS(197),
    [anon_sym_LinkedSockets] = ACTIONS(197),
    [anon_sym_MapTier] = ACTIONS(197),
    [anon_sym_Mirrored] = ACTIONS(197),
    [anon_sym_Quality] = ACTIONS(197),
    [anon_sym_Rarity] = ACTIONS(197),
    [anon_sym_Replica] = ACTIONS(197),
    [anon_sym_Scourged] = ACTIONS(197),
    [anon_sym_ShapedMap] = ACTIONS(197),
    [anon_sym_ShaperItem] = ACTIONS(197),
    [anon_sym_SocketGroup] = ACTIONS(197),
    [anon_sym_Sockets] = ACTIONS(197),
    [anon_sym_StackSize] = ACTIONS(197),
    [anon_sym_SynthesisedItem] = ACTIONS(197),
    [anon_sym_UberBlightedMap] = ACTIONS(197),
    [anon_sym_Width] = ACTIONS(197),
    [anon_sym_PlayAlertSound] = ACTIONS(199),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(197),
    [anon_sym_CustomAlertSound] = ACTIONS(199),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(197),
    [anon_sym_DisableDropSound] = ACTIONS(199),
    [anon_sym_EnableDropSound] = ACTIONS(199),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(197),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(197),
    [anon_sym_MinimapIcon] = ACTIONS(197),
    [anon_sym_PlayEffect] = ACTIONS(197),
    [anon_sym_SetBackgroundColor] = ACTIONS(197),
    [anon_sym_SetBorderColor] = ACTIONS(197),
    [anon_sym_SetFontSize] = ACTIONS(197),
    [anon_sym_SetTextColor] = ACTIONS(197),
    [anon_sym_Continue] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(197),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_Show] = ACTIONS(201),
    [anon_sym_Hide] = ACTIONS(201),
    [anon_sym_AlternateQuality] = ACTIONS(201),
    [anon_sym_AnyEnchantment] = ACTIONS(201),
    [anon_sym_ArchnemesisMod] = ACTIONS(201),
    [anon_sym_AreaLevel] = ACTIONS(201),
    [anon_sym_BaseArmour] = ACTIONS(201),
    [anon_sym_BaseDefencePercentile] = ACTIONS(201),
    [anon_sym_BaseEnergyShield] = ACTIONS(201),
    [anon_sym_BaseEvasion] = ACTIONS(201),
    [anon_sym_BaseType] = ACTIONS(201),
    [anon_sym_BaseWard] = ACTIONS(201),
    [anon_sym_BlightedMap] = ACTIONS(201),
    [anon_sym_Class] = ACTIONS(201),
    [anon_sym_Corrupted] = ACTIONS(203),
    [anon_sym_CorruptedMods] = ACTIONS(201),
    [anon_sym_DropLevel] = ACTIONS(201),
    [anon_sym_ElderItem] = ACTIONS(201),
    [anon_sym_ElderMap] = ACTIONS(201),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(201),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(201),
    [anon_sym_FracturedItem] = ACTIONS(201),
    [anon_sym_GemLevel] = ACTIONS(201),
    [anon_sym_GemQualityType] = ACTIONS(201),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(201),
    [anon_sym_HasEnchantment] = ACTIONS(201),
    [anon_sym_HasExplicitMod] = ACTIONS(201),
    [anon_sym_HasInfluence] = ACTIONS(201),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(201),
    [anon_sym_Height] = ACTIONS(201),
    [anon_sym_Identified] = ACTIONS(201),
    [anon_sym_ItemLevel] = ACTIONS(201),
    [anon_sym_LinkedSockets] = ACTIONS(201),
    [anon_sym_MapTier] = ACTIONS(201),
    [anon_sym_Mirrored] = ACTIONS(201),
    [anon_sym_Quality] = ACTIONS(201),
    [anon_sym_Rarity] = ACTIONS(201),
    [anon_sym_Replica] = ACTIONS(201),
    [anon_sym_Scourged] = ACTIONS(201),
    [anon_sym_ShapedMap] = ACTIONS(201),
    [anon_sym_ShaperItem] = ACTIONS(201),
    [anon_sym_SocketGroup] = ACTIONS(201),
    [anon_sym_Sockets] = ACTIONS(201),
    [anon_sym_StackSize] = ACTIONS(201),
    [anon_sym_SynthesisedItem] = ACTIONS(201),
    [anon_sym_UberBlightedMap] = ACTIONS(201),
    [anon_sym_Width] = ACTIONS(201),
    [anon_sym_PlayAlertSound] = ACTIONS(203),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(201),
    [anon_sym_CustomAlertSound] = ACTIONS(203),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(201),
    [anon_sym_DisableDropSound] = ACTIONS(203),
    [anon_sym_EnableDropSound] = ACTIONS(203),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(201),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(201),
    [anon_sym_MinimapIcon] = ACTIONS(201),
    [anon_sym_PlayEffect] = ACTIONS(201),
    [anon_sym_SetBackgroundColor] = ACTIONS(201),
    [anon_sym_SetBorderColor] = ACTIONS(201),
    [anon_sym_SetFontSize] = ACTIONS(201),
    [anon_sym_SetTextColor] = ACTIONS(201),
    [anon_sym_Continue] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(201),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_Show] = ACTIONS(205),
    [anon_sym_Hide] = ACTIONS(205),
    [anon_sym_AlternateQuality] = ACTIONS(205),
    [anon_sym_AnyEnchantment] = ACTIONS(205),
    [anon_sym_ArchnemesisMod] = ACTIONS(205),
    [anon_sym_AreaLevel] = ACTIONS(205),
    [anon_sym_BaseArmour] = ACTIONS(205),
    [anon_sym_BaseDefencePercentile] = ACTIONS(205),
    [anon_sym_BaseEnergyShield] = ACTIONS(205),
    [anon_sym_BaseEvasion] = ACTIONS(205),
    [anon_sym_BaseType] = ACTIONS(205),
    [anon_sym_BaseWard] = ACTIONS(205),
    [anon_sym_BlightedMap] = ACTIONS(205),
    [anon_sym_Class] = ACTIONS(205),
    [anon_sym_Corrupted] = ACTIONS(207),
    [anon_sym_CorruptedMods] = ACTIONS(205),
    [anon_sym_DropLevel] = ACTIONS(205),
    [anon_sym_ElderItem] = ACTIONS(205),
    [anon_sym_ElderMap] = ACTIONS(205),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(205),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(205),
    [anon_sym_FracturedItem] = ACTIONS(205),
    [anon_sym_GemLevel] = ACTIONS(205),
    [anon_sym_GemQualityType] = ACTIONS(205),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(205),
    [anon_sym_HasEnchantment] = ACTIONS(205),
    [anon_sym_HasExplicitMod] = ACTIONS(205),
    [anon_sym_HasInfluence] = ACTIONS(205),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(205),
    [anon_sym_Height] = ACTIONS(205),
    [anon_sym_Identified] = ACTIONS(205),
    [anon_sym_ItemLevel] = ACTIONS(205),
    [anon_sym_LinkedSockets] = ACTIONS(205),
    [anon_sym_MapTier] = ACTIONS(205),
    [anon_sym_Mirrored] = ACTIONS(205),
    [anon_sym_Quality] = ACTIONS(205),
    [anon_sym_Rarity] = ACTIONS(205),
    [anon_sym_Replica] = ACTIONS(205),
    [anon_sym_Scourged] = ACTIONS(205),
    [anon_sym_ShapedMap] = ACTIONS(205),
    [anon_sym_ShaperItem] = ACTIONS(205),
    [anon_sym_SocketGroup] = ACTIONS(205),
    [anon_sym_Sockets] = ACTIONS(205),
    [anon_sym_StackSize] = ACTIONS(205),
    [anon_sym_SynthesisedItem] = ACTIONS(205),
    [anon_sym_UberBlightedMap] = ACTIONS(205),
    [anon_sym_Width] = ACTIONS(205),
    [anon_sym_PlayAlertSound] = ACTIONS(207),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(205),
    [anon_sym_CustomAlertSound] = ACTIONS(207),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(205),
    [anon_sym_DisableDropSound] = ACTIONS(207),
    [anon_sym_EnableDropSound] = ACTIONS(207),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(205),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(205),
    [anon_sym_MinimapIcon] = ACTIONS(205),
    [anon_sym_PlayEffect] = ACTIONS(205),
    [anon_sym_SetBackgroundColor] = ACTIONS(205),
    [anon_sym_SetBorderColor] = ACTIONS(205),
    [anon_sym_SetFontSize] = ACTIONS(205),
    [anon_sym_SetTextColor] = ACTIONS(205),
    [anon_sym_Continue] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(205),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_Show] = ACTIONS(181),
    [anon_sym_Hide] = ACTIONS(181),
    [anon_sym_AlternateQuality] = ACTIONS(181),
    [anon_sym_AnyEnchantment] = ACTIONS(181),
    [anon_sym_ArchnemesisMod] = ACTIONS(181),
    [anon_sym_AreaLevel] = ACTIONS(181),
    [anon_sym_BaseArmour] = ACTIONS(181),
    [anon_sym_BaseDefencePercentile] = ACTIONS(181),
    [anon_sym_BaseEnergyShield] = ACTIONS(181),
    [anon_sym_BaseEvasion] = ACTIONS(181),
    [anon_sym_BaseType] = ACTIONS(181),
    [anon_sym_BaseWard] = ACTIONS(181),
    [anon_sym_BlightedMap] = ACTIONS(181),
    [anon_sym_Class] = ACTIONS(181),
    [anon_sym_Corrupted] = ACTIONS(183),
    [anon_sym_CorruptedMods] = ACTIONS(181),
    [anon_sym_DropLevel] = ACTIONS(181),
    [anon_sym_ElderItem] = ACTIONS(181),
    [anon_sym_ElderMap] = ACTIONS(181),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(181),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(181),
    [anon_sym_FracturedItem] = ACTIONS(181),
    [anon_sym_GemLevel] = ACTIONS(181),
    [anon_sym_GemQualityType] = ACTIONS(181),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(181),
    [anon_sym_HasEnchantment] = ACTIONS(181),
    [anon_sym_HasExplicitMod] = ACTIONS(181),
    [anon_sym_HasInfluence] = ACTIONS(181),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(181),
    [anon_sym_Height] = ACTIONS(181),
    [anon_sym_Identified] = ACTIONS(181),
    [anon_sym_ItemLevel] = ACTIONS(181),
    [anon_sym_LinkedSockets] = ACTIONS(181),
    [anon_sym_MapTier] = ACTIONS(181),
    [anon_sym_Mirrored] = ACTIONS(181),
    [anon_sym_Quality] = ACTIONS(181),
    [anon_sym_Rarity] = ACTIONS(181),
    [anon_sym_Replica] = ACTIONS(181),
    [anon_sym_Scourged] = ACTIONS(181),
    [anon_sym_ShapedMap] = ACTIONS(181),
    [anon_sym_ShaperItem] = ACTIONS(181),
    [anon_sym_SocketGroup] = ACTIONS(181),
    [anon_sym_Sockets] = ACTIONS(181),
    [anon_sym_StackSize] = ACTIONS(181),
    [anon_sym_SynthesisedItem] = ACTIONS(181),
    [anon_sym_UberBlightedMap] = ACTIONS(181),
    [anon_sym_Width] = ACTIONS(181),
    [anon_sym_PlayAlertSound] = ACTIONS(183),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(181),
    [anon_sym_CustomAlertSound] = ACTIONS(183),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(181),
    [anon_sym_DisableDropSound] = ACTIONS(183),
    [anon_sym_EnableDropSound] = ACTIONS(183),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(181),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(181),
    [anon_sym_MinimapIcon] = ACTIONS(181),
    [anon_sym_PlayEffect] = ACTIONS(181),
    [anon_sym_SetBackgroundColor] = ACTIONS(181),
    [anon_sym_SetBorderColor] = ACTIONS(181),
    [anon_sym_SetFontSize] = ACTIONS(181),
    [anon_sym_SetTextColor] = ACTIONS(181),
    [anon_sym_Continue] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(181),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_Show] = ACTIONS(209),
    [anon_sym_Hide] = ACTIONS(209),
    [anon_sym_AlternateQuality] = ACTIONS(209),
    [anon_sym_AnyEnchantment] = ACTIONS(209),
    [anon_sym_ArchnemesisMod] = ACTIONS(209),
    [anon_sym_AreaLevel] = ACTIONS(209),
    [anon_sym_BaseArmour] = ACTIONS(209),
    [anon_sym_BaseDefencePercentile] = ACTIONS(209),
    [anon_sym_BaseEnergyShield] = ACTIONS(209),
    [anon_sym_BaseEvasion] = ACTIONS(209),
    [anon_sym_BaseType] = ACTIONS(209),
    [anon_sym_BaseWard] = ACTIONS(209),
    [anon_sym_BlightedMap] = ACTIONS(209),
    [anon_sym_Class] = ACTIONS(209),
    [anon_sym_Corrupted] = ACTIONS(211),
    [anon_sym_CorruptedMods] = ACTIONS(209),
    [anon_sym_DropLevel] = ACTIONS(209),
    [anon_sym_ElderItem] = ACTIONS(209),
    [anon_sym_ElderMap] = ACTIONS(209),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(209),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(209),
    [anon_sym_FracturedItem] = ACTIONS(209),
    [anon_sym_GemLevel] = ACTIONS(209),
    [anon_sym_GemQualityType] = ACTIONS(209),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(209),
    [anon_sym_HasEnchantment] = ACTIONS(209),
    [anon_sym_HasExplicitMod] = ACTIONS(209),
    [anon_sym_HasInfluence] = ACTIONS(209),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(209),
    [anon_sym_Height] = ACTIONS(209),
    [anon_sym_Identified] = ACTIONS(209),
    [anon_sym_ItemLevel] = ACTIONS(209),
    [anon_sym_LinkedSockets] = ACTIONS(209),
    [anon_sym_MapTier] = ACTIONS(209),
    [anon_sym_Mirrored] = ACTIONS(209),
    [anon_sym_Quality] = ACTIONS(209),
    [anon_sym_Rarity] = ACTIONS(209),
    [anon_sym_Replica] = ACTIONS(209),
    [anon_sym_Scourged] = ACTIONS(209),
    [anon_sym_ShapedMap] = ACTIONS(209),
    [anon_sym_ShaperItem] = ACTIONS(209),
    [anon_sym_SocketGroup] = ACTIONS(209),
    [anon_sym_Sockets] = ACTIONS(209),
    [anon_sym_StackSize] = ACTIONS(209),
    [anon_sym_SynthesisedItem] = ACTIONS(209),
    [anon_sym_UberBlightedMap] = ACTIONS(209),
    [anon_sym_Width] = ACTIONS(209),
    [anon_sym_PlayAlertSound] = ACTIONS(211),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(209),
    [anon_sym_CustomAlertSound] = ACTIONS(211),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(209),
    [anon_sym_DisableDropSound] = ACTIONS(211),
    [anon_sym_EnableDropSound] = ACTIONS(211),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(209),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(209),
    [anon_sym_MinimapIcon] = ACTIONS(209),
    [anon_sym_PlayEffect] = ACTIONS(209),
    [anon_sym_SetBackgroundColor] = ACTIONS(209),
    [anon_sym_SetBorderColor] = ACTIONS(209),
    [anon_sym_SetFontSize] = ACTIONS(209),
    [anon_sym_SetTextColor] = ACTIONS(209),
    [anon_sym_Continue] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(209),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_Show] = ACTIONS(213),
    [anon_sym_Hide] = ACTIONS(213),
    [anon_sym_AlternateQuality] = ACTIONS(213),
    [anon_sym_AnyEnchantment] = ACTIONS(213),
    [anon_sym_ArchnemesisMod] = ACTIONS(213),
    [anon_sym_AreaLevel] = ACTIONS(213),
    [anon_sym_BaseArmour] = ACTIONS(213),
    [anon_sym_BaseDefencePercentile] = ACTIONS(213),
    [anon_sym_BaseEnergyShield] = ACTIONS(213),
    [anon_sym_BaseEvasion] = ACTIONS(213),
    [anon_sym_BaseType] = ACTIONS(213),
    [anon_sym_BaseWard] = ACTIONS(213),
    [anon_sym_BlightedMap] = ACTIONS(213),
    [anon_sym_Class] = ACTIONS(213),
    [anon_sym_Corrupted] = ACTIONS(215),
    [anon_sym_CorruptedMods] = ACTIONS(213),
    [anon_sym_DropLevel] = ACTIONS(213),
    [anon_sym_ElderItem] = ACTIONS(213),
    [anon_sym_ElderMap] = ACTIONS(213),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(213),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(213),
    [anon_sym_FracturedItem] = ACTIONS(213),
    [anon_sym_GemLevel] = ACTIONS(213),
    [anon_sym_GemQualityType] = ACTIONS(213),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(213),
    [anon_sym_HasEnchantment] = ACTIONS(213),
    [anon_sym_HasExplicitMod] = ACTIONS(213),
    [anon_sym_HasInfluence] = ACTIONS(213),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(213),
    [anon_sym_Height] = ACTIONS(213),
    [anon_sym_Identified] = ACTIONS(213),
    [anon_sym_ItemLevel] = ACTIONS(213),
    [anon_sym_LinkedSockets] = ACTIONS(213),
    [anon_sym_MapTier] = ACTIONS(213),
    [anon_sym_Mirrored] = ACTIONS(213),
    [anon_sym_Quality] = ACTIONS(213),
    [anon_sym_Rarity] = ACTIONS(213),
    [anon_sym_Replica] = ACTIONS(213),
    [anon_sym_Scourged] = ACTIONS(213),
    [anon_sym_ShapedMap] = ACTIONS(213),
    [anon_sym_ShaperItem] = ACTIONS(213),
    [anon_sym_SocketGroup] = ACTIONS(213),
    [anon_sym_Sockets] = ACTIONS(213),
    [anon_sym_StackSize] = ACTIONS(213),
    [anon_sym_SynthesisedItem] = ACTIONS(213),
    [anon_sym_UberBlightedMap] = ACTIONS(213),
    [anon_sym_Width] = ACTIONS(213),
    [anon_sym_PlayAlertSound] = ACTIONS(215),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(213),
    [anon_sym_CustomAlertSound] = ACTIONS(215),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(213),
    [anon_sym_DisableDropSound] = ACTIONS(215),
    [anon_sym_EnableDropSound] = ACTIONS(215),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(213),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(213),
    [anon_sym_MinimapIcon] = ACTIONS(213),
    [anon_sym_PlayEffect] = ACTIONS(213),
    [anon_sym_SetBackgroundColor] = ACTIONS(213),
    [anon_sym_SetBorderColor] = ACTIONS(213),
    [anon_sym_SetFontSize] = ACTIONS(213),
    [anon_sym_SetTextColor] = ACTIONS(213),
    [anon_sym_Continue] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(213),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_Show] = ACTIONS(217),
    [anon_sym_Hide] = ACTIONS(217),
    [anon_sym_AlternateQuality] = ACTIONS(217),
    [anon_sym_AnyEnchantment] = ACTIONS(217),
    [anon_sym_ArchnemesisMod] = ACTIONS(217),
    [anon_sym_AreaLevel] = ACTIONS(217),
    [anon_sym_BaseArmour] = ACTIONS(217),
    [anon_sym_BaseDefencePercentile] = ACTIONS(217),
    [anon_sym_BaseEnergyShield] = ACTIONS(217),
    [anon_sym_BaseEvasion] = ACTIONS(217),
    [anon_sym_BaseType] = ACTIONS(217),
    [anon_sym_BaseWard] = ACTIONS(217),
    [anon_sym_BlightedMap] = ACTIONS(217),
    [anon_sym_Class] = ACTIONS(217),
    [anon_sym_Corrupted] = ACTIONS(219),
    [anon_sym_CorruptedMods] = ACTIONS(217),
    [anon_sym_DropLevel] = ACTIONS(217),
    [anon_sym_ElderItem] = ACTIONS(217),
    [anon_sym_ElderMap] = ACTIONS(217),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(217),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(217),
    [anon_sym_FracturedItem] = ACTIONS(217),
    [anon_sym_GemLevel] = ACTIONS(217),
    [anon_sym_GemQualityType] = ACTIONS(217),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(217),
    [anon_sym_HasEnchantment] = ACTIONS(217),
    [anon_sym_HasExplicitMod] = ACTIONS(217),
    [anon_sym_HasInfluence] = ACTIONS(217),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(217),
    [anon_sym_Height] = ACTIONS(217),
    [anon_sym_Identified] = ACTIONS(217),
    [anon_sym_ItemLevel] = ACTIONS(217),
    [anon_sym_LinkedSockets] = ACTIONS(217),
    [anon_sym_MapTier] = ACTIONS(217),
    [anon_sym_Mirrored] = ACTIONS(217),
    [anon_sym_Quality] = ACTIONS(217),
    [anon_sym_Rarity] = ACTIONS(217),
    [anon_sym_Replica] = ACTIONS(217),
    [anon_sym_Scourged] = ACTIONS(217),
    [anon_sym_ShapedMap] = ACTIONS(217),
    [anon_sym_ShaperItem] = ACTIONS(217),
    [anon_sym_SocketGroup] = ACTIONS(217),
    [anon_sym_Sockets] = ACTIONS(217),
    [anon_sym_StackSize] = ACTIONS(217),
    [anon_sym_SynthesisedItem] = ACTIONS(217),
    [anon_sym_UberBlightedMap] = ACTIONS(217),
    [anon_sym_Width] = ACTIONS(217),
    [anon_sym_PlayAlertSound] = ACTIONS(219),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(217),
    [anon_sym_CustomAlertSound] = ACTIONS(219),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(217),
    [anon_sym_DisableDropSound] = ACTIONS(219),
    [anon_sym_EnableDropSound] = ACTIONS(219),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(217),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(217),
    [anon_sym_MinimapIcon] = ACTIONS(217),
    [anon_sym_PlayEffect] = ACTIONS(217),
    [anon_sym_SetBackgroundColor] = ACTIONS(217),
    [anon_sym_SetBorderColor] = ACTIONS(217),
    [anon_sym_SetFontSize] = ACTIONS(217),
    [anon_sym_SetTextColor] = ACTIONS(217),
    [anon_sym_Continue] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(217),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_Show] = ACTIONS(221),
    [anon_sym_Hide] = ACTIONS(221),
    [anon_sym_AlternateQuality] = ACTIONS(221),
    [anon_sym_AnyEnchantment] = ACTIONS(221),
    [anon_sym_ArchnemesisMod] = ACTIONS(221),
    [anon_sym_AreaLevel] = ACTIONS(221),
    [anon_sym_BaseArmour] = ACTIONS(221),
    [anon_sym_BaseDefencePercentile] = ACTIONS(221),
    [anon_sym_BaseEnergyShield] = ACTIONS(221),
    [anon_sym_BaseEvasion] = ACTIONS(221),
    [anon_sym_BaseType] = ACTIONS(221),
    [anon_sym_BaseWard] = ACTIONS(221),
    [anon_sym_BlightedMap] = ACTIONS(221),
    [anon_sym_Class] = ACTIONS(221),
    [anon_sym_Corrupted] = ACTIONS(223),
    [anon_sym_CorruptedMods] = ACTIONS(221),
    [anon_sym_DropLevel] = ACTIONS(221),
    [anon_sym_ElderItem] = ACTIONS(221),
    [anon_sym_ElderMap] = ACTIONS(221),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(221),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(221),
    [anon_sym_FracturedItem] = ACTIONS(221),
    [anon_sym_GemLevel] = ACTIONS(221),
    [anon_sym_GemQualityType] = ACTIONS(221),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(221),
    [anon_sym_HasEnchantment] = ACTIONS(221),
    [anon_sym_HasExplicitMod] = ACTIONS(221),
    [anon_sym_HasInfluence] = ACTIONS(221),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(221),
    [anon_sym_Height] = ACTIONS(221),
    [anon_sym_Identified] = ACTIONS(221),
    [anon_sym_ItemLevel] = ACTIONS(221),
    [anon_sym_LinkedSockets] = ACTIONS(221),
    [anon_sym_MapTier] = ACTIONS(221),
    [anon_sym_Mirrored] = ACTIONS(221),
    [anon_sym_Quality] = ACTIONS(221),
    [anon_sym_Rarity] = ACTIONS(221),
    [anon_sym_Replica] = ACTIONS(221),
    [anon_sym_Scourged] = ACTIONS(221),
    [anon_sym_ShapedMap] = ACTIONS(221),
    [anon_sym_ShaperItem] = ACTIONS(221),
    [anon_sym_SocketGroup] = ACTIONS(221),
    [anon_sym_Sockets] = ACTIONS(221),
    [anon_sym_StackSize] = ACTIONS(221),
    [anon_sym_SynthesisedItem] = ACTIONS(221),
    [anon_sym_UberBlightedMap] = ACTIONS(221),
    [anon_sym_Width] = ACTIONS(221),
    [anon_sym_PlayAlertSound] = ACTIONS(223),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(221),
    [anon_sym_CustomAlertSound] = ACTIONS(223),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(221),
    [anon_sym_DisableDropSound] = ACTIONS(223),
    [anon_sym_EnableDropSound] = ACTIONS(223),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(221),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(221),
    [anon_sym_MinimapIcon] = ACTIONS(221),
    [anon_sym_PlayEffect] = ACTIONS(221),
    [anon_sym_SetBackgroundColor] = ACTIONS(221),
    [anon_sym_SetBorderColor] = ACTIONS(221),
    [anon_sym_SetFontSize] = ACTIONS(221),
    [anon_sym_SetTextColor] = ACTIONS(221),
    [anon_sym_Continue] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(221),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_Show] = ACTIONS(225),
    [anon_sym_Hide] = ACTIONS(225),
    [anon_sym_AlternateQuality] = ACTIONS(225),
    [anon_sym_AnyEnchantment] = ACTIONS(225),
    [anon_sym_ArchnemesisMod] = ACTIONS(225),
    [anon_sym_AreaLevel] = ACTIONS(225),
    [anon_sym_BaseArmour] = ACTIONS(225),
    [anon_sym_BaseDefencePercentile] = ACTIONS(225),
    [anon_sym_BaseEnergyShield] = ACTIONS(225),
    [anon_sym_BaseEvasion] = ACTIONS(225),
    [anon_sym_BaseType] = ACTIONS(225),
    [anon_sym_BaseWard] = ACTIONS(225),
    [anon_sym_BlightedMap] = ACTIONS(225),
    [anon_sym_Class] = ACTIONS(225),
    [anon_sym_Corrupted] = ACTIONS(227),
    [anon_sym_CorruptedMods] = ACTIONS(225),
    [anon_sym_DropLevel] = ACTIONS(225),
    [anon_sym_ElderItem] = ACTIONS(225),
    [anon_sym_ElderMap] = ACTIONS(225),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(225),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(225),
    [anon_sym_FracturedItem] = ACTIONS(225),
    [anon_sym_GemLevel] = ACTIONS(225),
    [anon_sym_GemQualityType] = ACTIONS(225),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(225),
    [anon_sym_HasEnchantment] = ACTIONS(225),
    [anon_sym_HasExplicitMod] = ACTIONS(225),
    [anon_sym_HasInfluence] = ACTIONS(225),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(225),
    [anon_sym_Height] = ACTIONS(225),
    [anon_sym_Identified] = ACTIONS(225),
    [anon_sym_ItemLevel] = ACTIONS(225),
    [anon_sym_LinkedSockets] = ACTIONS(225),
    [anon_sym_MapTier] = ACTIONS(225),
    [anon_sym_Mirrored] = ACTIONS(225),
    [anon_sym_Quality] = ACTIONS(225),
    [anon_sym_Rarity] = ACTIONS(225),
    [anon_sym_Replica] = ACTIONS(225),
    [anon_sym_Scourged] = ACTIONS(225),
    [anon_sym_ShapedMap] = ACTIONS(225),
    [anon_sym_ShaperItem] = ACTIONS(225),
    [anon_sym_SocketGroup] = ACTIONS(225),
    [anon_sym_Sockets] = ACTIONS(225),
    [anon_sym_StackSize] = ACTIONS(225),
    [anon_sym_SynthesisedItem] = ACTIONS(225),
    [anon_sym_UberBlightedMap] = ACTIONS(225),
    [anon_sym_Width] = ACTIONS(225),
    [anon_sym_PlayAlertSound] = ACTIONS(227),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(225),
    [anon_sym_CustomAlertSound] = ACTIONS(227),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(225),
    [anon_sym_DisableDropSound] = ACTIONS(227),
    [anon_sym_EnableDropSound] = ACTIONS(227),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(225),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(225),
    [anon_sym_MinimapIcon] = ACTIONS(225),
    [anon_sym_PlayEffect] = ACTIONS(225),
    [anon_sym_SetBackgroundColor] = ACTIONS(225),
    [anon_sym_SetBorderColor] = ACTIONS(225),
    [anon_sym_SetFontSize] = ACTIONS(225),
    [anon_sym_SetTextColor] = ACTIONS(225),
    [anon_sym_Continue] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(225),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_Show] = ACTIONS(229),
    [anon_sym_Hide] = ACTIONS(229),
    [anon_sym_AlternateQuality] = ACTIONS(229),
    [anon_sym_AnyEnchantment] = ACTIONS(229),
    [anon_sym_ArchnemesisMod] = ACTIONS(229),
    [anon_sym_AreaLevel] = ACTIONS(229),
    [anon_sym_BaseArmour] = ACTIONS(229),
    [anon_sym_BaseDefencePercentile] = ACTIONS(229),
    [anon_sym_BaseEnergyShield] = ACTIONS(229),
    [anon_sym_BaseEvasion] = ACTIONS(229),
    [anon_sym_BaseType] = ACTIONS(229),
    [anon_sym_BaseWard] = ACTIONS(229),
    [anon_sym_BlightedMap] = ACTIONS(229),
    [anon_sym_Class] = ACTIONS(229),
    [anon_sym_Corrupted] = ACTIONS(231),
    [anon_sym_CorruptedMods] = ACTIONS(229),
    [anon_sym_DropLevel] = ACTIONS(229),
    [anon_sym_ElderItem] = ACTIONS(229),
    [anon_sym_ElderMap] = ACTIONS(229),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(229),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(229),
    [anon_sym_FracturedItem] = ACTIONS(229),
    [anon_sym_GemLevel] = ACTIONS(229),
    [anon_sym_GemQualityType] = ACTIONS(229),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(229),
    [anon_sym_HasEnchantment] = ACTIONS(229),
    [anon_sym_HasExplicitMod] = ACTIONS(229),
    [anon_sym_HasInfluence] = ACTIONS(229),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(229),
    [anon_sym_Height] = ACTIONS(229),
    [anon_sym_Identified] = ACTIONS(229),
    [anon_sym_ItemLevel] = ACTIONS(229),
    [anon_sym_LinkedSockets] = ACTIONS(229),
    [anon_sym_MapTier] = ACTIONS(229),
    [anon_sym_Mirrored] = ACTIONS(229),
    [anon_sym_Quality] = ACTIONS(229),
    [anon_sym_Rarity] = ACTIONS(229),
    [anon_sym_Replica] = ACTIONS(229),
    [anon_sym_Scourged] = ACTIONS(229),
    [anon_sym_ShapedMap] = ACTIONS(229),
    [anon_sym_ShaperItem] = ACTIONS(229),
    [anon_sym_SocketGroup] = ACTIONS(229),
    [anon_sym_Sockets] = ACTIONS(229),
    [anon_sym_StackSize] = ACTIONS(229),
    [anon_sym_SynthesisedItem] = ACTIONS(229),
    [anon_sym_UberBlightedMap] = ACTIONS(229),
    [anon_sym_Width] = ACTIONS(229),
    [anon_sym_PlayAlertSound] = ACTIONS(231),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(229),
    [anon_sym_CustomAlertSound] = ACTIONS(231),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(229),
    [anon_sym_DisableDropSound] = ACTIONS(231),
    [anon_sym_EnableDropSound] = ACTIONS(231),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(229),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(229),
    [anon_sym_MinimapIcon] = ACTIONS(229),
    [anon_sym_PlayEffect] = ACTIONS(229),
    [anon_sym_SetBackgroundColor] = ACTIONS(229),
    [anon_sym_SetBorderColor] = ACTIONS(229),
    [anon_sym_SetFontSize] = ACTIONS(229),
    [anon_sym_SetTextColor] = ACTIONS(229),
    [anon_sym_Continue] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(229),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_Show] = ACTIONS(233),
    [anon_sym_Hide] = ACTIONS(233),
    [anon_sym_AlternateQuality] = ACTIONS(233),
    [anon_sym_AnyEnchantment] = ACTIONS(233),
    [anon_sym_ArchnemesisMod] = ACTIONS(233),
    [anon_sym_AreaLevel] = ACTIONS(233),
    [anon_sym_BaseArmour] = ACTIONS(233),
    [anon_sym_BaseDefencePercentile] = ACTIONS(233),
    [anon_sym_BaseEnergyShield] = ACTIONS(233),
    [anon_sym_BaseEvasion] = ACTIONS(233),
    [anon_sym_BaseType] = ACTIONS(233),
    [anon_sym_BaseWard] = ACTIONS(233),
    [anon_sym_BlightedMap] = ACTIONS(233),
    [anon_sym_Class] = ACTIONS(233),
    [anon_sym_Corrupted] = ACTIONS(235),
    [anon_sym_CorruptedMods] = ACTIONS(233),
    [anon_sym_DropLevel] = ACTIONS(233),
    [anon_sym_ElderItem] = ACTIONS(233),
    [anon_sym_ElderMap] = ACTIONS(233),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(233),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(233),
    [anon_sym_FracturedItem] = ACTIONS(233),
    [anon_sym_GemLevel] = ACTIONS(233),
    [anon_sym_GemQualityType] = ACTIONS(233),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(233),
    [anon_sym_HasEnchantment] = ACTIONS(233),
    [anon_sym_HasExplicitMod] = ACTIONS(233),
    [anon_sym_HasInfluence] = ACTIONS(233),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(233),
    [anon_sym_Height] = ACTIONS(233),
    [anon_sym_Identified] = ACTIONS(233),
    [anon_sym_ItemLevel] = ACTIONS(233),
    [anon_sym_LinkedSockets] = ACTIONS(233),
    [anon_sym_MapTier] = ACTIONS(233),
    [anon_sym_Mirrored] = ACTIONS(233),
    [anon_sym_Quality] = ACTIONS(233),
    [anon_sym_Rarity] = ACTIONS(233),
    [anon_sym_Replica] = ACTIONS(233),
    [anon_sym_Scourged] = ACTIONS(233),
    [anon_sym_ShapedMap] = ACTIONS(233),
    [anon_sym_ShaperItem] = ACTIONS(233),
    [anon_sym_SocketGroup] = ACTIONS(233),
    [anon_sym_Sockets] = ACTIONS(233),
    [anon_sym_StackSize] = ACTIONS(233),
    [anon_sym_SynthesisedItem] = ACTIONS(233),
    [anon_sym_UberBlightedMap] = ACTIONS(233),
    [anon_sym_Width] = ACTIONS(233),
    [anon_sym_PlayAlertSound] = ACTIONS(235),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(233),
    [anon_sym_CustomAlertSound] = ACTIONS(235),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(233),
    [anon_sym_DisableDropSound] = ACTIONS(235),
    [anon_sym_EnableDropSound] = ACTIONS(235),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(233),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(233),
    [anon_sym_MinimapIcon] = ACTIONS(233),
    [anon_sym_PlayEffect] = ACTIONS(233),
    [anon_sym_SetBackgroundColor] = ACTIONS(233),
    [anon_sym_SetBorderColor] = ACTIONS(233),
    [anon_sym_SetFontSize] = ACTIONS(233),
    [anon_sym_SetTextColor] = ACTIONS(233),
    [anon_sym_Continue] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(233),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_Show] = ACTIONS(237),
    [anon_sym_Hide] = ACTIONS(237),
    [anon_sym_AlternateQuality] = ACTIONS(237),
    [anon_sym_AnyEnchantment] = ACTIONS(237),
    [anon_sym_ArchnemesisMod] = ACTIONS(237),
    [anon_sym_AreaLevel] = ACTIONS(237),
    [anon_sym_BaseArmour] = ACTIONS(237),
    [anon_sym_BaseDefencePercentile] = ACTIONS(237),
    [anon_sym_BaseEnergyShield] = ACTIONS(237),
    [anon_sym_BaseEvasion] = ACTIONS(237),
    [anon_sym_BaseType] = ACTIONS(237),
    [anon_sym_BaseWard] = ACTIONS(237),
    [anon_sym_BlightedMap] = ACTIONS(237),
    [anon_sym_Class] = ACTIONS(237),
    [anon_sym_Corrupted] = ACTIONS(239),
    [anon_sym_CorruptedMods] = ACTIONS(237),
    [anon_sym_DropLevel] = ACTIONS(237),
    [anon_sym_ElderItem] = ACTIONS(237),
    [anon_sym_ElderMap] = ACTIONS(237),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(237),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(237),
    [anon_sym_FracturedItem] = ACTIONS(237),
    [anon_sym_GemLevel] = ACTIONS(237),
    [anon_sym_GemQualityType] = ACTIONS(237),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(237),
    [anon_sym_HasEnchantment] = ACTIONS(237),
    [anon_sym_HasExplicitMod] = ACTIONS(237),
    [anon_sym_HasInfluence] = ACTIONS(237),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(237),
    [anon_sym_Height] = ACTIONS(237),
    [anon_sym_Identified] = ACTIONS(237),
    [anon_sym_ItemLevel] = ACTIONS(237),
    [anon_sym_LinkedSockets] = ACTIONS(237),
    [anon_sym_MapTier] = ACTIONS(237),
    [anon_sym_Mirrored] = ACTIONS(237),
    [anon_sym_Quality] = ACTIONS(237),
    [anon_sym_Rarity] = ACTIONS(237),
    [anon_sym_Replica] = ACTIONS(237),
    [anon_sym_Scourged] = ACTIONS(237),
    [anon_sym_ShapedMap] = ACTIONS(237),
    [anon_sym_ShaperItem] = ACTIONS(237),
    [anon_sym_SocketGroup] = ACTIONS(237),
    [anon_sym_Sockets] = ACTIONS(237),
    [anon_sym_StackSize] = ACTIONS(237),
    [anon_sym_SynthesisedItem] = ACTIONS(237),
    [anon_sym_UberBlightedMap] = ACTIONS(237),
    [anon_sym_Width] = ACTIONS(237),
    [anon_sym_PlayAlertSound] = ACTIONS(239),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(237),
    [anon_sym_CustomAlertSound] = ACTIONS(239),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(237),
    [anon_sym_DisableDropSound] = ACTIONS(239),
    [anon_sym_EnableDropSound] = ACTIONS(239),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(237),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(237),
    [anon_sym_MinimapIcon] = ACTIONS(237),
    [anon_sym_PlayEffect] = ACTIONS(237),
    [anon_sym_SetBackgroundColor] = ACTIONS(237),
    [anon_sym_SetBorderColor] = ACTIONS(237),
    [anon_sym_SetFontSize] = ACTIONS(237),
    [anon_sym_SetTextColor] = ACTIONS(237),
    [anon_sym_Continue] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(237),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(171), 1,
      sym_shape,
    ACTIONS(241), 12,
      anon_sym_Circle,
      anon_sym_Diamond,
      anon_sym_Hexagon,
      anon_sym_Square,
      anon_sym_Star,
      anon_sym_Triangle,
      anon_sym_Cross,
      anon_sym_Moon,
      anon_sym_Raindrop,
      anon_sym_Kite,
      anon_sym_Pentagon,
      anon_sym_UpsideDownHouse,
  [21] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(172), 1,
      sym_shape,
    ACTIONS(241), 12,
      anon_sym_Circle,
      anon_sym_Diamond,
      anon_sym_Hexagon,
      anon_sym_Square,
      anon_sym_Star,
      anon_sym_Triangle,
      anon_sym_Cross,
      anon_sym_Moon,
      anon_sym_Raindrop,
      anon_sym_Kite,
      anon_sym_Pentagon,
      anon_sym_UpsideDownHouse,
  [42] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_None,
    STATE(114), 1,
      sym_colour,
    ACTIONS(245), 11,
      anon_sym_Red,
      anon_sym_Green,
      anon_sym_Blue,
      anon_sym_Brown,
      anon_sym_White,
      anon_sym_Yellow,
      anon_sym_Cyan,
      anon_sym_Grey,
      anon_sym_Orange,
      anon_sym_Pink,
      anon_sym_Purple,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(157), 1,
      sym_colour,
    ACTIONS(245), 11,
      anon_sym_Red,
      anon_sym_Green,
      anon_sym_Blue,
      anon_sym_Brown,
      anon_sym_White,
      anon_sym_Yellow,
      anon_sym_Cyan,
      anon_sym_Grey,
      anon_sym_Orange,
      anon_sym_Pink,
      anon_sym_Purple,
  [85] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(158), 1,
      sym_colour,
    ACTIONS(245), 11,
      anon_sym_Red,
      anon_sym_Green,
      anon_sym_Blue,
      anon_sym_Brown,
      anon_sym_White,
      anon_sym_Yellow,
      anon_sym_Cyan,
      anon_sym_Grey,
      anon_sym_Orange,
      anon_sym_Pink,
      anon_sym_Purple,
  [105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_rarity,
    ACTIONS(247), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(95), 2,
      sym__equal_operator,
      sym__range_operator,
    ACTIONS(251), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [129] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    ACTIONS(259), 1,
      sym_number,
    STATE(103), 1,
      sym_string,
    STATE(104), 1,
      sym__quantity,
    ACTIONS(253), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(181), 2,
      sym__equal_operator,
      sym__range_operator,
  [156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_influence,
    ACTIONS(261), 7,
      anon_sym_None,
      anon_sym_Shaper,
      anon_sym_Elder,
      anon_sym_Crusader,
      anon_sym_Hunter,
      anon_sym_Redeemer,
      anon_sym_Warlord,
  [175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_sockets_token2,
    STATE(102), 1,
      sym_sockets,
    ACTIONS(265), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(101), 2,
      sym__equal_operator,
      sym__range_operator,
  [196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_number,
    STATE(150), 1,
      sym__quantity,
    ACTIONS(271), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(169), 2,
      sym__equal_operator,
      sym__range_operator,
  [214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      sym__eol,
    ACTIONS(7), 2,
      anon_sym_Show,
      anon_sym_Hide,
    STATE(44), 2,
      sym_block,
      aux_sym_filter_repeat1,
  [232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_quality,
    ACTIONS(281), 4,
      anon_sym_Superior,
      anon_sym_Divergent,
      anon_sym_Anomalous,
      anon_sym_Phantasmal,
  [248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      sym__eol,
    ACTIONS(285), 2,
      anon_sym_Show,
      anon_sym_Hide,
    STATE(44), 2,
      sym_block,
      aux_sym_filter_repeat1,
  [266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_rarity,
    ACTIONS(251), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    ACTIONS(291), 1,
      aux_sym__equal_operator_token1,
    STATE(92), 1,
      sym_string,
    STATE(97), 1,
      sym__equal_operator,
  [301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    ACTIONS(293), 1,
      aux_sym__equal_operator_token1,
    STATE(83), 1,
      sym_string,
    STATE(131), 1,
      sym__equal_operator,
  [320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    ACTIONS(295), 1,
      aux_sym__equal_operator_token1,
    STATE(84), 1,
      sym__equal_operator,
    STATE(85), 1,
      sym_string,
  [339] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    ACTIONS(259), 1,
      aux_sym__equal_operator_token1,
    STATE(103), 1,
      sym_string,
    STATE(104), 1,
      sym__equal_operator,
  [358] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__space,
    ACTIONS(301), 1,
      sym__eol,
    STATE(78), 1,
      aux_sym_condition_repeat5,
  [371] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__space,
    ACTIONS(305), 1,
      sym__eol,
    STATE(63), 1,
      aux_sym_condition_repeat7,
  [384] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__space,
    ACTIONS(309), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat4,
  [397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DASH1,
    ACTIONS(313), 1,
      aux_sym__icon_size_token1,
    STATE(164), 1,
      sym__icon_size,
  [410] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__eol,
    ACTIONS(315), 1,
      sym__space,
    STATE(61), 1,
      aux_sym_condition_repeat8,
  [423] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__space,
    ACTIONS(319), 1,
      sym__eol,
    STATE(77), 1,
      aux_sym_condition_repeat3,
  [436] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__space,
    ACTIONS(323), 1,
      sym__eol,
    STATE(72), 1,
      aux_sym_condition_repeat2,
  [449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym_action_token1,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_file,
  [462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_None,
    ACTIONS(329), 1,
      aux_sym__id_token1,
    STATE(82), 1,
      sym__id,
  [475] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(333), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_condition_repeat1,
  [488] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__eol,
    ACTIONS(315), 1,
      sym__space,
    STATE(61), 1,
      aux_sym_condition_repeat8,
  [501] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    ACTIONS(338), 1,
      sym__eol,
    STATE(61), 1,
      aux_sym_condition_repeat8,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_sockets_token2,
    STATE(102), 1,
      sym_sockets,
  [527] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__space,
    ACTIONS(343), 1,
      sym__eol,
    STATE(63), 1,
      aux_sym_condition_repeat7,
  [540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    STATE(103), 1,
      sym_string,
  [553] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__eol,
    ACTIONS(303), 1,
      sym__space,
    STATE(63), 1,
      aux_sym_condition_repeat7,
  [566] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    ACTIONS(348), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_condition_repeat1,
  [579] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__eol,
    ACTIONS(350), 1,
      sym__space,
    STATE(68), 1,
      aux_sym_condition_repeat6,
  [592] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__space,
    ACTIONS(355), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym_condition_repeat6,
  [605] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(357), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_condition_repeat1,
  [618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    STATE(92), 1,
      sym_string,
  [631] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__space,
    ACTIONS(359), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat4,
  [644] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__space,
    ACTIONS(364), 1,
      sym__eol,
    STATE(72), 1,
      aux_sym_condition_repeat2,
  [657] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__space,
    ACTIONS(369), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat4,
  [670] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__space,
    ACTIONS(371), 1,
      sym__eol,
    STATE(77), 1,
      aux_sym_condition_repeat3,
  [683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    STATE(83), 1,
      sym_string,
  [696] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__space,
    ACTIONS(373), 1,
      sym__eol,
    STATE(72), 1,
      aux_sym_condition_repeat2,
  [709] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__space,
    ACTIONS(378), 1,
      sym__eol,
    STATE(77), 1,
      aux_sym_condition_repeat3,
  [722] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym__space,
    ACTIONS(383), 1,
      sym__eol,
    STATE(78), 1,
      aux_sym_condition_repeat5,
  [735] = 4,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(385), 1,
      sym__eol,
    STATE(66), 1,
      aux_sym_condition_repeat1,
  [748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    STATE(85), 1,
      sym_string,
  [761] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__eol,
    ACTIONS(387), 1,
      sym__space,
  [771] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__space,
    ACTIONS(391), 1,
      sym__eol,
  [781] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__space,
    ACTIONS(395), 1,
      sym__eol,
  [791] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__space,
    STATE(52), 1,
      aux_sym_condition_repeat4,
  [801] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__space,
    ACTIONS(399), 1,
      sym__eol,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym__color_token1,
    STATE(178), 1,
      sym__color,
  [821] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__space,
    ACTIONS(405), 1,
      sym__eol,
  [831] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__eol,
    ACTIONS(407), 1,
      sym__space,
  [841] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__space,
    ACTIONS(411), 1,
      sym__eol,
  [851] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__space,
    STATE(79), 1,
      aux_sym_condition_repeat1,
  [861] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__space,
    ACTIONS(417), 1,
      sym__eol,
  [871] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__space,
    ACTIONS(421), 1,
      sym__eol,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym__color_token1,
    STATE(91), 1,
      sym__color,
  [891] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__space,
    ACTIONS(427), 1,
      sym__eol,
  [901] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__space,
    STATE(51), 1,
      aux_sym_condition_repeat7,
  [911] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(429), 1,
      sym__space,
  [921] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_condition_repeat2,
  [931] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_condition_repeat2,
  [941] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__space,
    STATE(74), 1,
      aux_sym_condition_repeat3,
  [951] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__space,
    ACTIONS(437), 1,
      sym__eol,
  [961] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__space,
    STATE(54), 1,
      aux_sym_condition_repeat8,
  [971] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__eol,
    ACTIONS(439), 1,
      sym__space,
  [981] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__space,
    ACTIONS(443), 1,
      sym__eol,
  [991] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    STATE(59), 1,
      aux_sym_condition_repeat1,
  [1001] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__space,
    ACTIONS(447), 1,
      sym__eol,
  [1011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym__volume_token1,
    STATE(154), 1,
      sym__volume,
  [1021] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__space,
    STATE(71), 1,
      aux_sym_condition_repeat4,
  [1031] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__space,
    ACTIONS(455), 1,
      sym__eol,
  [1041] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__space,
    STATE(50), 1,
      aux_sym_condition_repeat5,
  [1051] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__space,
    STATE(69), 1,
      aux_sym_condition_repeat1,
  [1061] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__space,
    STATE(67), 1,
      aux_sym_condition_repeat6,
  [1071] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym__eol,
    ACTIONS(459), 1,
      sym__space,
  [1081] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__space,
    ACTIONS(463), 1,
      sym__eol,
  [1091] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__eol,
    ACTIONS(465), 1,
      sym__space,
  [1101] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym__space,
    STATE(65), 1,
      aux_sym_condition_repeat7,
  [1111] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__space,
    ACTIONS(471), 1,
      sym__eol,
  [1121] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(475), 1,
      sym__eol,
  [1131] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__space,
    ACTIONS(479), 1,
      sym__eol,
  [1141] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__space,
    STATE(60), 1,
      aux_sym_condition_repeat8,
  [1151] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__space,
    ACTIONS(485), 1,
      sym__eol,
  [1161] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__space,
    ACTIONS(489), 1,
      sym__eol,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym__font_size_token1,
    STATE(162), 1,
      sym__font_size,
  [1181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym__color_token1,
    STATE(163), 1,
      sym__color,
  [1191] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym__space,
    ACTIONS(497), 1,
      sym__eol,
  [1201] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__space,
    ACTIONS(501), 1,
      sym__eol,
  [1211] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__space,
    ACTIONS(505), 1,
      sym__eol,
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym__color_token1,
    STATE(161), 1,
      sym__color,
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym__volume_token1,
    STATE(156), 1,
      sym__volume,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_file,
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym__volume_token1,
    STATE(153), 1,
      sym__volume,
  [1261] = 3,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__space,
    STATE(55), 1,
      aux_sym_condition_repeat3,
  [1271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_boolean,
  [1278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__eol,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_quality_token1,
  [1299] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__space,
  [1306] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__space,
  [1313] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__space,
  [1320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_Temp,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_Temp,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
  [1341] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__space,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_boolean,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
  [1362] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym__space,
  [1369] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__space,
  [1376] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__space,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__eol,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__eol,
  [1411] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym_string_token1,
  [1418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym__eol,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__eol,
  [1432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__eol,
  [1446] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__space,
  [1453] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__space,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym__eol,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__eol,
  [1474] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__space,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__eol,
  [1488] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__space,
  [1495] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__space,
  [1502] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__space,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__eol,
  [1516] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_file_token1,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_sockets_token1,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_number,
  [1537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__eol,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__eol,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__eol,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_rarity_token1,
  [1565] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__space,
  [1572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__eol,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      aux_sym_influence_token1,
  [1586] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__space,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__eol,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
  [1607] = 2,
    ACTIONS(297), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__space,
  [1614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 21,
  [SMALL_STATE(34)] = 42,
  [SMALL_STATE(35)] = 65,
  [SMALL_STATE(36)] = 85,
  [SMALL_STATE(37)] = 105,
  [SMALL_STATE(38)] = 129,
  [SMALL_STATE(39)] = 156,
  [SMALL_STATE(40)] = 175,
  [SMALL_STATE(41)] = 196,
  [SMALL_STATE(42)] = 214,
  [SMALL_STATE(43)] = 232,
  [SMALL_STATE(44)] = 248,
  [SMALL_STATE(45)] = 266,
  [SMALL_STATE(46)] = 282,
  [SMALL_STATE(47)] = 301,
  [SMALL_STATE(48)] = 320,
  [SMALL_STATE(49)] = 339,
  [SMALL_STATE(50)] = 358,
  [SMALL_STATE(51)] = 371,
  [SMALL_STATE(52)] = 384,
  [SMALL_STATE(53)] = 397,
  [SMALL_STATE(54)] = 410,
  [SMALL_STATE(55)] = 423,
  [SMALL_STATE(56)] = 436,
  [SMALL_STATE(57)] = 449,
  [SMALL_STATE(58)] = 462,
  [SMALL_STATE(59)] = 475,
  [SMALL_STATE(60)] = 488,
  [SMALL_STATE(61)] = 501,
  [SMALL_STATE(62)] = 514,
  [SMALL_STATE(63)] = 527,
  [SMALL_STATE(64)] = 540,
  [SMALL_STATE(65)] = 553,
  [SMALL_STATE(66)] = 566,
  [SMALL_STATE(67)] = 579,
  [SMALL_STATE(68)] = 592,
  [SMALL_STATE(69)] = 605,
  [SMALL_STATE(70)] = 618,
  [SMALL_STATE(71)] = 631,
  [SMALL_STATE(72)] = 644,
  [SMALL_STATE(73)] = 657,
  [SMALL_STATE(74)] = 670,
  [SMALL_STATE(75)] = 683,
  [SMALL_STATE(76)] = 696,
  [SMALL_STATE(77)] = 709,
  [SMALL_STATE(78)] = 722,
  [SMALL_STATE(79)] = 735,
  [SMALL_STATE(80)] = 748,
  [SMALL_STATE(81)] = 761,
  [SMALL_STATE(82)] = 771,
  [SMALL_STATE(83)] = 781,
  [SMALL_STATE(84)] = 791,
  [SMALL_STATE(85)] = 801,
  [SMALL_STATE(86)] = 811,
  [SMALL_STATE(87)] = 821,
  [SMALL_STATE(88)] = 831,
  [SMALL_STATE(89)] = 841,
  [SMALL_STATE(90)] = 851,
  [SMALL_STATE(91)] = 861,
  [SMALL_STATE(92)] = 871,
  [SMALL_STATE(93)] = 881,
  [SMALL_STATE(94)] = 891,
  [SMALL_STATE(95)] = 901,
  [SMALL_STATE(96)] = 911,
  [SMALL_STATE(97)] = 921,
  [SMALL_STATE(98)] = 931,
  [SMALL_STATE(99)] = 941,
  [SMALL_STATE(100)] = 951,
  [SMALL_STATE(101)] = 961,
  [SMALL_STATE(102)] = 971,
  [SMALL_STATE(103)] = 981,
  [SMALL_STATE(104)] = 991,
  [SMALL_STATE(105)] = 1001,
  [SMALL_STATE(106)] = 1011,
  [SMALL_STATE(107)] = 1021,
  [SMALL_STATE(108)] = 1031,
  [SMALL_STATE(109)] = 1041,
  [SMALL_STATE(110)] = 1051,
  [SMALL_STATE(111)] = 1061,
  [SMALL_STATE(112)] = 1071,
  [SMALL_STATE(113)] = 1081,
  [SMALL_STATE(114)] = 1091,
  [SMALL_STATE(115)] = 1101,
  [SMALL_STATE(116)] = 1111,
  [SMALL_STATE(117)] = 1121,
  [SMALL_STATE(118)] = 1131,
  [SMALL_STATE(119)] = 1141,
  [SMALL_STATE(120)] = 1151,
  [SMALL_STATE(121)] = 1161,
  [SMALL_STATE(122)] = 1171,
  [SMALL_STATE(123)] = 1181,
  [SMALL_STATE(124)] = 1191,
  [SMALL_STATE(125)] = 1201,
  [SMALL_STATE(126)] = 1211,
  [SMALL_STATE(127)] = 1221,
  [SMALL_STATE(128)] = 1231,
  [SMALL_STATE(129)] = 1241,
  [SMALL_STATE(130)] = 1251,
  [SMALL_STATE(131)] = 1261,
  [SMALL_STATE(132)] = 1271,
  [SMALL_STATE(133)] = 1278,
  [SMALL_STATE(134)] = 1285,
  [SMALL_STATE(135)] = 1292,
  [SMALL_STATE(136)] = 1299,
  [SMALL_STATE(137)] = 1306,
  [SMALL_STATE(138)] = 1313,
  [SMALL_STATE(139)] = 1320,
  [SMALL_STATE(140)] = 1327,
  [SMALL_STATE(141)] = 1334,
  [SMALL_STATE(142)] = 1341,
  [SMALL_STATE(143)] = 1348,
  [SMALL_STATE(144)] = 1355,
  [SMALL_STATE(145)] = 1362,
  [SMALL_STATE(146)] = 1369,
  [SMALL_STATE(147)] = 1376,
  [SMALL_STATE(148)] = 1383,
  [SMALL_STATE(149)] = 1390,
  [SMALL_STATE(150)] = 1397,
  [SMALL_STATE(151)] = 1404,
  [SMALL_STATE(152)] = 1411,
  [SMALL_STATE(153)] = 1418,
  [SMALL_STATE(154)] = 1425,
  [SMALL_STATE(155)] = 1432,
  [SMALL_STATE(156)] = 1439,
  [SMALL_STATE(157)] = 1446,
  [SMALL_STATE(158)] = 1453,
  [SMALL_STATE(159)] = 1460,
  [SMALL_STATE(160)] = 1467,
  [SMALL_STATE(161)] = 1474,
  [SMALL_STATE(162)] = 1481,
  [SMALL_STATE(163)] = 1488,
  [SMALL_STATE(164)] = 1495,
  [SMALL_STATE(165)] = 1502,
  [SMALL_STATE(166)] = 1509,
  [SMALL_STATE(167)] = 1516,
  [SMALL_STATE(168)] = 1523,
  [SMALL_STATE(169)] = 1530,
  [SMALL_STATE(170)] = 1537,
  [SMALL_STATE(171)] = 1544,
  [SMALL_STATE(172)] = 1551,
  [SMALL_STATE(173)] = 1558,
  [SMALL_STATE(174)] = 1565,
  [SMALL_STATE(175)] = 1572,
  [SMALL_STATE(176)] = 1579,
  [SMALL_STATE(177)] = 1586,
  [SMALL_STATE(178)] = 1593,
  [SMALL_STATE(179)] = 1600,
  [SMALL_STATE(180)] = 1607,
  [SMALL_STATE(181)] = 1614,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(177),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(174),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(98),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(99),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(177),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(115),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(146),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(145),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(137),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, .production_id = 16),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, .production_id = 16),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, .production_id = 14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, .production_id = 14),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, .production_id = 14),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, .production_id = 25),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 10, .production_id = 25),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, .production_id = 24),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, .production_id = 24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, .production_id = 23),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, .production_id = 23),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, .production_id = 22),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, .production_id = 22),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, .production_id = 21),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, .production_id = 21),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, .production_id = 20),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 20),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, .production_id = 19),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 19),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, .production_id = 18),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 18),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, .production_id = 17),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 17),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, .production_id = 16),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, .production_id = 16),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, .production_id = 15),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, .production_id = 14),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, .production_id = 11),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, .production_id = 8),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2), SHIFT_REPEAT(175),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2), SHIFT_REPEAT(44),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2), SHIFT_REPEAT(62),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat8, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2), SHIFT_REPEAT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat7, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, .production_id = 3), SHIFT_REPEAT(64),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2), SHIFT_REPEAT(39),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat6, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, .production_id = 6), SHIFT_REPEAT(70),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, .production_id = 6),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, .production_id = 12), SHIFT_REPEAT(80),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, .production_id = 12),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, .production_id = 9), SHIFT_REPEAT(75),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, .production_id = 9),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2), SHIFT_REPEAT(43),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat5, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, .production_id = 7),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, .production_id = 7),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, .production_id = 10),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, .production_id = 10),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, .production_id = 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, .production_id = 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 1, .production_id = 13),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 1, .production_id = 13),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colour, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [607] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_poe_filter(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
