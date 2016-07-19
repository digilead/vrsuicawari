//
//  InterfaceController.m
//  watch Extension
//
//  Created by 大浦 on 2016/07/12.
//
//

#import "InterfaceController.h"
#import <CoreMotion/CoreMotion.h>
#import <WatchConnectivity/WatchConnectivity.h>

@interface InterfaceController() <WCSessionDelegate>
@property (strong, nonatomic) CMMotionManager *motionManager;

@property NSMutableDictionary *dic;
@property BOOL bSend;

@end


@implementation InterfaceController

- (void)awakeWithContext:(id)context {
    [super awakeWithContext:context];

    _motionManager = [[CMMotionManager alloc] init];
    _dic = [NSMutableDictionary dictionary];
    _bSend = YES;
    
    if ([WCSession isSupported]) {
        WCSession *session = [WCSession defaultSession];
        session.delegate = self;
        [session activateSession];
    }
}

- (void)willActivate {
    [super willActivate];
    
    if (self.motionManager.accelerometerAvailable)
    {
        // センサーの更新間隔の指定
        self.motionManager.accelerometerUpdateInterval = 1 / 30;
        
        // ハンドラを指定
        CMAccelerometerHandler handler = ^(CMAccelerometerData *data, NSError *error)
        {
            // 位置を更新
            float x = data.acceleration.x;
            float y = data.acceleration.y;
            float z = data.acceleration.z;
            
            float synthetic = (x * x) + (y * y) + (z * z);
            //NSLog(@"%0.3f",synthetic);
            
            if( synthetic > 2 ) {
                [_dic setObject:[NSNumber numberWithInt:synthetic] forKey:@"Accel"];
                [self sendAccel];
            }
        };
        
        // 加速度の取得開始
        [self.motionManager startAccelerometerUpdatesToQueue:[NSOperationQueue currentQueue] withHandler:handler];
    }
    
//    if (self.motionManager.gyroAvailable)
//    {
//        self.motionManager.gyroUpdateInterval = 1;
//        
//        // ジャイロの取得開始
//        [self.motionManager startGyroUpdatesToQueue:[NSOperationQueue currentQueue] withHandler:handler];
//    }
}

-(void)sendAccel
{
    if( _bSend ) {
        _bSend = NO;
        if ([[WCSession defaultSession] isReachable])
        {
            [[WCSession defaultSession] sendMessage:_dic
                                       replyHandler:^(NSDictionary *replyHandler) {
                                           _bSend = YES;
                                       }
                                       errorHandler:nil];
        }
    }
}

- (void)didDeactivate {
    // This method is called when watch view controller is no longer visible
    [super didDeactivate];
}

@end



