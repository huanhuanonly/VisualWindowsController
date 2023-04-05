# VisualWindowsController (with GUI)
Visual `capture` window information and `control` window

##### Based on `Win32 API`.

## Select a window to start
* Use Dynamic
  * Select the characteristics of the window and automatically update the currently selected window at regular intervals
  * The default time is 20 milliseconds
  * Change the value of `"Hwnd-UpdateInterval"` to change this refresh rate
* Use Static
  * If you already know the handle of the window, you can directly enter it in the `"Current HWND"` bar
  * If you enter an invalid window handle, VWC will not be able to obtain the correct window information
  * To avoid the above issues, you can directly select this current window by clicking in the `window list`

> Button<img src="https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/lockInfo.svg" width="50px">: Lock refresh of current information (hotkey `Ctrl+L` Non-global)<br>
> Button<img src="https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/lockHwnd.svg" width="50px">: Lock refresh of current hwnd (hotkey `Ctrl+W` Non-global)<br>
> Button<img src="https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/saveInfo.svg" width="50px">: Save all information to clipboard (hotkey `Ctrl+S` Non-global)<br>

![pageSelect](https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/readme/select.png)

## Display and change the basic information of the window
* When editing window information, this information will not be refreshed, and the refresh will resume when the input focus of the widget is canceled
* In the `"Style"` bar, you can click to change whether the style property is enabled. `1 is enabled`, `0 is not enabled`
  * If it is a predefined style attribute, hovering over the mouse will display the corresponding description (description from MSDN document)
  * For system widget, additional styles will be used (e.g. class of window is `"Button"`)
  * Undefined styles are used by window developers

##### *Style see also https://learn.microsoft.com/en-us/windows/win32/winmsg/window-styles*
##### *StyleEx see also https://learn.microsoft.com/en-us/windows/win32/winmsg/extended-window-styles*
##### *Class Style see also https://learn.microsoft.com/en-us/windows/win32/winmsg/window-class-styles*

> Warning: Please do not use the slider in `"RECT"` to change the size and position of your own window
>> Because the width of the slider adapts to the window size

![pageWindow](https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/readme/window.png)

## Displays basic information about the process to which the current window belongs
* Use the `"Open Explorer"` button to open the `explorer` and `select this file`

![pageProcess](https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/readme/process.png)

## Display `cursor` and `window images`
* Window Image
  * The image comes from current window and will not be obscured by other windows
  * This method can only obtain images of ordinary windows, and windows rendered using `D3D` will display a black screen
* Screen Image
  * In order to solve the above problems, a method of screen image is provided
  * The window image obtained by this method will be blocked by other windows
  * Note: Using this method will perform more processing on the image
* Color Circle
  * The color circle consists of four parts
  * The innermost circle uses the color of the `current cursor point`
  * The remaining three rectangles are `RGB`, the `color depth` is `alpha`
  * Use the `"Save Image"` button to save the image of the current frame

![pageCursor](https://github.com/lrHuanhuan/VisualWindowsController/blob/main/Resource/readme/cursor.png)

```PHP
Author: YangHuanhuan
Created on 2023/3/19, 22:12:00

Copyright (c) 2023 YangHuanhuan 3347484963@qq.com. All rights reserved.

--The end--
```
