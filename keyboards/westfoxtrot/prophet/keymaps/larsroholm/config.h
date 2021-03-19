#define TAPPING_TERM 200 // How long before a tap becomes a hold, if set above 500, a key tapped during the tapping term will turn it into a hold too.
#define PERMISSIVE_HOLD // Makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn't hit the TAPPING_TERM.
#define TAPPING_FORCE_HOLD // Makes it possible to use a dual role key as modifier shortly after having been tapped. Breaks any Tap Toggle functionality (TT or the One Shot Tap Toggle).
#define USB_POLLING_INTERVAL_MS 1 // 1000 Hz polling rate.