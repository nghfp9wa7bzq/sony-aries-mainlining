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
  
sony-aries-ml6.8.dts and sony-leo-ml6.8.dts  
These are concatenated .dts files, like the above two, but they are from the [(close to) current mainline kernel](https://github.com/TheOrangeCat/linux/tree/qcom-msm8974-6.8-wip-aries).

generated_dsi_files folder  
These are the panel files from the old repo.  
I took a panel-xxx.dtsi, edited it and used the [linux-mdss-dsi-panel-driver-generator](https://github.com/msm8916-mainline/linux-mdss-dsi-panel-driver-generator).  
dtc -I dts -O dtb -o panel-xxx.dtb panel-xxx.dtsi  
./lmdpdg.py --dumb-dcs panel-xxx.dtb  
NOTE that you need to install [libfdt](https://pypi.org/project/pylibfdt/).  
(My debian package for libfdt is too old...)  
Inside a folder you can find a modified .dtsi file, a from this file compiled .dtb file,  
and from the .dtb file compiled driver files. (may be multiple folders)  
  
I got errors for the following .dtsi files:  
dsi-panel-castor  
dsi-panel-orise-720p-video  
dsi-panel-sim-video  
dsi-v2-panel-hx8379a-wvga-video  
dsi-v2-panel-nt35590-720p-video  
dsi-v2-panel-otm8018b-fwvga-video  
dsi-v2-panel-truly-wvga-cmd  
dsi-v2-panel-truly-wvga-video  
  
Right now, these driver files are raw, they need license, comment and other info adjustments.  
They haven't been tested!  
  
# What works and what doesn't in mainline  
Parts of the CPU  
  * IOMMU - this is needed for many things, but there is no suitable driver for it.  
    For now, for the GPU to work, you need to put this into your kernel cmdline: `msm.vram=192m msm.allow_vram_carveout=1`.  
  
Buttons - tested with evtest, no action set for the events  
  
eMMC internal storage - works  
SD-Card - works  
  
Display  
  * Screen - does not work  
    * DSI bus  
    * Panel  
  * Touchpad - on my phone this is broken, so I can't test it.  
    Also, because the screen doesn't work, it isn't so easy to test...  
  * Backlight - does not work  
  * GPU - unknown  
  * HDMO out - no
  
Status / Notification LED - [tested](https://docs.kernel.org/leds/leds-class-multicolor.html) and works from cli  
Flash - no  
Torch - no  
  
Battery  
  * Charging - unknown  
  * Fuel gauge - to read out battery percentage - no  
  
Vibration motor - tested and works with fftest  
Sensors  
  * Magnetometer - unknown  
  * Gyroscope & Accelerometer - unknown  
  * Proximity & Light - unknown  
  
Front camera - unknown  
Rear camera - unknown  
Camera codecs - no  
  
WiFi - working with Fairblobs firmware, need to test newer firmware as well  
Bluetooth - unknown  
Modem - unknown  
NFC - unknown  
  
Sound / audio / pcm - no  
Other things found in old .dts:  
Ion, iommu, gdsc, rdbg, venus, crypto  
  
## License
For exact license information, please look at the given sources.
