//
//  DetailViewController.h
//  meetupdemotest
//
//  Created by Daniel Rector on 9/27/15.
//  Copyright (c) 2015 Daniel Rector. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
