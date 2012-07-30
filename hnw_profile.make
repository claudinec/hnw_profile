; ----------------
; Generated makefile from http://drushmake.me
; Permanent URL: http://drushmake.me/file.php?token=1d453d721792
; ----------------
;
; This is a working makefile - try it! Any line starting with a `;` is a comment.
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 7.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7

  
  
; Modules
; --------
projects[backup_migrate][subdir] = "contrib"
projects[boxes][subdir] = "contrib"
projects[custom_formatters][subdir] = "contrib"
projects[ctools][version] = 1.0
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[context][version] = 3.0-beta2
projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[devel][version] = 1.2
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[features][version] = 1.0-rc1
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[diff][version] = 2.0
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[ds][version] = 1.5
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"
projects[libraries][version] = 1.0
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[strongarm][version] = 2.0-rc1
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[views][version] = 3.3
projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[omega_tools][subdir] = "contrib"
projects[module_filter][subdir] = "contrib"

; Download a specific Git commit as Features exportability has been committed
; but no stable build has been released.
projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "3e7568e8b8ed077caadcac4dfa147fb394b0b041"
projects[wysiwyg][subdir] = "contrib"

  

; Themes
; --------
projects[] = omega
projects[] = rubik
projects[] = tao

  
  
; Libraries
; ---------
libraries[tinymce][type] = "libraries"
libraries[tinymce][download][type] = "file"
libraries[tinymce][download][url] = "http://www.tinymce.com/track.php?url=http%3A%2F%2Fgithub.com%2Fdownloads%2Ftinymce%2Ftinymce%2Ftinymce_3.5.zip"
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[profiler][type] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta1.tar.gz"
libraries[editarea][type] = "libraries"
libraries[editarea][download][type] = "file"
libraries[editarea][download][url] = "http://downloads.sourceforge.net/project/editarea/EditArea/EditArea%200.8.2/editarea_0_8_2.zip"
libraries[jquery.cycle][type] = "libraries"
libraries[jquery.cycle][download][type] = "file"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"

