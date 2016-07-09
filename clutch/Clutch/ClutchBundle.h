//
//  ClutchBundle.h
//  Clutch
//
//  Created by Anton Titkov on 10.02.15.
//
//

#import <Foundation/Foundation.h>
#import "Binary.h"

@class Application;

@interface ClutchBundle : NSBundle
{
    @public
    NSOperationQueue *_dumpQueue;
}

@property ClutchBundle *parentBundle;
@property (readonly) NSString *workingPath;
@property (readonly) NSString *zipFilename;
@property (readonly) NSString *zipPrefix;
@property (readonly) NSURL *enumURL;
@property (readonly) NSURL *bundleContainerURL;
@property (readonly) Binary *executable;

@property (readonly) NSString* displayName;

- (instancetype)initWithBundleInfo:(NSDictionary *)info;
- (void)dumpToDirectoryURL:(NSURL *)directoryURL;
- (void)prepareForDump;

@end
