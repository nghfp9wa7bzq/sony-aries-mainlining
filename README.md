# sony-aries-mainlining
Various files to mainline the Sony Xperia Z3 Compact using postmarketOS

See postmarketOS [wiki](https://wiki.postmarketos.org/wiki/Main_Page) and [guides](https://wiki.postmarketos.org/wiki/Category:Guide).  
  
New, temporary [install guide](https://github.com/msm8974-mainline/linux/pull/14#issuecomment-1994750346).

aries_files_update.sh is a quick and qirty script to copy the above files to the correct pmos directories.  
Download the files, download this script into the same folder, execute script with a command line parameter,  
that is the pmos working directory.  
bash aries_files_update.sh /path/to/pmwd/  
  
sony-aries-old.dts  
This file is various .dts and .dtsi files copied together from a [LineageOS repository](https://github.com/LineageOS/android_kernel_sony_msm8974/tree/lineage-18.1/arch/arm/boot/dts).  
This should be based on old sony open source code, see [this](https://github.com/LineageOS/android_kernel_sony_msm8974/commit/dc5d11999f32b9900379f408b54cb698a963802f#diff-8d556f3ca8e724f52f6fc9cb683062145fe40d86c2a9e121abf3d4c0d9da8d76) commit.  
This should allow easy search across all the device .dts files.
  
sony-leo-old.dts  
Same as above, but for the Z3 (sony-leo).  
Only the last part is different.  
  
## License
For exact license information, please look at the given sources.
