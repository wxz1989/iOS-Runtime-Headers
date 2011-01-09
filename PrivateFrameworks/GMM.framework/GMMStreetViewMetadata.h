/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDataProperties, GMMProjectionProperties, GMMAnnotationProperties;



@interface GMMStreetViewMetadata : PBCodable 
{
    GMMDataProperties *_dataProperties;
    GMMProjectionProperties *_projectionProperties;
    GMMAnnotationProperties *_annotationProperties;
}

@property(retain) GMMAnnotationProperties *annotationProperties;
@property(retain) GMMProjectionProperties *projectionProperties;
@property(retain) GMMDataProperties *dataProperties;


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)annotationProperties;
- (void)setAnnotationProperties:(id)arg1;
- (id)projectionProperties;
- (void)setProjectionProperties:(id)arg1;
- (id)dataProperties;
- (void)setDataProperties:(id)arg1;

@end