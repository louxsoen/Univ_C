	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_function                       ## -- Begin function function
	.p2align	4, 0x90
_function:                              ## @function
Lfunc_begin0:
	.file	1 "/Users/louxsoen/Documents/GitHub/Univ_C/bof" "simple.c"
	.loc	1 4 0                           ## simple.c:4:0
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	%edi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB0_2
## %bb.1:
Ltmp0:
	.loc	1 7 1 prologue_end              ## simple.c:7:1
	addq	$48, %rsp
	popq	%rbp
	retq
LBB0_2:
	.loc	1 0 0 is_stmt 0                 ## simple.c:0:0
	callq	___stack_chk_fail
	ud2
Ltmp1:
Lfunc_end0:
	.cfi_endproc
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin1:
	.loc	1 10 0 is_stmt 1                ## simple.c:10:0
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
Ltmp2:
	.loc	1 11 5 prologue_end             ## simple.c:11:5
	movl	$1, %edi
	movl	$2, %esi
	movl	$3, %edx
	callq	_function
	.loc	1 12 1                          ## simple.c:12:1
	popq	%rbp
	retq
Ltmp3:
Lfunc_end1:
	.cfi_endproc
                                        ## -- End function
	.section	__DWARF,__debug_abbrev,regular,debug
Lsection_abbrev:
	.byte	1                               ## Abbreviation Code
	.byte	17                              ## DW_TAG_compile_unit
	.byte	1                               ## DW_CHILDREN_yes
	.byte	37                              ## DW_AT_producer
	.byte	14                              ## DW_FORM_strp
	.byte	19                              ## DW_AT_language
	.byte	5                               ## DW_FORM_data2
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.ascii	"\202|"                         ## DW_AT_LLVM_sysroot
	.byte	14                              ## DW_FORM_strp
	.ascii	"\357\177"                      ## DW_AT_APPLE_sdk
	.byte	14                              ## DW_FORM_strp
	.byte	16                              ## DW_AT_stmt_list
	.byte	23                              ## DW_FORM_sec_offset
	.byte	27                              ## DW_AT_comp_dir
	.byte	14                              ## DW_FORM_strp
	.byte	17                              ## DW_AT_low_pc
	.byte	1                               ## DW_FORM_addr
	.byte	18                              ## DW_AT_high_pc
	.byte	6                               ## DW_FORM_data4
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	2                               ## Abbreviation Code
	.byte	46                              ## DW_TAG_subprogram
	.byte	1                               ## DW_CHILDREN_yes
	.byte	17                              ## DW_AT_low_pc
	.byte	1                               ## DW_FORM_addr
	.byte	18                              ## DW_AT_high_pc
	.byte	6                               ## DW_FORM_data4
	.byte	64                              ## DW_AT_frame_base
	.byte	24                              ## DW_FORM_exprloc
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.byte	58                              ## DW_AT_decl_file
	.byte	11                              ## DW_FORM_data1
	.byte	59                              ## DW_AT_decl_line
	.byte	11                              ## DW_FORM_data1
	.byte	39                              ## DW_AT_prototyped
	.byte	25                              ## DW_FORM_flag_present
	.byte	63                              ## DW_AT_external
	.byte	25                              ## DW_FORM_flag_present
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	3                               ## Abbreviation Code
	.byte	5                               ## DW_TAG_formal_parameter
	.byte	0                               ## DW_CHILDREN_no
	.byte	2                               ## DW_AT_location
	.byte	24                              ## DW_FORM_exprloc
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.byte	58                              ## DW_AT_decl_file
	.byte	11                              ## DW_FORM_data1
	.byte	59                              ## DW_AT_decl_line
	.byte	11                              ## DW_FORM_data1
	.byte	73                              ## DW_AT_type
	.byte	19                              ## DW_FORM_ref4
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	4                               ## Abbreviation Code
	.byte	52                              ## DW_TAG_variable
	.byte	0                               ## DW_CHILDREN_no
	.byte	2                               ## DW_AT_location
	.byte	24                              ## DW_FORM_exprloc
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.byte	58                              ## DW_AT_decl_file
	.byte	11                              ## DW_FORM_data1
	.byte	59                              ## DW_AT_decl_line
	.byte	11                              ## DW_FORM_data1
	.byte	73                              ## DW_AT_type
	.byte	19                              ## DW_FORM_ref4
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	5                               ## Abbreviation Code
	.byte	46                              ## DW_TAG_subprogram
	.byte	0                               ## DW_CHILDREN_no
	.byte	17                              ## DW_AT_low_pc
	.byte	1                               ## DW_FORM_addr
	.byte	18                              ## DW_AT_high_pc
	.byte	6                               ## DW_FORM_data4
	.byte	64                              ## DW_AT_frame_base
	.byte	24                              ## DW_FORM_exprloc
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.byte	58                              ## DW_AT_decl_file
	.byte	11                              ## DW_FORM_data1
	.byte	59                              ## DW_AT_decl_line
	.byte	11                              ## DW_FORM_data1
	.byte	63                              ## DW_AT_external
	.byte	25                              ## DW_FORM_flag_present
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	6                               ## Abbreviation Code
	.byte	36                              ## DW_TAG_base_type
	.byte	0                               ## DW_CHILDREN_no
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.byte	62                              ## DW_AT_encoding
	.byte	11                              ## DW_FORM_data1
	.byte	11                              ## DW_AT_byte_size
	.byte	11                              ## DW_FORM_data1
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	7                               ## Abbreviation Code
	.byte	1                               ## DW_TAG_array_type
	.byte	1                               ## DW_CHILDREN_yes
	.byte	73                              ## DW_AT_type
	.byte	19                              ## DW_FORM_ref4
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	8                               ## Abbreviation Code
	.byte	33                              ## DW_TAG_subrange_type
	.byte	0                               ## DW_CHILDREN_no
	.byte	73                              ## DW_AT_type
	.byte	19                              ## DW_FORM_ref4
	.byte	55                              ## DW_AT_count
	.byte	11                              ## DW_FORM_data1
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	9                               ## Abbreviation Code
	.byte	36                              ## DW_TAG_base_type
	.byte	0                               ## DW_CHILDREN_no
	.byte	3                               ## DW_AT_name
	.byte	14                              ## DW_FORM_strp
	.byte	11                              ## DW_AT_byte_size
	.byte	11                              ## DW_FORM_data1
	.byte	62                              ## DW_AT_encoding
	.byte	11                              ## DW_FORM_data1
	.byte	0                               ## EOM(1)
	.byte	0                               ## EOM(2)
	.byte	0                               ## EOM(3)
	.section	__DWARF,__debug_info,regular,debug
Lsection_info:
Lcu_begin0:
.set Lset0, Ldebug_info_end0-Ldebug_info_start0 ## Length of Unit
	.long	Lset0
Ldebug_info_start0:
	.short	4                               ## DWARF version number
.set Lset1, Lsection_abbrev-Lsection_abbrev ## Offset Into Abbrev. Section
	.long	Lset1
	.byte	8                               ## Address Size (in bytes)
	.byte	1                               ## Abbrev [1] 0xb:0xc6 DW_TAG_compile_unit
	.long	0                               ## DW_AT_producer
	.short	12                              ## DW_AT_language
	.long	47                              ## DW_AT_name
	.long	56                              ## DW_AT_LLVM_sysroot
	.long	108                             ## DW_AT_APPLE_sdk
.set Lset2, Lline_table_start0-Lsection_line ## DW_AT_stmt_list
	.long	Lset2
	.long	119                             ## DW_AT_comp_dir
	.quad	Lfunc_begin0                    ## DW_AT_low_pc
.set Lset3, Lfunc_end1-Lfunc_begin0     ## DW_AT_high_pc
	.long	Lset3
	.byte	2                               ## Abbrev [2] 0x32:0x5c DW_TAG_subprogram
	.quad	Lfunc_begin0                    ## DW_AT_low_pc
.set Lset4, Lfunc_end0-Lfunc_begin0     ## DW_AT_high_pc
	.long	Lset4
	.byte	1                               ## DW_AT_frame_base
	.byte	86
	.long	163                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	3                               ## DW_AT_decl_line
                                        ## DW_AT_prototyped
                                        ## DW_AT_external
	.byte	3                               ## Abbrev [3] 0x47:0xe DW_TAG_formal_parameter
	.byte	2                               ## DW_AT_location
	.byte	145
	.byte	88
	.long	177                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	3                               ## DW_AT_decl_line
	.long	163                             ## DW_AT_type
	.byte	3                               ## Abbrev [3] 0x55:0xe DW_TAG_formal_parameter
	.byte	2                               ## DW_AT_location
	.byte	145
	.byte	84
	.long	183                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	3                               ## DW_AT_decl_line
	.long	163                             ## DW_AT_type
	.byte	3                               ## Abbrev [3] 0x63:0xe DW_TAG_formal_parameter
	.byte	2                               ## DW_AT_location
	.byte	145
	.byte	80
	.long	185                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	3                               ## DW_AT_decl_line
	.long	163                             ## DW_AT_type
	.byte	4                               ## Abbrev [4] 0x71:0xe DW_TAG_variable
	.byte	2                               ## DW_AT_location
	.byte	145
	.byte	105
	.long	187                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	5                               ## DW_AT_decl_line
	.long	170                             ## DW_AT_type
	.byte	4                               ## Abbrev [4] 0x7f:0xe DW_TAG_variable
	.byte	2                               ## DW_AT_location
	.byte	145
	.byte	95
	.long	220                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	6                               ## DW_AT_decl_line
	.long	196                             ## DW_AT_type
	.byte	0                               ## End Of Children Mark
	.byte	5                               ## Abbrev [5] 0x8e:0x15 DW_TAG_subprogram
	.quad	Lfunc_begin1                    ## DW_AT_low_pc
.set Lset5, Lfunc_end1-Lfunc_begin1     ## DW_AT_high_pc
	.long	Lset5
	.byte	1                               ## DW_AT_frame_base
	.byte	86
	.long	172                             ## DW_AT_name
	.byte	1                               ## DW_AT_decl_file
	.byte	9                               ## DW_AT_decl_line
                                        ## DW_AT_external
	.byte	6                               ## Abbrev [6] 0xa3:0x7 DW_TAG_base_type
	.long	179                             ## DW_AT_name
	.byte	5                               ## DW_AT_encoding
	.byte	4                               ## DW_AT_byte_size
	.byte	7                               ## Abbrev [7] 0xaa:0xc DW_TAG_array_type
	.long	182                             ## DW_AT_type
	.byte	8                               ## Abbrev [8] 0xaf:0x6 DW_TAG_subrange_type
	.long	189                             ## DW_AT_type
	.byte	15                              ## DW_AT_count
	.byte	0                               ## End Of Children Mark
	.byte	6                               ## Abbrev [6] 0xb6:0x7 DW_TAG_base_type
	.long	195                             ## DW_AT_name
	.byte	6                               ## DW_AT_encoding
	.byte	1                               ## DW_AT_byte_size
	.byte	9                               ## Abbrev [9] 0xbd:0x7 DW_TAG_base_type
	.long	200                             ## DW_AT_name
	.byte	8                               ## DW_AT_byte_size
	.byte	7                               ## DW_AT_encoding
	.byte	7                               ## Abbrev [7] 0xc4:0xc DW_TAG_array_type
	.long	182                             ## DW_AT_type
	.byte	8                               ## Abbrev [8] 0xc9:0x6 DW_TAG_subrange_type
	.long	189                             ## DW_AT_type
	.byte	10                              ## DW_AT_count
	.byte	0                               ## End Of Children Mark
	.byte	0                               ## End Of Children Mark
Ldebug_info_end0:
	.section	__DWARF,__debug_str,regular,debug
Linfo_string:
	.asciz	"Apple clang version 12.0.5 (clang-1205.0.22.9)" ## string offset=0
	.asciz	"simple.c"                      ## string offset=47
	.asciz	"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk" ## string offset=56
	.asciz	"MacOSX.sdk"                    ## string offset=108
	.asciz	"/Users/louxsoen/Documents/GitHub/Univ_C/bof" ## string offset=119
	.asciz	"function"                      ## string offset=163
	.asciz	"main"                          ## string offset=172
	.asciz	"a"                             ## string offset=177
	.asciz	"int"                           ## string offset=179
	.asciz	"b"                             ## string offset=183
	.asciz	"c"                             ## string offset=185
	.asciz	"buffer1"                       ## string offset=187
	.asciz	"char"                          ## string offset=195
	.asciz	"__ARRAY_SIZE_TYPE__"           ## string offset=200
	.asciz	"buffer2"                       ## string offset=220
	.section	__DWARF,__apple_names,regular,debug
Lnames_begin:
	.long	1212240712                      ## Header Magic
	.short	1                               ## Header Version
	.short	0                               ## Header Hash Function
	.long	2                               ## Header Bucket Count
	.long	2                               ## Header Hash Count
	.long	12                              ## Header Data Length
	.long	0                               ## HeaderData Die Offset Base
	.long	1                               ## HeaderData Atom Count
	.short	1                               ## DW_ATOM_die_offset
	.short	6                               ## DW_FORM_data4
	.long	0                               ## Bucket 0
	.long	1                               ## Bucket 1
	.long	2090499946                      ## Hash in Bucket 0
	.long	-735823797                      ## Hash in Bucket 1
.set Lset6, LNames0-Lnames_begin        ## Offset in Bucket 0
	.long	Lset6
.set Lset7, LNames1-Lnames_begin        ## Offset in Bucket 1
	.long	Lset7
LNames0:
	.long	172                             ## main
	.long	1                               ## Num DIEs
	.long	142
	.long	0
LNames1:
	.long	163                             ## function
	.long	1                               ## Num DIEs
	.long	50
	.long	0
	.section	__DWARF,__apple_objc,regular,debug
Lobjc_begin:
	.long	1212240712                      ## Header Magic
	.short	1                               ## Header Version
	.short	0                               ## Header Hash Function
	.long	1                               ## Header Bucket Count
	.long	0                               ## Header Hash Count
	.long	12                              ## Header Data Length
	.long	0                               ## HeaderData Die Offset Base
	.long	1                               ## HeaderData Atom Count
	.short	1                               ## DW_ATOM_die_offset
	.short	6                               ## DW_FORM_data4
	.long	-1                              ## Bucket 0
	.section	__DWARF,__apple_namespac,regular,debug
Lnamespac_begin:
	.long	1212240712                      ## Header Magic
	.short	1                               ## Header Version
	.short	0                               ## Header Hash Function
	.long	1                               ## Header Bucket Count
	.long	0                               ## Header Hash Count
	.long	12                              ## Header Data Length
	.long	0                               ## HeaderData Die Offset Base
	.long	1                               ## HeaderData Atom Count
	.short	1                               ## DW_ATOM_die_offset
	.short	6                               ## DW_FORM_data4
	.long	-1                              ## Bucket 0
	.section	__DWARF,__apple_types,regular,debug
Ltypes_begin:
	.long	1212240712                      ## Header Magic
	.short	1                               ## Header Version
	.short	0                               ## Header Hash Function
	.long	3                               ## Header Bucket Count
	.long	3                               ## Header Hash Count
	.long	20                              ## Header Data Length
	.long	0                               ## HeaderData Die Offset Base
	.long	3                               ## HeaderData Atom Count
	.short	1                               ## DW_ATOM_die_offset
	.short	6                               ## DW_FORM_data4
	.short	3                               ## DW_ATOM_die_tag
	.short	5                               ## DW_FORM_data2
	.short	4                               ## DW_ATOM_type_flags
	.short	11                              ## DW_FORM_data1
	.long	-1                              ## Bucket 0
	.long	-1                              ## Bucket 1
	.long	0                               ## Bucket 2
	.long	193495088                       ## Hash in Bucket 2
	.long	2090147939                      ## Hash in Bucket 2
	.long	-594775205                      ## Hash in Bucket 2
.set Lset8, Ltypes1-Ltypes_begin        ## Offset in Bucket 2
	.long	Lset8
.set Lset9, Ltypes2-Ltypes_begin        ## Offset in Bucket 2
	.long	Lset9
.set Lset10, Ltypes0-Ltypes_begin       ## Offset in Bucket 2
	.long	Lset10
Ltypes1:
	.long	179                             ## int
	.long	1                               ## Num DIEs
	.long	163
	.short	36
	.byte	0
	.long	0
Ltypes2:
	.long	195                             ## char
	.long	1                               ## Num DIEs
	.long	182
	.short	36
	.byte	0
	.long	0
Ltypes0:
	.long	200                             ## __ARRAY_SIZE_TYPE__
	.long	1                               ## Num DIEs
	.long	189
	.short	36
	.byte	0
	.long	0
.subsections_via_symbols
	.section	__DWARF,__debug_line,regular,debug
Lsection_line:
Lline_table_start0:
