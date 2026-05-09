#include "config.h"

#include "gdkcursor.h"
#include "gdkdisplay.h"
#include "gdkwindow.h"

#ifndef GDK_WINDOWING_X11
#define GDK_X11_COMPAT_EXPORT __attribute__((visibility("default")))

GDK_X11_COMPAT_EXPORT GType
gdk_x11_display_get_type (void)
{
  return G_TYPE_INVALID;
}

GDK_X11_COMPAT_EXPORT void *
gdk_x11_display_get_xdisplay (GdkDisplay *display)
{
  (void) display;
  return NULL;
}

GDK_X11_COMPAT_EXPORT unsigned long
gdk_x11_cursor_get_xcursor (GdkCursor *cursor)
{
  (void) cursor;
  return 0;
}

GDK_X11_COMPAT_EXPORT unsigned long
gdk_x11_window_get_xid (GdkWindow *window)
{
  (void) window;
  return 0;
}
#endif
