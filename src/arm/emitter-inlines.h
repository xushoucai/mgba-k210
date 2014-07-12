#ifndef EMITTER_INLINES_H
#define EMITTER_INLINES_H

#define DO_4(DIRECTIVE) \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE

#define DO_8(DIRECTIVE) \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE, \
	DIRECTIVE

#define DO_256(DIRECTIVE) \
	DO_4(DO_8(DO_8(DIRECTIVE)))

#define DO_INTERLACE(LEFT, RIGHT) \
	LEFT, \
	RIGHT

#define APPLY(F, ...) F(__VA_ARGS__)

#define COUNT_1(EMITTER, PREFIX, ...) \
	EMITTER(PREFIX ## 0, 0, __VA_ARGS__) \
	EMITTER(PREFIX ## 1, 1, __VA_ARGS__)

#define COUNT_2(EMITTER, PREFIX, ...) \
	COUNT_1(EMITTER, PREFIX, __VA_ARGS__) \
	EMITTER(PREFIX ## 2, 2, __VA_ARGS__) \
	EMITTER(PREFIX ## 3, 3, __VA_ARGS__)

#define COUNT_3(EMITTER, PREFIX, ...) \
	COUNT_2(EMITTER, PREFIX, __VA_ARGS__) \
	EMITTER(PREFIX ## 4, 4, __VA_ARGS__) \
	EMITTER(PREFIX ## 5, 5, __VA_ARGS__) \
	EMITTER(PREFIX ## 6, 6, __VA_ARGS__) \
	EMITTER(PREFIX ## 7, 7, __VA_ARGS__)

#define COUNT_4(EMITTER, PREFIX, ...) \
	COUNT_3(EMITTER, PREFIX, __VA_ARGS__) \
	EMITTER(PREFIX ## 8, 8, __VA_ARGS__) \
	EMITTER(PREFIX ## 9, 9, __VA_ARGS__) \
	EMITTER(PREFIX ## A, 10, __VA_ARGS__) \
	EMITTER(PREFIX ## B, 11, __VA_ARGS__) \
	EMITTER(PREFIX ## C, 12, __VA_ARGS__) \
	EMITTER(PREFIX ## D, 13, __VA_ARGS__) \
	EMITTER(PREFIX ## E, 14, __VA_ARGS__) \
	EMITTER(PREFIX ## F, 15, __VA_ARGS__)

#define COUNT_5(EMITTER, PREFIX, ...) \
	COUNT_4(EMITTER, PREFIX ## 0, __VA_ARGS__) \
	EMITTER(PREFIX ## 10, 16, __VA_ARGS__) \
	EMITTER(PREFIX ## 11, 17, __VA_ARGS__) \
	EMITTER(PREFIX ## 12, 18, __VA_ARGS__) \
	EMITTER(PREFIX ## 13, 19, __VA_ARGS__) \
	EMITTER(PREFIX ## 14, 20, __VA_ARGS__) \
	EMITTER(PREFIX ## 15, 21, __VA_ARGS__) \
	EMITTER(PREFIX ## 16, 22, __VA_ARGS__) \
	EMITTER(PREFIX ## 17, 23, __VA_ARGS__) \
	EMITTER(PREFIX ## 18, 24, __VA_ARGS__) \
	EMITTER(PREFIX ## 19, 25, __VA_ARGS__) \
	EMITTER(PREFIX ## 1A, 26, __VA_ARGS__) \
	EMITTER(PREFIX ## 1B, 27, __VA_ARGS__) \
	EMITTER(PREFIX ## 1C, 28, __VA_ARGS__) \
	EMITTER(PREFIX ## 1D, 29, __VA_ARGS__) \
	EMITTER(PREFIX ## 1E, 30, __VA_ARGS__) \
	EMITTER(PREFIX ## 1F, 31, __VA_ARGS__) \

#define DUMMY(X, ...) X,
#define DUMMY_4(...) \
	DUMMY(__VA_ARGS__) \
	DUMMY(__VA_ARGS__) \
	DUMMY(__VA_ARGS__) \
	DUMMY(__VA_ARGS__)

#endif
