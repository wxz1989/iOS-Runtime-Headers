/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString;

@interface GKAchievementInternal : GKInternalRepresentation {
    NSString *_identifier;
    NSDate *_lastReportedDate;
    double _percentComplete;
}

@property(retain) NSString * identifier;
@property(retain) NSDate * lastReportedDate;
@property double percentComplete;

+ (id)codedPropertyKeys;

- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)lastReportedDate;
- (double)percentComplete;
- (void)setIdentifier:(id)arg1;
- (void)setLastReportedDate:(id)arg1;
- (void)setPercentComplete:(double)arg1;

@end