//
//  UserMessageCell.h
//  TwitterFon
//
//  Created by kaz on 8/20/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Message.h"

@interface LoadCell : UITableViewCell {
    UILabel*                    label;
    UIActivityIndicatorView*    spinner;
}

@property (nonatomic, readonly) UIActivityIndicatorView* spinner;

- (void)setType:(MessageType)type;

@end
