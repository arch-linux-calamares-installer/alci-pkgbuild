#!/bin/bash
#https://wiki.archlinux.org/index.php/DeveloperWiki:Building_in_a_Clean_Chroot

destination1=$HOME"/DATA/EDU/nemesis_repo/x86_64/"

destiny=$destination1

# 2. makepkg"
# 1. chroot"

CHOICE=1
pwdpath=$(echo $PWD)
pwd=$(basename "$PWD")

#which packages are always going to be build with makepkg or choice 2
#makepkglist="arcolinux-dwm-slstatus-git arcolinux-dwm-st-git arcolinux-conky-collection-git arcolinux-conky-collection-plasma-git arco-dwm arcolinux-betterlockscreen arcolinux-lightdm-gtk-greeter arcolinux-lightdm-gtk-greeter-plasma arcolinux-logout-git arcolinux-logout-themes-git arcolinux-qobbar-git arcolinux-teamviewer arcolinux-tweak-tool-dev-git arcolinux-tweak-tool-git arco-dwm"

for i in $makepkglist
do
  if [[ "$pwd" == "$i" ]] ; then
  CHOICE=2
  fi
done

search1=$(basename "$PWD")
search2=arcolinux

search=$search1
rm -rf /tmp/tempbuild
if test -f "/tmp/tempbuild"; then
  rm /tmp/tempbuild
fi
mkdir /tmp/tempbuild
cp -r $pwdpath/* /tmp/tempbuild/

cd /tmp/tempbuild/

if [[ $CHOICE == "1" ]] ; then

  tput setaf 2
  echo "#############################################################################################"
  echo "#########        Let us build the package in CHROOT "$(basename `pwd`)
  echo "#############################################################################################"
  tput sgr0
  CHROOT=$HOME/Documents/chroot-data
  arch-nspawn $CHROOT/root pacman -Syu
  makechrootpkg -c -r $CHROOT

else

  tput setaf 3
  echo "#############################################################################################"
  echo "#########        Let us build the package with MAKEPKG "$(basename `pwd`)
  echo "#############################################################################################"
  tput sgr0
  makepkg
fi

echo "Moving created files to " $destiny
echo "#############################################################################################"
mv $search*pkg.tar.zst $destiny

echo "Cleaning up"
echo "#############################################################################################"
echo "deleting unnecessary folders"
echo "#############################################################################################"

if [[ -f $wpdpath/*.log ]]; then
  rm $pwdpath/*.log
fi
if [[ -f $wpdpath/*.deb ]]; then
  rm $pwdpath/*.deb
fi
if [[ -f $wpdpath/*.tar.gz ]]; then
  rm $pwdpath/*.tar.gz
fi

tput setaf 10
echo "#############################################################################################"
echo "###################                       build done                   ######################"
echo "#############################################################################################"
tput sgr0