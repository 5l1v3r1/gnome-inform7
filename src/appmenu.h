/* Copyright 2007 P. F. Chimento
 * This file is part of GNOME Inform 7.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */
 
#ifndef _APPMENU_H
#define _APPMENU_H

#include <gnome.h>

#if !GTK_CHECK_VERSION(2,10,0)
# define SUCKY_GNOME 1
#endif

void
on_new_activate                        (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_open_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

#ifndef SUCKY_GNOME
void
on_open_recent_activate                (GtkRecentChooser *chooser,
                                        gpointer         user_data);
#else
void
on_open_recent_activate                (GtkFileChooser  *menuitem,
                                        gpointer         user_data);
#endif

void
on_install_extension_activate          (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_open_extension_activate             (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_close_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_save_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_save_as_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_revert_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_quit_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_undo_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_redo_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_cut_activate                        (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_copy_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_paste_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_select_all_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_find_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_autocheck_spelling_activate         (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_check_spelling_activate             (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_preferences_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_shift_selection_right_activate      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_shift_selection_left_activate       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_renumber_all_sections_activate      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_refresh_index_activate              (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_go_activate                         (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_replay_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_stop_activate                       (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_release_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_save_debug_build_activate           (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_inspectors_activate            (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_source_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_errors_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_index_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_skein_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_transcript_activate            (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_game_activate                  (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_documentation_activate         (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_settings_activate              (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_switch_sides_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_actions_activate               (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_contents_activate              (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_kinds_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_phrasebook_activate            (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_rules_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_scenes_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_show_world_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_next_sub_panel_activate             (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_inform_help_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_gnome_notes_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_license_activate                    (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_help_extensions_activate            (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_recipe_book_activate                (GtkMenuItem     *menuitem,
                                        gpointer         user_data);

void
on_about_activate                      (GtkMenuItem     *menuitem,
                                        gpointer         user_data);


#endif