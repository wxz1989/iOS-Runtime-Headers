/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UIView<SLSheetPreviewView>, NSString, UIImage;

@interface SLSheetAttachment : NSObject <NSCoding> {
    NSString *identifier;
    int _type;
    id _payload;
    UIImage *_previewImage;
    UIView<SLSheetPreviewView> *_previewView;
    int _downsampleStatus;
    BOOL _pendingPreviewProxy;
}

@property(copy) NSString * identifier;
@property int type;
@property(copy) id payload;
@property(retain) UIImage * previewImage;
@property int downsampleStatus;
@property(retain) UIView<SLSheetPreviewView> * previewView;
@property BOOL pendingPreviewProxy;

+ (id)uniqueIdentifier;
+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;

- (id)identifier;
- (int)type;
- (id)description;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)pendingPreviewProxy;
- (void)setPendingPreviewProxy:(BOOL)arg1;
- (void)setDownsampleStatus:(int)arg1;
- (int)downsampleStatus;
- (void)setPayload:(id)arg1;
- (id)payload;
- (void)setPreviewImage:(id)arg1;
- (id)previewImage;
- (void)setPreviewView:(id)arg1;
- (id)previewView;

@end