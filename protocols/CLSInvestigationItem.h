/* Generated by RuntimeBrowser.
 */

@protocol CLSInvestigationItem <NSObject>

@required

+ (NSDictionary *)contextForItems:(NSArray *)arg1;

- (double)clsContentScore;
- (NSDate *)clsDate;
- (NSData *)clsDistanceIdentity;
- (CLLocation *)clsLocation;
- (NSArray *)clsPeopleNames;
- (int)clsPlayCount;
- (NSSet *)clsSceneClassifications;
- (int)clsShareCount;
- (NSArray *)clsUnprefetchedPeopleNames;
- (int)clsViewCount;
- (struct CGImage { }*)createThumbnailWithResolution:(unsigned int)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3;
- (NSDate *)date;
- (NSDateComponents *)dateComponents;
- (BOOL)isFavorite;
- (BOOL)isScreenshot;
- (BOOL)isUtility;
- (NSDate *)localDate;
- (CLLocation *)location;
- (NSArray *)peopleNames;
- (double)scoreWithContext:(NSDictionary *)arg1;
- (NSDate *)universalDate;

@end