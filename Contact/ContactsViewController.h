//
//  ContactsViewController.h
//  Contact
//
//  Created by CPU11808 on 2/15/17.
//  Copyright © 2017 CPU11808. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSContact.h"

@interface ContactsViewController : UITableViewController

@property (strong, atomic) NSMutableArray *contacts;

@end