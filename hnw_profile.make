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
projects[addressfield][version] = 1.0-beta3
projects[addressfield][type] = "module"
projects[addressfield][subdir] = "contrib"
projects[admin_menu][version] = 3.0-rc3
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"
projects[apachesolr][version] = 1.0-rc2
projects[apachesolr][type] = "module"
projects[apachesolr][subdir] = "contrib"
projects[apachesolr_views][version] = 1.0-beta1
projects[apachesolr_views][type] = "module"
projects[apachesolr_views][subdir] = "contrib"
projects[backup_migrate][subdir] = "contrib"
projects[boxes][subdir] = "contrib"
projects[context][version] = 3.0-beta2
projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[ctools][version] = 1.1
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[custom_formatters][subdir] = "contrib"
projects[date][version] = 2.5
projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[devel][version] = 1.2
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[diff][version] = 2.0
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[domain][version] = 3.4
projects[domain][type] = "module"
projects[domain][subdir] = "contrib"
projects[domaincontext][version] = 1.0-alpha1
projects[domaincontext][type] = "module"
projects[domaincontext][subdir] = "contrib"
projects[domaincontext][patch][] = "http://drupal.org/files/1542406-5-domain-machine-names.patch"
projects[ds][version] = 2.0-beta2
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[facetapi][version] = 1.1
projects[facetapi][type] = "module"
projects[facetapi][subdir] = "contrib"
projects[facetapi_bonus][version] = 1.1
projects[facetapi_bonus][type] = "module"
projects[facetapi_bonus][subdir] = "contrib"
projects[features][version] = 1.0
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[libraries][version] = 1.0
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[link][version] = 1.0
projects[link][type] = "module"
projects[link][subdir] = "contrib"
projects[media][version] = 1.2
projects[media][type] = module
projects[media][subdir] = contrib
projects[media_youtube][version] = 1.0-beta3
projects[media_youtube][type] = module
projects[media_youtube][subdir] = contrib
projects[module_filter][subdir] = "contrib"
projects[mollom][version] = 2.1
projects[mollom][type] = "module"
projects[mollom][subdir] = "contrib"
projects[omega_tools][subdir] = "contrib"
projects[panels][version]= 3.2
projects[panels][type] = "module"
projects[panels][subdir] = "contrib"
projects[search_api][version] = 1.2
projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"
projects[strongarm][version] = 2.0-rc1
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"
projects[taxonomy_menu][version] = 1.3
projects[taxonomy_menu][type] = "module"
projects[taxonomy_menu][subdir] = "contrib"
projects[taxonomy_menu_trails][version] = 2.3
projects[taxonomy_menu_trails][type] = "module"
projects[taxonomy_menu_trails][subdir] = "contrib"
projects[themekey][version] = 2.3
projects[themekey][type] = "module"
projects[themekey][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[uuid][version] = 1.0-alpha3
projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"
projects[views][version] = 3.3
projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[webform][version] = 4.0-alpha4
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

; Download a specific Git commit as Features exportability has been committed
; but no stable build has been released.

projects[conditional_fields][type] = "module"
projects[conditional_fields][download][type] = "git"
projects[conditional_fields][download][url] = "http://git.drupal.org/project/conditional_fields.git"
projects[conditional_fields][download][revision] = "de8d798ffc3d976f1ad4302b7b0af086e825a26d"
projects[conditional_fields][subdir] = "contrib"

projects[wysiwyg][type] = "module"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "3e7568e8b8ed077caadcac4dfa147fb394b0b041"
projects[wysiwyg][subdir] = "contrib"

  

; Themes
; --------
projects[] = omega

  
  
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
