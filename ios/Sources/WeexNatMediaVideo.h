//
//  WeexNatMediaVideo.h
//
//  Created by huangyake on 17/1/7.
//  Copyright © 2017 Instapp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@protocol NatMediaVideoPro <WXModuleProtocol>

- (void)play:(NSString *)path :(WXModuleCallback)callback;
- (void)pause:(WXModuleCallback)callback;
- (void)stop:(WXModuleCallback)callback;

@end

@interface WeexNatMediaVideo : NSObject<NatMediaVideoPro>
@end
