@import Foundation;
@import CoreData;

@protocol PersistentStackDelegate
@optional
- (void)ubiquitousStoreObjectDidChange:(NSManagedObjectID*)object;
@end

@interface PersistentStack : NSObject

- (id)initWithStoreURL:(NSURL *)storeURL modelURL:(NSURL *)modelURL;

@property (nonatomic,strong,readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic,weak) NSObject <PersistentStackDelegate> *delegate;
@end