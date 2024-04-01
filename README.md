# Anti-Suspend

Anti-Suspend is a tool designed to detect x64dbg detaching, thread suspension, and perform other related functions. 

## How it Works

The tool creates a dummy thread that triggers when suspended or when the file is suspended. It utilizes `DebugActiveProcessStop` to stop debugging of a process previously attached to a debugger or utilized by a program for suspension. After that, it pushes the suspension limits to max. then at the end, it checks if the thread can be suspended. If the return does not equal `(DWORD)-1`, it shows either suspension or previous attachment of a debugger.

## Usage

To integrate Anti-Suspend into your project, simply include the provided code snippets into your existing code.

## Demo

[Watch the Anti-Suspend Demo](https://github.com/byte2mov/Anti-Suspend/assets/146471523/e635efd9-061c-452a-be26-8e94940b72d1.mp4)

## Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/byte2mov/anti-Suspend.git
```
