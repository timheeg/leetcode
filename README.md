# leetcode

Solutions from various leetcode questions.

## DevContainer

### Build Container

In vscode, `Ctrl + Shift + P` and select "Dev Containers: Rebuild Container"

## RHEL container subscription

The container uses the RHEL8 UBI image.

In order to setup RHEL8 repos for `dnf install` you must register your RHEL
subscription.

Use activation keys from subscription account
<https://access.redhat.com/management/activation_keys>

> ⚠️ Caution - This is currently done inside the container instance. Don't
distribute your container instance unless you want to make your RHEL8 activation
key public for everyone. 😉

## Usage

From the terminal command line,

```bash
cmake --preset x64-linux-gcc-static-release
cmake --build --preset x64-linux-gcc-static-release
```

## Vcpkg

This uses vcpkg dependency manager. It currently does not use binary caching, so
all dependencies will be built from source when the container is rebuilt.

## Structure

Each solution is a library target. Each test is an executable target that links
the solution.
