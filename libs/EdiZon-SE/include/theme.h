#pragma once

#include <edizon.h>
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
  color_t textColor;
  color_t unselectedColor;
  color_t backgroundColor;
  color_t highlightColor;
  color_t selectedColor;
  color_t separatorColor;
  color_t selectedButtonColor;
  color_t submenuButtonColor;
  color_t activatedColor;
  color_t overlayColor;
  color_t highlightTextColor;
  color_t tooltipColor;
  color_t tooltipTextColor;
  color_t alert;
} theme_t;

extern theme_t currTheme;

void setTheme(ColorSetId colorSetId);

#ifdef __cplusplus
}
#endif