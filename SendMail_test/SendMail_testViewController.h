//
//  SendMail_testViewController.h
//  SendMail_test
//
//  Created by TopTier on 10/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface SendMail_testViewController : UIViewController<MFMailComposeViewControllerDelegate> 
{
    IBOutlet UILabel *message;
}

@property (nonatomic, retain) IBOutlet UILabel *message;

-(IBAction)showPicker:(id)sender;
-(void)displayComposerSheet;
-(void)launchMailAppOnDevice;

@end
