<?

$prefnames = array(
	// indicates the user wants to hide content that is not safe for work
	"hide_nsfw",
	// indicates the user wants to hide content that might be offensive
	"hide_tmbo",
	// indicates the user wants to hid content that has been deemed by others as "bad"
	"hide_bad",
	
	// sorting for discussions
	"sortorder_discussions",
	// sorting for yearbook
	"sortorder_yearbook",
	
	// type of frontpage, "thumbs" or blank
	"index",
	
	// indicates if the user wants to view thumbnails in comments
	"thumbnails_in_comments",
	
	// pickup id for images
	"ipickup",
	// and pickup id for topics
	"tpickup",
	// and pickup id for audio
	"apickup",
	// and pickup id for yearbook
	"ypickup",
	
	// key commands:
	// vote good
	"key_good",
	// vote bad
	"key_bad",
	// go to the next post in the stream
	"key_next",
	// go to the previous post in the stream
	"key_prev",
	// go to the index
	"key_index",
	// go to the comments for this upload
	"key_comments",
	// open the quick reply window
	"key_quick",
	// random image jump
	"key_random",
	// subscription toggle
	"key_subscribe",
	// image resize toggle
	"key_image_toggle"
);

$prefdefaults = array(
	"index" => "main",
	"sortorder_discussions" => "date_desc",
	"thumbnails_in_comments" => "1"
);

?>