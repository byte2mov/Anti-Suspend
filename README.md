# Anti-Suspend

using this can both detect x64dbgs detaching, it detects thread suspension, and it does some other stuff which will be displayed below.

![Anti Suspend Demo](https://github.com/byte2mov/Anti-Suspend/assets/146471523/e11f7c62-70f8-4ad0-ae5a-15b0c14346ef)


## How it Works

Well the way it works is we create a dummy thread that when suspended (or the file gets suspended) and we use DebugActiveProcessStop to stop debugging a process that was previously attached to a debugger or in this case used by a program to suspend, 
after that we max out the limits of suspending, then we check if we can suspend the thread and if it does not equal "(DWORD)-1" then it means it was suspended or previously attached to a debugger.

## Usage

To use Anti-Suspend in your project, simply include the provided code snippets into your existing codebase.

## Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/byte2mov/anti-Suspend.git
