/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackIntent : NSObject {
    int  _artworkSource;
    <NSSecureCoding> * _artworkToken;
    int  _kind;
    NSString * _playActivityFeatureName;
    NSData * _playActivityRecommendationData;
    <MPCPlaybackIntentDataSource> * _resolvedTracklistDataSource;
    int  _shuffleMode;
    NSString * _title;
    int  _tracklistSource;
    <NSSecureCoding> * _tracklistToken;
}

@property (nonatomic) int artworkSource;
@property (nonatomic, retain) <NSSecureCoding> *artworkToken;
@property (nonatomic) int kind;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic) int shuffleMode;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) <MPCPlaybackIntentDataSource> *tracklistDataSource;
@property (nonatomic) int tracklistSource;
@property (nonatomic, retain) <NSSecureCoding> *tracklistToken;

+ (id)tracklistDataSourceForSource:(int)arg1;

- (void).cxx_destruct;
- (id)_legacyRepresentationForPlayer:(id)arg1;
- (id)artworkCatalog;
- (int)artworkSource;
- (id)artworkToken;
- (void)configureContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (int)kind;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (void)populateItemsForContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setArtworkSource:(int)arg1;
- (void)setArtworkToken:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTracklistSource:(int)arg1;
- (void)setTracklistToken:(id)arg1;
- (int)shuffleMode;
- (id)title;
- (id)tracklistDataSource;
- (int)tracklistSource;
- (id)tracklistToken;

@end