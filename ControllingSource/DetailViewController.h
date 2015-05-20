//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Ganesan Soundaiyan on 5/20/15.
//  Copyright (c) 2015 adeptpros. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

