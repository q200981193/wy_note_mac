//
//  HAAppDelegate.h
//  NeverNote2
//
//  Created by wcrane on 9/11/12.
//  Copyright (c) 2012 HappyApp小分队. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "HALoginViewController.h"

@class HANoteEngine;
@class HANoteBook;

@class HANoteBooksViewController;
@class HANotesViewController;
@class HASingleNoteViewController;

@interface HAAppDelegate : NSObject <NSApplicationDelegate, NSToolbarDelegate, NSPopoverDelegate, HALoginViewDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSSplitView *mainSplitView;
@property (assign) IBOutlet NSSplitView *contentSplitView;

@property (nonatomic, retain) HANoteEngine *engine;
@property (nonatomic, assign) HALoginViewController *loginCtrl;
@property (nonatomic, assign) NSPopover *popover;

@property (nonatomic, retain) HANoteBooksViewController *noteBooksCtrl;
@property (nonatomic, retain) HANotesViewController *notesCtrl;
@property (nonatomic, retain) HASingleNoteViewController *singleNoteCtrl;

- (void)showNoteBook:(HANoteBook *)notebook;
@end
