/******************************************************************************
 * Copyright (c) 2010-2012 Transmission authors and contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

#import "InfoViewController.h"

@interface InfoOptionsViewController : NSViewController<InfoViewController>
{
    NSArray* fTorrents;

    BOOL fSet;

    IBOutlet NSPopUpButton* fPriorityPopUp;
    IBOutlet NSPopUpButton* fRatioPopUp;
    IBOutlet NSPopUpButton* fSequentialCheck;
    IBOutlet NSPopUpButton* fIdlePopUp;
    IBOutlet NSButton* fUploadLimitCheck;
    IBOutlet NSButton* fDownloadLimitCheck;
    IBOutlet NSButton* fGlobalLimitCheck;
    IBOutlet NSButton* fRemoveSeedingCompleteCheck;
    IBOutlet NSTextField* fUploadLimitField;
    IBOutlet NSTextField* fDownloadLimitField;
    IBOutlet NSTextField* fRatioLimitField;
    IBOutlet NSTextField* fIdleLimitField;
    IBOutlet NSTextField* fUploadLimitLabel;
    IBOutlet NSTextField* fDownloadLimitLabel;
    IBOutlet NSTextField* fIdleLimitLabel;
    IBOutlet NSTextField* fRatioLimitGlobalLabel;
    IBOutlet NSTextField* fIdleLimitGlobalLabel;
    IBOutlet NSTextField* fPeersConnectLabel;
    IBOutlet NSTextField* fPeersConnectField;

    //remove when we switch to auto layout on 10.7
    IBOutlet NSTextField* fTransferBandwidthSectionLabel;
    IBOutlet NSTextField* fPrioritySectionLabel;
    IBOutlet NSTextField* fPriorityLabel;
    IBOutlet NSTextField* fSeedingLimitsSectionLabel;
    IBOutlet NSTextField* fRatioLabel;
    IBOutlet NSTextField* fInactivityLabel;
    IBOutlet NSTextField* fAdvancedSectionLabel;
    IBOutlet NSTextField* fMaxConnectionsLabel;

    NSString* fInitialString;
}

- (void)setInfoForTorrents:(NSArray*)torrents;
- (void)updateInfo;
- (void)updateOptions;

- (IBAction)setUseSpeedLimit:(id)sender;
- (IBAction)setSpeedLimit:(id)sender;
- (IBAction)setUseGlobalSpeedLimit:(id)sender;

- (IBAction)setRatioSetting:(id)sender;
- (IBAction)setRatioLimit:(id)sender;

- (IBAction)setIdleSetting:(id)sender;
- (IBAction)setIdleLimit:(id)sender;

- (IBAction)setRemoveWhenSeedingCompletes:(id)sender;

- (IBAction)setPriority:(id)sender;

- (IBAction)setPeersConnectLimit:(id)sender;

- (IBAction) setSequential: (id) sender;

@end
