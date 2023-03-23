#include "theme.h"

#pragma GCC diagnostic ignored "-Wmissing-braces"

theme_t currTheme;

void setTheme(ColorSetId colorSetId) {
  switch (colorSetId) {
    case ColorSetId_Light:
      currTheme = (theme_t) {
        .textColor            =      RGBA8(0x00, 0x00, 0x00, 0xFF),
        .unselectedColor      =      RGBA8(0xB4, 0xB4, 0xB4, 0xFF),
        .backgroundColor      =      RGBA8(0xEA, 0xEA, 0xEA, 0xFF),
        .highlightColor       =      RGBA8(0x27, 0xA3, 0xC7, 0xFF),
        .selectedColor        =      RGBA8(0x50, 0x2D, 0xE4, 0xFF),
        .separatorColor       =      RGBA8(0xA0, 0xA0, 0xA0, 0xFF),
        .selectedButtonColor  =      RGBA8(0xFD, 0xFD, 0xFD, 0xFF),
        .submenuButtonColor   =      RGBA8(0xC0, 0xC0, 0xC0, 0xFF),
        .activatedColor       =      RGBA8(0xE4, 0x2D, 0x50, 0xFF),
        .overlayColor         =      RGBA8(0xFF, 0xFF, 0xFF, 0xDD),
        .highlightTextColor   =      RGBA8(0x00, 0xBF, 0xD0, 0xFF),
        .tooltipColor         =      RGBA8(0xFF, 0xFF, 0xFF, 0xFF),
        .tooltipTextColor     =      RGBA8(0x08, 0xC4, 0xD0, 0xFF),
        .alert                =      RGBA8(0xFF, 0x00, 0x00, 0xFF)
      };
      break;
    case ColorSetId_Dark:
      currTheme = (theme_t) {
        .textColor            =      RGBA8(0xFF, 0xFF, 0xFF, 0xFF),
        .unselectedColor      =      RGBA8(0x6C, 0x6C, 0x6C, 0xFF),
        .backgroundColor      =      RGBA8(0x31, 0x31, 0x31, 0xFF),
        .highlightColor       =      RGBA8(0x27, 0xA3, 0xC7, 0xFF),
        .selectedColor        =      RGBA8(0x59, 0xED, 0xC0, 0xFF),
        .separatorColor       =      RGBA8(0x60, 0x60, 0x60, 0xFF),
        .selectedButtonColor  =      RGBA8(0x25, 0x26, 0x2A, 0xFF),
        .submenuButtonColor   =      RGBA8(0x50, 0x50, 0x50, 0xFF),
        .activatedColor       =      RGBA8(0xE4, 0x27, 0x59, 0xFF),
        .overlayColor         =      RGBA8(0x55, 0x55, 0x55, 0xDD),
        .highlightTextColor   =      RGBA8(0x0A, 0xBF, 0xFF, 0xFF),
        .tooltipColor         =      RGBA8(0x60, 0x60, 0x60, 0xFF),
        .tooltipTextColor     =      RGBA8(0x14, 0xBD, 0xFE, 0xFF),
        .alert                =      RGBA8(0xFF, 0x00, 0x00, 0xFF)
      };
      break;
  }
}
