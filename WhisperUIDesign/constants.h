#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QColor>

extern QString level_prefix[3];

extern QString level_stylesheet[3];

enum PromptLevel {
    Lv_HINT,
    Lv_WARNING,
    Lv_ERROR,
    Lv_NONE
};


#endif // CONSTANTS_H
