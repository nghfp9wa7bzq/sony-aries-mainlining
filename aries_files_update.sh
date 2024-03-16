#!/bin/bash

# copy the out of tree files for sony-aries into a pmbootstrap chroot env

# test first argument exists, and is a directory
if [ "$#" -eq 0 ] || [ ! -d "$1" ]
then
  echo "Please write pm work directory as first argument!"
  exit 1
fi

echo "pm work directory given as:"
echo "$1"
echo "NOTE: deleting old pmbootstrap files"

basepath="$1/cache_git/pmaports/device/testing"
myfile="$basepath/linux-sony-aries/config-sony-aries.armhf"

if [ -f "$myfile" ]
then
  echo "Found old kernel config file ($myfile), deleting..."
  rm "$myfile"
  echo "Copy new kernel config file"
  cp "$basepath/linux-postmarketos-qcom-msm8974/config-postmarketos-qcom-msm8974.armv7" "$basepath/linux-sony-aries/config-sony-aries.armv7"
else
  echo "old kernel config file ($myfile) not found"
fi

myfile="$basepath/linux-sony-aries/APKBUILD"

if [ -f "$myfile" ]
then
  echo "Found old kernel APKBUILD file ($myfile), deleting..."
  rm "$myfile"
  echo "Copy new kernel APKBUILD file"
  cp "./linuxapk.txt" "$myfile"
else
  echo "old kernel APKBUILD file ($myfile) not found"
fi

myfile="$basepath/device-sony-aries/APKBUILD"

if [ -f "$myfile" ]
then
  echo "Found old device APKBUILD file ($myfile), deleting..."
  rm "$myfile"
  echo "Copy new device APKBUILD file"
  cp "./deviceapk.txt" "$myfile"
else
  echo "old device APKBUILD file ($myfile) not found"
fi

myfile="$basepath/device-sony-aries/deviceinfo"

if [ -f "$myfile" ]
then
  echo "Found old device deviceinfo file ($myfile), deleting..."
  rm "$myfile"
  echo "Copy new device deviceinfo file"
  cp "./deviceinfo.txt" "$myfile"
else
  echo "old device deviceinfo file ($myfile) not found"
fi







