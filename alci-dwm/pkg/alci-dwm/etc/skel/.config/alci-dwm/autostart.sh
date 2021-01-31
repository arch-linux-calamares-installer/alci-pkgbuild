#!/bin/bash

function run {
 if ! pgrep $1 ;
  then
    $@&
  fi
}
run "dex /etc/xdg/autostart/calamares.desktop"
sxhkd -c ~/.config/alci-dwm/sxhkd/sxhkdrc &
