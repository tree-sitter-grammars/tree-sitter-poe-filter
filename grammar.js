/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.pathofexile.com/item-filter/about|official syntax spec}
 * @see {@link https://pathofexile.fandom.com/wiki/Guide:Item_filter#Syntax|wiki guide}
 * @see {@link https://www.filterblade.xyz/|filter generator}
 */

const I = token.immediate;

/** @param {RuleOrLiteral} rule */
const stringify = rule =>
  choice(seq(I('"'), I(rule), I('"')), rule);

module.exports = grammar({
  name: 'poe_filter',

  extras: $ => [
    /[ \t]/,
    $.comment
  ],

  inline: $ => [
    $._operator
  ],

  rules: {
    filter: $ => repeat(
      choice($.block, $._eol)
    ),

    block: $ => prec.right(seq(
      choice('Show', 'Hide', 'Minimal'),
      $._eol,
      repeat1(choice(
        $.condition,
        $.action,
        $.continue,
        $._eol
      ))
    )),

    condition: $ => seq(choice(
      seq(
        alias('AlternateQuality', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('AnyEnchantment', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('ArchnemesisMod', $.name),
        optional(seq($._space, $._equal_operator)),
        repeat1(seq(
          $._space,
          field('modifier', $.string)
        ))
      ),
      seq(
        alias('AreaLevel', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('BaseArmour', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('BaseDefencePercentile', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('BaseEnergyShield', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('BaseEvasion', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('BaseType', $.name),
        optional(seq($._space, $._equal_operator)),
        repeat1(seq(
          $._space,
          field('type', $.string)
        ))
      ),
      seq(
        alias('BaseWard', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('BlightedMap', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('Class', $.name),
        optional(seq($._space, $._equal_operator)),
        repeat1(seq(
          $._space,
          field('class', $.string)
        ))
      ),
      seq(
        alias('Corrupted', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('CorruptedMods', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('DropLevel', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('ElderItem', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('ElderMap', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('EnchantmentPassiveNode', $.name),
        optional(seq($._space, $._equal_operator)),
        repeat1(seq(
          $._space,
          field('enchantment', $.string)
        ))
      ),
      seq(
        alias('EnchantmentPassiveNum', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('FracturedItem', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('GemLevel', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('GemQualityType', $.name),
        repeat1(seq($._space, $.quality))
      ),
      seq(
        alias('HasEaterOfWorldsImplicit', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('HasEnchantment', $.name),
        optional(seq($._space, $._equal_operator)),
        repeat1(seq(
          $._space,
          field('enchantment', $.string)
        ))
      ),
      seq(
        alias('HasExplicitMod', $.name),
        optional(seq($._space, $._quantity)),
        repeat1(seq(
          $._space,
          field('modifier', $.string)
        ))
      ),
      seq(
        alias('HasInfluence', $.name),
        repeat1(seq($._space, $.influence))
      ),
      seq(
        alias('HasSearingExarchImplicit', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('Height', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('Identified', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('ItemLevel', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('LinkedSockets', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('MapTier', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('Mirrored', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('Quality', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('Rarity', $.name),
        optional(seq($._space, $._operator)),
        repeat1(seq($._space, $.rarity))
      ),
      seq(
        alias('Replica', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('Scourged', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('ShapedMap', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('ShaperItem', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('SocketGroup', $.name),
        optional(seq($._space, $._operator)),
        repeat1(seq($._space, $.sockets))
      ),
      seq(
        alias('Sockets', $.name),
        optional(seq($._space, $._operator)),
        repeat1(seq($._space, $.sockets))
      ),
      seq(
        alias('StackSize', $.name),
        $._space,
        $._quantity
      ),
      seq(
        alias('SynthesisedItem', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('UberBlightedMap', $.name),
        $._space,
        $.boolean
      ),
      seq(
        alias('Width', $.name),
        $._space,
        $._quantity
      ),
    ), $._eol),

    action: $ => seq(choice(
      seq(
        alias('PlayAlertSound', $.name),
        $._space,
        choice(
          alias('None', $.disable),
          field('id', $._id),
        ),
        optional(seq(
          $._space,
          field('volume', $._volume)
        ))
      ),
      seq(
        alias('PlayAlertSoundPositional', $.name),
        $._space,
        choice(
          alias('None', $.disable),
          field('id', $._id),
        ),
        optional(seq(
          $._space,
          field('volume', $._volume)
        ))
      ),
      seq(
        alias('CustomAlertSound', $.name),
        $._space,
        choice(
          alias(
            token(seq('"', 'None', '"')),
            $.disable
          ),
          $.file
        ),
        optional(seq(
          $._space,
          field('volume', $._volume)
        ))
      ),
      seq(
        alias('CustomAlertSoundOptional', $.name),
        $._space,
        $.file,
        optional(seq(
          $._space,
          field('volume', $._volume)
        ))
      ),
      seq(
        alias('DisableDropSound', $.name),
        optional(seq($._space, $.boolean))
      ),
      seq(
        alias('EnableDropSound', $.name),
        optional(seq($._space, $.boolean))
      ),
      seq(
        alias('DisableDropSoundIfAlertSound', $.name),
        optional(seq($._space, $.boolean))
      ),
      seq(
        alias('EnableDropSoundIfAlertSound', $.name),
        optional(seq($._space, $.boolean))
      ),
      seq(
        alias('MinimapIcon', $.name),
        $._space,
        choice(
          alias('-1', $.disable),
          field('size', $._icon_size)
        ),
        $._space,
        $.colour,
        $._space,
        $.shape
      ),
      seq(
        alias('PlayEffect', $.name),
        $._space,
        choice(
          alias('None', $.disable),
          $.colour
        ),
        optional(seq($._space, 'Temp'))
      ),
      seq(
        alias('SetBackgroundColor', $.name),
        $._space,
        field('red', $._color),
        $._space,
        field('green', $._color),
        $._space,
        field('blue', $._color),
        optional(seq(
          $._space,
          field('alpha', $._color)
        ))
      ),
      seq(
        alias('SetBorderColor', $.name),
        $._space,
        field('red', $._color),
        $._space,
        field('green', $._color),
        $._space,
        field('blue', $._color),
        optional(seq(
          $._space,
          field('alpha', $._color)
        ))
      ),
      seq(
        alias('SetFontSize', $.name),
        $._space,
        field('size', $._font_size)
      ),
      seq(
        alias('SetTextColor', $.name),
        $._space,
        field('red', $._color),
        $._space,
        field('green', $._color),
        $._space,
        field('blue', $._color),
        optional(seq(
          $._space,
          field('alpha', $._color)
        ))
      ),
    ), $._eol),

    continue: $ => seq('Continue', $._eol),

    _operator: $ => choice(
      $._equal_operator, $._range_operator
    ),

    _equal_operator: $ => alias(
      token(choice('=', '!', '==')), $.operator
    ),

    _range_operator: $ => alias(
      token(choice('<=', '>=', '<', '>')), $.operator
    ),

    boolean: _ => token(
      choice('True', 'False')
    ),

    quality: _ => stringify(choice(
      'Superior', 'Divergent', 'Anomalous', 'Phantasmal'
    )),

    rarity: _ => stringify(choice(
      'Normal', 'Magic', 'Rare', 'Unique'
    )),

    influence: _ => stringify(choice(
      'Shaper', 'Elder', 'Crusader',
      'Hunter', 'Redeemer', 'Warlord', 'None'
    )),

    sockets: _ => stringify(
      field('sockets', /[0-6]|[0-6]?[RGBWAD]+/)
    ),

    colour: _ => choice(
      'Red', 'Green', 'Blue', 'Brown', 'White',
      'Yellow', 'Cyan', 'Grey', 'Orange', 'Pink', 'Purple'
    ),

    shape: _ => choice(
      'Circle', 'Diamond', 'Hexagon', 'Square',
      'Star', 'Triangle', 'Cross', 'Moon', 'Raindrop',
      'Kite', 'Pentagon', 'UpsideDownHouse'
    ),

    string: _ => choice(
      seq(I('"'), I(/[-\p{L}:,' ]+/), I('"')),
      /[-\p{L}:,']+/
    ),

    file: _ => seq(I('"'), I(/[^\p{Cc}<>"|?*]+/), I('"')),

    _quantity: $ => seq(optional($._operator), $.number),

    number: _ => /0|[1-9][0-9]*/,

    _id: $ => alias(/[0-9]|1[0-6]/, $.number),

    _volume: $ => alias(
      /[0-9]|[1-9][0-9]|[12][0-9][0-9]|300/, $.number
    ),

    _color: $ => alias(
      /[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]/, $.number
    ),

    _icon_size: $ => alias(/[012]/, $.number),

    _font_size: $ => alias(/[0-9]|[1-3][0-9]|4[0-5]/, $.number),

    comment: _ => /#.*/,

    _space: _ => /[ \t]+/,

    _eol: _ => /\r?\n/
  }
});
