//
//  DetailViewController.h
//  Animal Farm Sounds
//
//  Created by Freddy Rademeyer on 2014/08/28.
//  Copyright (c) 2014 Freddy Rademeyer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
