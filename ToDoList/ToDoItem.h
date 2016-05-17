//
//  ToDoItem.h
//  ToDoList
//
//  Created by Jayaprakash Jayakumar on 5/16/16.
//  Copyright © 2016 Jayaprakash Jayakumar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ToDoItem : NSManagedObject
@property NSString *itemName;
@property BOOL completed;
@property NSDate *creationDate;
@end
