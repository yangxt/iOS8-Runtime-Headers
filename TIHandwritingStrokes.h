/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { 
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__begin_; 
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { 
            struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__first_; 
        } __end_cap_; 
    } _strokes;
    BOOL _continuePreviousStroke;
}

+ (BOOL)supportsSecureCoding;

- (unsigned int)totalNumberOfPoints;
- (void)removeAllStrokes;
- (void)endStroke;
- (void).cxx_destruct;
- (void)removeStrokeAtIndex:(unsigned int)arg1;
- (id).cxx_construct;
- (struct CGPoint { float x1; float x2; })pointAtIndex:(unsigned int)arg1 inStrokeAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPointsInStrokeAtIndex:(unsigned int)arg1;
- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)numberOfStrokes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
