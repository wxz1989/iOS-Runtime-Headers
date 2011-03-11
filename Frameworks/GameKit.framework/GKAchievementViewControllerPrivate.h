/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTableViewCell, NSArray, GKGame, NSMutableArray, NSMutableDictionary;

@interface GKAchievementViewControllerPrivate : GKTableViewController  {
    GKGame *_game;
    NSMutableArray *_achievements;
    unsigned int _numberOfAchievementsAchieved;
    unsigned int _pointsTally;
    struct { 
        unsigned int playButtonVisible : 1; 
        unsigned int usePlayerBackground : 1; 
        unsigned int translucentNavBar : 1; 
        unsigned int reserved : 27; 
    } _flags;
    NSMutableDictionary *_tokenImageCache;
    NSMutableDictionary *_progressImageCache;
    GKTableViewCell *_detailHeaderCell;
    BOOL _isInFormSheet;
}

@property(getter=isPlayButtonVisible) BOOL playButtonVisible;
@property BOOL isInFormSheet;
@property(retain) GKTableViewCell * detailHeaderCell;
@property(retain) NSMutableDictionary * progressImageCache;
@property(retain) NSMutableDictionary * tokenImageCache;
@property unsigned int pointsTally;
@property unsigned int numberOfAchievementsAchieved;
@property(retain) NSArray * achievements;
@property(retain) GKGame * game;


- (unsigned int)numberOfAchievementsAchieved;
- (id)initWithGame:(id)arg1 withFriend:(id)arg2;
- (void)_gkRefreshContents;
- (void)addNonAchievedAchievementsTo:(id)arg1 withAchievementDescription:(id)arg2;
- (unsigned int)pointsTally;
- (id)tokenImageCache;
- (id)progressImageCache;
- (id)detailHeaderCell;
- (BOOL)isPlayButtonVisible;
- (void)setPlayButtonVisible:(BOOL)arg1;
- (void)localPlayerDidAuthenticate:(id)arg1;
- (void)updateStatusWithError:(id)arg1;
- (void)updatePlayerGameAchievements:(id)arg1;
- (id)imageForPercentAchieved:(int)arg1 withCompletionHandler:(id)arg2;
- (id)tokenImageForAchievement:(id)arg1 image:(id)arg2 withCompletionHandler:(id)arg3;
- (void)setProgressImageCache:(id)arg1;
- (void)setTokenImageCache:(id)arg1;
- (void)setPointsTally:(unsigned int)arg1;
- (void)setNumberOfAchievementsAchieved:(unsigned int)arg1;
- (void)setAchievements:(id)arg1;
- (id)achievements;
- (id)game;
- (id)initWithGame:(id)arg1;
- (void)playTapped;
- (BOOL)isInFormSheet;
- (void)setIsInFormSheet:(BOOL)arg1;
- (void)setDetailHeaderCell:(id)arg1;
- (void)setGame:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidUnload;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)marginForTableView:(id)arg1;
- (id)title;
- (void)dealloc;
- (void)reloadView;

@end