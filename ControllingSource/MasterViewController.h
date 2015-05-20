//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Ganesan Soundaiyan on 5/20/15.
//  Copyright (c) 2015 adeptpros. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

