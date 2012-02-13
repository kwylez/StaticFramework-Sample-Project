## Description
Test Xcode Project for building a universal framework, as well as, a static framework.  Included in this project are:
* Static library project that when built will also create a universal framework
* Sample implementation projects to show the setup/usage for the static library and the universal framework

The project and target settings are configuration based so you shouldn't have to modify the settings from the info pane

### Overview
It is evolutionary, not revolutionary, for most iOS developers to go from copying the same set of "library" files from project to project, to creating a static library which is then shared between projects to finally creating a universal framework.  From my humble point of view the universal framework is the ideal solution because it gives you the ability to just hand off a single framework (which is really a directory), which keeps code implementation hidden, and still have access to a static library that can be edited and shared within a shared workspace.

#### Reference Blog Post
[Creating a Universal iOS Framework Sample Project](http://blog.corywiles.com/creating-a-universal-ios-framework-sample-pro)

