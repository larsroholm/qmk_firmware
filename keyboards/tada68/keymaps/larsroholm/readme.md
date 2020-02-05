# TADA68 layout for ISO-DK

Slightly tweaked Danish ISO layout with a minimal function layer.

* Del and Ins swapped, so that Del is next to Backspace.
* Home and End on base layer instead of PgUp and PgDn.
* PgUp and PgDn on function layer (1) on Uparrow and Downarrow respectively.

## Layers

### Base layer

```txt
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
│Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │ Backsp│Del│
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
│ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │Ins│
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent├───┤
│ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Æ │ Ø │ ' │    │Hom│
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
│Shft│ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │ Shift│ ↑ │End│
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
│Ctl │Win │Alt │         Space          │Alt│Fn │Ctl│ ← │ ↓ │ → │
└────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
```

### Function layer (1)

```txt
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
│   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│       │Psc│
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
│     │   │   │   │   │   │   │   │   │   │   │   │   │     │   │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    ├───┤
│      │   │   │   │   │   │   │   │   │   │   │   │   │    │   │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
│    │   │   │   │   │   │   │   │   │   │   │   │      │PgU│   │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
│    │    │    │                        │   │   │   │   │PgD│   │
└────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
```

## Installation

Please see the [tada68 readme](../../readme.md) on how to use the following command:

```
make tada68:larsroholm:bin
```
