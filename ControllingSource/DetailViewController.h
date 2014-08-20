//
//  DetailViewController.h
//  ControllingSource
//
//  Created by andy on 8/20/14.
//  Copyright (c) 2014 andy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

