//
//  PMCustomKeyboard.h
//  PunjabiKeyboard
//
//  Created by Kulpreet Chilana on 7/31/12.
//  Copyright (c) 2012 Kulpreet Chilana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#define kFont [UIFont fontWithName:@"Tamil MN" size:20]
#define kAltLabel @"123"
#define kReturnLabel @"Enter"
#define kSpaceLabel @"space"
#define kChar @[ @"ௌ", @"ை", @"ா", @"ீ", @"ூ", @"ப", @"ஹ", @"க", @"த", @"ஜ", @"ட", @"ஞ", @"ோ", @"ே", @"்", @"ி", @"ு", @"ப", @"ர", @"க", @"த", @"ச", @"ட", @"ஓ", @"ம", @"ந", @"வ", @"ல", @"ஸ", @"ய" ]
#define kChar_shift @[ @"ஔ", @"ஐ", @"ஆ", @"ஈ", @"ஊ", @"ப", @"ங", @"க", @"த", @"ச", @"ட", @"ஞ", @"ஓ", @"ஏ", @"அ", @"இ", @"உ", @"ப", @"ற", @"க", @"த", @"ச", @"ட", @"எ", @"ண", @"ன", @"ழ", @"ள", @"ஷ",@"ஶ்ரீ" ]
#define kChar_alt @[ @"1", @"2", @"3", @"4", @"5", @"6", @"7", @"8", @"9", @"0", @"~", @"-", @"/", @":", @";", @"(", @")", @"$", @"₹", @"&", @"@", @"\"", @"<", @">", @"[", @"]", @".", @",", @"?", @"!" ]

@interface PMCustomKeyboard : UIView <UIInputViewAudioFeedback>

@property (strong, nonatomic) IBOutlet UIImageView *keyboardBackground;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *characterKeys;
@property (strong, nonatomic) IBOutlet UIButton *shiftButton;
@property (strong, nonatomic) IBOutlet UIButton *altButton;
@property (strong, nonatomic) IBOutlet UIButton *returnButton;
@property (strong, nonatomic) IBOutlet UIButton *deleteButton;
@property (strong) id<UITextInput> textView;
@property (strong, nonatomic) IBOutlet UIButton *spaceButton;

- (IBAction)returnPressed:(id)sender;
- (IBAction)characterPressed:(id)sender;
- (IBAction)shiftPressed:(id)sender;
- (IBAction)altPressed:(id)sender;
- (IBAction)deletePressed:(id)sender;
- (IBAction)unShift;
- (IBAction)spacePressed:(id)sender;

@end
