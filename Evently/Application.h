#pragma once
#include "calendar.h"

namespace EventlyGUI{
    void RenderUI();
    void RenderMainView();
    void RenderCalendarView();
    void CreateEventWindow(Calendar calendar);
    void ResetDocking();
}
