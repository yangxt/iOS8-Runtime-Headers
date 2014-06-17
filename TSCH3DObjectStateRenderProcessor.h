/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSSet, NSObject;

@interface TSCH3DObjectStateRenderProcessor : TSCH3DRetargetRenderProcessor  {
    struct StateStack<TSCH3D::ObjectState, 6> { 
        unsigned int mIndex; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__first_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    BOOL mipmap; 
                    BOOL repeat; 
                    BOOL nearest; 
                    int unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
                        struct tvec2<int> { 
                            union { 
                                int x; 
                                int r; 
                                int s; 
                            } ; 
                            union { 
                                int y; 
                                int g; 
                                int t; 
                            } ; 
                        } sizeLODHint; 
                    } textureSizeHint; 
                    BOOL is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mCurrent; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__first_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    BOOL mipmap; 
                    BOOL repeat; 
                    BOOL nearest; 
                    int unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
                        struct tvec2<int> { 
                            union { 
                                int x; 
                                int r; 
                                int s; 
                            } ; 
                            union { 
                                int y; 
                                int g; 
                                int t; 
                            } ; 
                        } sizeLODHint; 
                    } textureSizeHint; 
                    BOOL is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mStack[6]; 
    } mObjectStateStack;
}


- (void)pushState;
- (void)popState;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)resetBuffers;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned int x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; } x_2_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_2_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; } x_3_2_1[8]; } x_2_1_3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_3_1; int x_1_3_2; BOOL x_1_3_3; BOOL x_1_3_4; BOOL x_1_3_5; int x_1_3_6; struct TextureSizeHint { int x_7_4_1; struct tvec2<int> { union { int x_1_6_1; int x_1_6_2; int x_1_6_3; } x_2_5_1; union { int x_2_6_1; int x_2_6_2; int x_2_6_3; } x_2_5_2; } x_7_4_2; } x_1_3_7; BOOL x_1_3_8; } x_4_2_1[8]; } x_2_1_4; } x2; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; } x_3_1_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_2_1; struct Lookup {} *x_2_2_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_3_1; } x_2_2_3; } x_3_1_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_3_1; } x_3_2_1[8]; } x_3_1_3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_3_1; int x_1_3_2; BOOL x_1_3_3; BOOL x_1_3_4; BOOL x_1_3_5; int x_1_3_6; struct TextureSizeHint { int x_7_4_1; struct tvec2<int> { union { int x_1_6_1; int x_1_6_2; int x_1_6_3; } x_2_5_1; union { int x_2_6_1; int x_2_6_2; int x_2_6_3; } x_2_5_2; } x_7_4_2; } x_1_3_7; BOOL x_1_3_8; } x_4_2_1[8]; } x_3_1_4; } x3[6]; }*)objectStateStack;

@end