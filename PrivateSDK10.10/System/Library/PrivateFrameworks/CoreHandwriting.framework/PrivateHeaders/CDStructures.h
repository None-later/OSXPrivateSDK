/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct CHCandidateResult {
    unsigned int _field1;
    float _field2;
};

struct CHNeuralNetwork {
    void **_field1;
    int _field2;
    char *_field3;
    unsigned long long _field4;
    unsigned int *_field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
};

struct CJKChar {
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> strokes;
    unsigned long long currentStrokeIndex;
    unsigned int mSize;
    struct Matrix<double> bitmap;
    double lineHeight;
};

struct Hanzi {
    struct vector<std::__1::vector<Coord, std::__1::allocator<Coord>>, std::__1::allocator<std::__1::vector<Coord, std::__1::allocator<Coord>>>> _field1;
};

struct Matrix<double> {
    void **_vptr$Matrix;
    double *_data;
    unsigned int _w;
    unsigned int _h;
};

struct Matrix<float> {
    void **_field1;
    float *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct Network {
    unsigned int _field1;
    unsigned int _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    unsigned int _field4;
    struct vector<NetworkNode, std::__1::allocator<NetworkNode>> _field5;
    struct vector<NetworkEdge, std::__1::allocator<NetworkEdge>> _field6;
    struct vector<const NetworkEdge *, std::__1::allocator<const NetworkEdge *>> _field7;
    struct SymbolMap _field8;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _field9;
    _Bool _field10;
    _Bool _field11;
    float *_field12[2];
    struct map<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>>> _field13;
    struct set<uint128, std::__1::less<uint128>, std::__1::allocator<uint128>> _field14;
};

struct NetworkEdge;

struct NetworkNode;

struct SymbolMap {
    void **_field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _field3;
};

struct VariantMap {
    int *_field1;
    int *_field2;
    int *_field3;
    int _field4;
    int *_field5;
    unsigned long long _field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
    struct __tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>>> {
    struct __tree<std::__1::__value_type<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>>> {
        struct __tree_node<std::__1::__value_type<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int>>> {
        struct __tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<uint128, std::__1::less<uint128>, std::__1::allocator<uint128>> {
    struct __tree<uint128, std::__1::less<uint128>, std::__1::allocator<uint128>> {
        struct __tree_node<uint128, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<uint128, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<uint128>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>> {
    struct CHCandidateResult *_field1;
    struct CHCandidateResult *_field2;
    struct __compressed_pair<CHCandidateResult *, std::__1::allocator<CHCandidateResult>> {
        struct CHCandidateResult *_field1;
    } _field3;
};

struct vector<Coord, std::__1::allocator<Coord>>;

struct vector<NetworkEdge, std::__1::allocator<NetworkEdge>> {
    struct NetworkEdge *_field1;
    struct NetworkEdge *_field2;
    struct __compressed_pair<NetworkEdge *, std::__1::allocator<NetworkEdge>> {
        struct NetworkEdge *_field1;
    } _field3;
};

struct vector<NetworkNode, std::__1::allocator<NetworkNode>> {
    struct NetworkNode *_field1;
    struct NetworkNode *_field2;
    struct __compressed_pair<NetworkNode *, std::__1::allocator<NetworkNode>> {
        struct NetworkNode *_field1;
    } _field3;
};

struct vector<const NetworkEdge *, std::__1::allocator<const NetworkEdge *>> {
    struct NetworkEdge **_field1;
    struct NetworkEdge **_field2;
    struct __compressed_pair<const NetworkEdge **, std::__1::allocator<const NetworkEdge *>> {
        struct NetworkEdge **_field1;
    } _field3;
};

struct vector<const void *, std::__1::allocator<const void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<const void **, std::__1::allocator<const void *>> {
        void **_field1;
    } _field3;
};

struct vector<double, std::__1::allocator<double>>;

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<Coord, std::__1::allocator<Coord>>, std::__1::allocator<std::__1::vector<Coord, std::__1::allocator<Coord>>>> {
    struct vector<Coord, std::__1::allocator<Coord>> *_field1;
    struct vector<Coord, std::__1::allocator<Coord>> *_field2;
    struct __compressed_pair<std::__1::vector<Coord, std::__1::allocator<Coord>>*, std::__1::allocator<std::__1::vector<Coord, std::__1::allocator<Coord>>>> {
        struct vector<Coord, std::__1::allocator<Coord>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
    struct vector<double, std::__1::allocator<double>> *__begin_;
    struct vector<double, std::__1::allocator<double>> *__end_;
    struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double>>*, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
        struct vector<double, std::__1::allocator<double>> *__first_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct Matrix<float> {
    void **_field1;
    float *_field2;
    unsigned int _field3;
    unsigned int _field4;
} Matrix_273a43f8;

typedef struct map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
    struct __tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>> {
        struct __tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_6bca5f83;

typedef struct vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>> {
    struct CHCandidateResult *_field1;
    struct CHCandidateResult *_field2;
    struct __compressed_pair<CHCandidateResult *, std::__1::allocator<CHCandidateResult>> {
        struct CHCandidateResult *_field1;
    } _field3;
} vector_06f11b7b;

typedef struct vector<const void *, std::__1::allocator<const void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<const void **, std::__1::allocator<const void *>> {
        void **_field1;
    } _field3;
} vector_de520796;

typedef struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
} vector_3203cf93;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *_field1;
    } _field3;
} vector_eb9481f9;
