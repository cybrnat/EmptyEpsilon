#ifndef BRIEFING_SCREEN_H
#define BRIEFING_SCREEN_H

#include "gui/gui2_overlay.h"
#include "gui/gui2_label.h"
#include "gui/gui2_button.h"
#include "gui/gui2_image.h"

class BriefingScreen : public GuiOverlay
{
public:
    BriefingScreen(GuiContainer* container);
    void setBriefing(const std::vector<std::string>& paths);

private:
    void updateImage();

    std::vector<std::string> page_paths;
    int current_page;

    GuiLabel* title;
    std::vector<GuiImage*> images;
    GuiButton* button_prev;
    GuiButton* button_next;
};

#endif // BRIEFING_SCREEN_H