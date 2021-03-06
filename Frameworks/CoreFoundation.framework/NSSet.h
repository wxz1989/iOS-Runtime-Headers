/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSSet : NSObject <HFPrettyDescription, HFStateDumpSerializable, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding, PQLBindable>

@property (readonly) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newSetWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)set;
+ (id)setWithArray:(id)arg1;
+ (id)setWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithObject:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (void)__applyValues:(int (*)arg1 context:(void*)arg2;
- (BOOL)__getValue:(id*)arg1 forObj:(id)arg2;
- (unsigned long)_cfTypeID;
- (id)allObjects;
- (id)anyObject;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned int)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isNSSet__;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)member:(id)arg1;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)supportsSecureCoding;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (void)ph_enumerateIntersectionWithSet:(id)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (BOOL)bs_containsObjectPassingTest:(id /* block */)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)allObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)intersectionOfSet:(id)arg1 withSet:(id)arg2;

- (id)CalMutableRecursiveCopy;
- (id)allObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (BOOL)_cn_any:(id /* block */)arg1;
- (id)_cn_firstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_indexBy:(id /* block */)arg1;
- (id)_cn_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DACompactDescription;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_setWithSafeObject:(id)arg1;

- (BOOL)fm_any:(id /* block */)arg1;
- (void)fm_each:(id /* block */)arg1;
- (id)fm_filter:(id /* block */)arg1;
- (id)fm_firstObjectPassingTest:(id /* block */)arg1;
- (id)fm_map:(id /* block */)arg1;
- (id)fm_setByFlattening;
- (id)fm_setByIntersectingWithSet:(id)arg1;
- (id)fm_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit

- (id)fkSanitizedDestinationSet;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(id /* block */)arg1;
- (id)_gkSetByRemovingObject:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned int)arg1;
- (id)hf_serializedStateDumpRepresentation;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)__imForEach:(id /* block */)arg1;
- (id)__imSetByApplyingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (BOOL)mf_any:(id /* block */)arg1;
- (id)mf_anyPassingTest:(id /* block */)arg1;
- (unsigned int)mf_countObjectsPassingTest:(id /* block */)arg1;
- (id)mf_filter:(id /* block */)arg1;
- (id)mf_flatMap:(id /* block */)arg1;
- (id)mf_flatten;
- (id)mf_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkComprehension:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_setWithSafeObject:(id)arg1;

- (BOOL)na_all:(id /* block */)arg1;
- (BOOL)na_any:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;
- (id)na_setByFlattening;
- (id)na_setByIntersectingWithSet:(id)arg1;
- (id)na_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_set:(id /* block */)arg1;

- (id)fc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (BOOL)fc_containsAnyObjectInArray:(id)arg1;
- (BOOL)fc_containsObjectPassingTest:(id /* block */)arg1;
- (id)fc_dictionaryOfSortedSetsWithKeyBlock:(id /* block */)arg1;
- (id)fc_diffAgainstSet:(id)arg1;
- (id)fc_firstObjectPassingTest:(id /* block */)arg1;
- (id)fc_mutableSetByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_onlyObject;
- (id)fc_setByIntersectingSet:(id)arg1;
- (id)fc_setByMinusingSet:(id)arg1;
- (id)fc_setByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_setByUnioningSet:(id)arg1;
- (id)fc_setOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (BOOL)containsObjectPassingTest:(id /* block */)arg1;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectsOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_intersectionOfSets:(id)arg1;
+ (BOOL)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;

- (BOOL)tsu_containsObjectIdenticalTo:(id)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_sortedArray;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)setByRemovingObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_filter:(id /* block */)arg1;
- (id)_pl_firstObjectPassingTest:(id /* block */)arg1;
- (id)_pl_map:(id /* block */)arg1;
- (unsigned int)pl_countOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (id)setByIntersectingWithSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)setByIntersectingSet:(id)arg1;
- (id)setByMinusingSet:(id)arg1;
- (id)setByRemovingObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_consolidateFeatureInfos:(id)arg1 andReturnReadVersion:(out unsigned long long*)arg2 writeVersion:(out unsigned long long*)arg3;
+ (id)tsu_intersectionOfSets:(id)arg1;
+ (BOOL)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;

- (BOOL)tss_containsStyleOrVariationOfStyle:(id)arg1;
- (BOOL)tss_hasVariations;
- (BOOL)tsu_containsObjectIdenticalTo:(id)arg1;
- (BOOL)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_onlyObject;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_sortedArray;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
