#include "constants.h"

QString level_prefix[3] = {
    "Hint: ",
    "Warning: ",
    "Error: "
};

QString level_stylesheet[3] = {
    "#widget{\
        background-image: url(:/src/GUI/prompt_hint.png);\
        color:rgb(82, 82, 82);\
    }",
    "#widget{\
        background-image: url(:/src/GUI/prompt_warning.png);\
        color:rgb(82, 82, 82);\
    }",
    "#widget{\
        background-image: url(:/src/GUI/prompt_error.png);\
        color:rgb(82, 82, 82);\
    }"
};

enum PromptLevel;
