/* Generated by dbus-binding-tool; do not edit! */

#include <glib.h>
#include <dbus/dbus-glib.h>

G_BEGIN_DECLS

#ifndef _DBUS_GLIB_ASYNC_DATA_FREE
#define _DBUS_GLIB_ASYNC_DATA_FREE
static
#ifdef G_HAVE_INLINE
inline
#endif
void
_dbus_glib_async_data_free (gpointer stuff)
{
	g_slice_free (DBusGAsyncData, stuff);
}
#endif

#ifndef DBUS_GLIB_CLIENT_WRAPPERS_xfdesktop_file_manager_proxy
#define DBUS_GLIB_CLIENT_WRAPPERS_xfdesktop_file_manager_proxy

static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_display_chooser_dialog (DBusGProxy *proxy, const char * IN_uri, const gboolean IN_open, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayChooserDialog", error, G_TYPE_STRING, IN_uri, G_TYPE_BOOLEAN, IN_open, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_display_chooser_dialog_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_display_chooser_dialog_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_display_chooser_dialog_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_display_chooser_dialog_async (DBusGProxy *proxy, const char * IN_uri, const gboolean IN_open, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_display_chooser_dialog_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayChooserDialog", xfdesktop_file_manager_proxy_display_chooser_dialog_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_uri, G_TYPE_BOOLEAN, IN_open, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_display_folder (DBusGProxy *proxy, const char * IN_uri, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayFolder", error, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_display_folder_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_display_folder_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_display_folder_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_display_folder_async (DBusGProxy *proxy, const char * IN_uri, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_display_folder_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayFolder", xfdesktop_file_manager_proxy_display_folder_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_display_folder_and_select (DBusGProxy *proxy, const char * IN_uri, const char * IN_filename, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayFolderAndSelect", error, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_display_folder_and_select_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_display_folder_and_select_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_display_folder_and_select_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_display_folder_and_select_async (DBusGProxy *proxy, const char * IN_uri, const char * IN_filename, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_display_folder_and_select_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayFolderAndSelect", xfdesktop_file_manager_proxy_display_folder_and_select_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_display_file_properties (DBusGProxy *proxy, const char * IN_uri, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayFileProperties", error, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_display_file_properties_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_display_file_properties_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_display_file_properties_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_display_file_properties_async (DBusGProxy *proxy, const char * IN_uri, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_display_file_properties_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayFileProperties", xfdesktop_file_manager_proxy_display_file_properties_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_launch (DBusGProxy *proxy, const char * IN_uri, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "Launch", error, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_launch_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_launch_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_launch_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_launch_async (DBusGProxy *proxy, const char * IN_uri, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_launch_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Launch", xfdesktop_file_manager_proxy_launch_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_execute (DBusGProxy *proxy, const char * IN_working_directory, const char * IN_uri, const char ** IN_files, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "Execute", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRING, IN_uri, G_TYPE_STRV, IN_files, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_execute_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_execute_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_execute_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_execute_async (DBusGProxy *proxy, const char * IN_working_directory, const char * IN_uri, const char ** IN_files, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_execute_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "Execute", xfdesktop_file_manager_proxy_execute_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRING, IN_uri, G_TYPE_STRV, IN_files, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_display_preferences_dialog (DBusGProxy *proxy, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "DisplayPreferencesDialog", error, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_display_preferences_dialog_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_display_preferences_dialog_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_display_preferences_dialog_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_display_preferences_dialog_async (DBusGProxy *proxy, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_display_preferences_dialog_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "DisplayPreferencesDialog", xfdesktop_file_manager_proxy_display_preferences_dialog_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_copy_to (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char ** IN_target_filenames, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "CopyTo", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRV, IN_target_filenames, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_copy_to_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_copy_to_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_copy_to_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_copy_to_async (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char ** IN_target_filenames, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_copy_to_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CopyTo", xfdesktop_file_manager_proxy_copy_to_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRV, IN_target_filenames, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_copy_into (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char * IN_target_filename, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "CopyInto", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRING, IN_target_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_copy_into_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_copy_into_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_copy_into_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_copy_into_async (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char * IN_target_filename, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_copy_into_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CopyInto", xfdesktop_file_manager_proxy_copy_into_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRING, IN_target_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_move_into (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char * IN_target_filename, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "MoveInto", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRING, IN_target_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_move_into_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_move_into_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_move_into_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_move_into_async (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char * IN_target_filename, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_move_into_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "MoveInto", xfdesktop_file_manager_proxy_move_into_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRING, IN_target_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_link_into (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char * IN_target_filename, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "LinkInto", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRING, IN_target_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_link_into_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_link_into_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_link_into_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_link_into_async (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_source_filenames, const char * IN_target_filename, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_link_into_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "LinkInto", xfdesktop_file_manager_proxy_link_into_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_source_filenames, G_TYPE_STRING, IN_target_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_unlink_files (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_filenames, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "UnlinkFiles", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_filenames, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_unlink_files_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_unlink_files_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_unlink_files_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_unlink_files_async (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_filenames, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_unlink_files_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "UnlinkFiles", xfdesktop_file_manager_proxy_unlink_files_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_filenames, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_launch_files (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_filenames, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "LaunchFiles", error, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_filenames, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_launch_files_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_launch_files_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_launch_files_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_launch_files_async (DBusGProxy *proxy, const char * IN_working_directory, const char ** IN_filenames, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_launch_files_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "LaunchFiles", xfdesktop_file_manager_proxy_launch_files_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_working_directory, G_TYPE_STRV, IN_filenames, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_rename_file (DBusGProxy *proxy, const char * IN_filename, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "RenameFile", error, G_TYPE_STRING, IN_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_rename_file_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_rename_file_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_rename_file_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_rename_file_async (DBusGProxy *proxy, const char * IN_filename, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_rename_file_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "RenameFile", xfdesktop_file_manager_proxy_rename_file_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_filename, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_create_file (DBusGProxy *proxy, const char * IN_parent_directory, const char * IN_content_type, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "CreateFile", error, G_TYPE_STRING, IN_parent_directory, G_TYPE_STRING, IN_content_type, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_create_file_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_create_file_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_create_file_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_create_file_async (DBusGProxy *proxy, const char * IN_parent_directory, const char * IN_content_type, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_create_file_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CreateFile", xfdesktop_file_manager_proxy_create_file_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_parent_directory, G_TYPE_STRING, IN_content_type, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
static
#ifdef G_HAVE_INLINE
inline
#endif
gboolean
xfdesktop_file_manager_proxy_create_file_from_template (DBusGProxy *proxy, const char * IN_parent_directory, const char * IN_template_uri, const char * IN_display, const char * IN_startup_id, GError **error)

{
  return dbus_g_proxy_call (proxy, "CreateFileFromTemplate", error, G_TYPE_STRING, IN_parent_directory, G_TYPE_STRING, IN_template_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID, G_TYPE_INVALID);
}

typedef void (*xfdesktop_file_manager_proxy_create_file_from_template_reply) (DBusGProxy *proxy, GError *error, gpointer userdata);

static void
xfdesktop_file_manager_proxy_create_file_from_template_async_callback (DBusGProxy *proxy, DBusGProxyCall *call, void *user_data)
{
  DBusGAsyncData *data = (DBusGAsyncData*) user_data;
  GError *error = NULL;
  dbus_g_proxy_end_call (proxy, call, &error, G_TYPE_INVALID);
  (*(xfdesktop_file_manager_proxy_create_file_from_template_reply)data->cb) (proxy, error, data->userdata);
  return;
}

static
#ifdef G_HAVE_INLINE
inline
#endif
DBusGProxyCall*
xfdesktop_file_manager_proxy_create_file_from_template_async (DBusGProxy *proxy, const char * IN_parent_directory, const char * IN_template_uri, const char * IN_display, const char * IN_startup_id, xfdesktop_file_manager_proxy_create_file_from_template_reply callback, gpointer userdata)

{
  DBusGAsyncData *stuff;
  stuff = g_slice_new (DBusGAsyncData);
  stuff->cb = G_CALLBACK (callback);
  stuff->userdata = userdata;
  return dbus_g_proxy_begin_call (proxy, "CreateFileFromTemplate", xfdesktop_file_manager_proxy_create_file_from_template_async_callback, stuff, _dbus_glib_async_data_free, G_TYPE_STRING, IN_parent_directory, G_TYPE_STRING, IN_template_uri, G_TYPE_STRING, IN_display, G_TYPE_STRING, IN_startup_id, G_TYPE_INVALID);
}
#endif /* defined DBUS_GLIB_CLIENT_WRAPPERS_xfdesktop_file_manager_proxy */

G_END_DECLS
