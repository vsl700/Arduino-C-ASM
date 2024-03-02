# Arduino-C-ASM
A sample project template that let's you write code in both C and Assembly, compile it and upload the compiled binary to your Arduino board. The project simply makes
the Arduino LED connected with PIN 13 blink.

> [!NOTE]
> The project's build scripts and the setup steps provided below only work under Linux!
## Workspace setup
Before you can build the project and upload the compiled code to your Arduino, you have to execute the following commands first:

Update your package list (it depends on what your Package Manager is):
```
sudo apt update
```

Install the necessary packages for working with Arduino boards:
```
sudo apt install arduino-core
```

Add your user to the 'dialout' group so that you can access the serial port when uploading your code to the Arduino (replace `$USER` with your user name in your 
Linux machine):
```
sudo usermod -a -G dialout $USER
```

Reboot your system for the changes to take effect:
```
sudo reboot
```

Now you should be able to connect your Arduino with the Linux machine and upload code to it. Now it's time to set up the project!

## Project setup
First, let's make sure the Arduino board is recognized to the Linux machine! Run the following command:
```
lsusb
```

If you see your Arduino's name in the result list from that command, you're good to proceed to the next step!
Now you have to find out where the Arduino board is connected! Run the following command to find out:
```
ls /dev/tty*
```

After executing this command you should see all connected devices which names start with `tty`. The Arduino device name should either start with `ttyACM` or `ttyUSB`.
In the `build.sh` script, find the `avrdude` command and replace `/dev/ttyACM0` with the appropriate device name. And that's it!
