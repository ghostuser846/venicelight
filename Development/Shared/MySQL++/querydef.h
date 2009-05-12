// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// This file is generated by the Perl script querydef.pl. Please do 
// not modify this file directly. Change the script instead.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef MYSQLPP_QUERYDEF_H
#define MYSQLPP_QUERYDEF_H

#define mysql_query_define0(RETURN, FUNC) \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21, const SQLTypeAdapter& arg22) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21 << arg22); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21, const SQLTypeAdapter& arg22, const SQLTypeAdapter& arg23) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21 << arg22 << arg23); } \
	RETURN FUNC(const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21, const SQLTypeAdapter& arg22, const SQLTypeAdapter& arg23, const SQLTypeAdapter& arg24) \
		{ return FUNC(SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21 << arg22 << arg23 << arg24); } \

#define mysql_query_define1(FUNC) \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21, const SQLTypeAdapter& arg22) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21 << arg22); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21, const SQLTypeAdapter& arg22, const SQLTypeAdapter& arg23) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21 << arg22 << arg23); } \
	template <class T> void FUNC(T& container, const SQLTypeAdapter& arg0, const SQLTypeAdapter& arg1, const SQLTypeAdapter& arg2, const SQLTypeAdapter& arg3, const SQLTypeAdapter& arg4, const SQLTypeAdapter& arg5, const SQLTypeAdapter& arg6, const SQLTypeAdapter& arg7, const SQLTypeAdapter& arg8, const SQLTypeAdapter& arg9, const SQLTypeAdapter& arg10, const SQLTypeAdapter& arg11, const SQLTypeAdapter& arg12, const SQLTypeAdapter& arg13, const SQLTypeAdapter& arg14, const SQLTypeAdapter& arg15, const SQLTypeAdapter& arg16, const SQLTypeAdapter& arg17, const SQLTypeAdapter& arg18, const SQLTypeAdapter& arg19, const SQLTypeAdapter& arg20, const SQLTypeAdapter& arg21, const SQLTypeAdapter& arg22, const SQLTypeAdapter& arg23, const SQLTypeAdapter& arg24) \
		{ FUNC(container, SQLQueryParms() << arg0 << arg1 << arg2 << arg3 << arg4 << arg5 << arg6 << arg7 << arg8 << arg9 << arg10 << arg11 << arg12 << arg13 << arg14 << arg15 << arg16 << arg17 << arg18 << arg19 << arg20 << arg21 << arg22 << arg23 << arg24); } \

#endif // !defined(MYSQLPP_QUERYDEF_H)