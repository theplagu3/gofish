
RUNTIME_FUNCTION struc ; (sizeof=0xC, mappedto_1)
                        ; XREF: .rdata:00000001401EF3A8/r
                        ; .rdata:00000001401EF3BC/r ...
FunctionStart dd ?      ; offset rva
FunctionEnd dd ?        ; offset rva pastend
UnwindInfo dd ?         ; offset rva
RUNTIME_FUNCTION ends


UNWIND_INFO_HDR struc ; (sizeof=0x4, mappedto_2)
                        ; XREF: .rdata:stru_1401EF360/r
                        ; .rdata:stru_1401EF37C/r ...
Ver3_Flags db ?         ; base 16
PrologSize db ?         ; base 16
CntUnwindCodes db ?     ; base 16
FrReg_FrRegOff db ?     ; base 16
UNWIND_INFO_HDR ends


UNWIND_CODE struc ; (sizeof=0x2, mappedto_3)
                        ; XREF: .rdata:00000001401EF364/r
                        ; .rdata:00000001401EF368/r ...
PrologOff db ?          ; base 16
OpCode_OpInfo db ?      ; base 16
UNWIND_CODE ends


GUID struc ; (sizeof=0x10, align=0x4, copyof_6)
                        ; XREF: .rdata:InterfaceClassGuid/r
                        ; sub_14011A1F0/r ...
Data1 dd ?
Data2 dw ?
Data3 dw ?
Data4 db 8 dup(?)       ; XREF: sub_140005A00+65/w
GUID ends


_SP_DEVICE_INTERFACE_DATA struc ; (sizeof=0x20, align=0x8, copyof_8)
                        ; XREF: sub_140005A00/r
                        ; sub_14011A1F0/r ...
cbSize dd ?             ; XREF: sub_140005A00+5A/w
                        ; sub_140005A00+5E/w ...
InterfaceClassGuid GUID ? ; XREF: sub_140005A00+65/w
Flags dd ?
Reserved dq ?
_SP_DEVICE_INTERFACE_DATA ends


_OVERLAPPED struc ; (sizeof=0x20, align=0x8, copyof_11)
                        ; XREF: sub_140005A00/r
                        ; sub_140005D80/r ...
Internal dq ?           ; XREF: sub_140005A00+190/w
                        ; sub_140005D80+89/w ...
InternalHigh dq ?       ; XREF: sub_140005A00+19B/w
                        ; sub_140005D80+90/w ...
anonymous_0 _OVERLAPPED::$742A73540840F318F86F9CEE3D494648 ?
hEvent dq ?             ; XREF: sub_140005A00+1AD/w
                        ; sub_140005A00+207/r ... ; offset
_OVERLAPPED ends


_OVERLAPPED::$742A73540840F318F86F9CEE3D494648 union ; (sizeof=0x8, align=0x8, copyof_12)
                        ; XREF: _OVERLAPPED/r
anonymous_0 _OVERLAPPED::$742A73540840F318F86F9CEE3D494648::$9BFE693EDA487769FDABADE5E43394F7 ?
Pointer dq ?            ; offset
_OVERLAPPED::$742A73540840F318F86F9CEE3D494648 ends


_OVERLAPPED::$742A73540840F318F86F9CEE3D494648::$9BFE693EDA487769FDABADE5E43394F7 struc ; (sizeof=0x8, align=0x4, copyof_13)
                        ; XREF: _OVERLAPPED::$742A73540840F318F86F9CEE3D494648/r
Offset dd ?
OffsetHigh dd ?
_OVERLAPPED::$742A73540840F318F86F9CEE3D494648::$9BFE693EDA487769FDABADE5E43394F7 ends


_SHFILEOPSTRUCTW struc ; (sizeof=0x38, align=0x8, copyof_16)
                        ; XREF: sub_14003AE00/r
hwnd dq ?               ; XREF: sub_14003AE00+7A2/w ; offset
wFunc dd ?              ; XREF: sub_14003AE00+7BE/w
db ? ; undefined
db ? ; undefined
db ? ; undefined
db ? ; undefined
pFrom dq ?              ; XREF: sub_14003AE00+7A9/w
                        ; sub_14003AE00+7CF/w ; offset
pTo dq ?                ; offset
fFlags dw ?             ; XREF: sub_14003AE00+7B0/w
                        ; sub_14003AE00+7D6/w ...
db ? ; undefined
db ? ; undefined
fAnyOperationsAborted dd ?
hNameMappings dq ?      ; XREF: sub_14003AE00+FACC7/o ; offset
lpszProgressTitle dq ?  ; XREF: sub_14003AE00+7B7/w ; offset
_SHFILEOPSTRUCTW ends


_ThrowInfo struc ; (sizeof=0x10, align=0x4, copyof_28)
                        ; XREF: .rdata:__TI3?AVbad_array_new_length@std@@/r
                        ; .rdata:__TI2?AVbad_alloc@std@@/r
attributes dd ?
pmfnUnwind dd ?
pForwardCompat dd ?
pCatchableTypeArray dd ?
_ThrowInfo ends


_STARTUPINFOW struc ; (sizeof=0x68, align=0x8, copyof_32)
                        ; XREF: sub_140099770/r
                        ; __scrt_get_show_window_mode/r
cb dd ?                 ; XREF: sub_140099770+37E/w
                        ; sub_140099770+39A/w
db ? ; undefined
db ? ; undefined
db ? ; undefined
db ? ; undefined
lpReserved dq ?         ; offset
lpDesktop dq ?          ; XREF: sub_140099770+382/w ; offset
lpTitle dq ?            ; offset
dwX dd ?                ; XREF: sub_140099770+386/w
dwY dd ?
dwXSize dd ?
dwYSize dd ?
dwXCountChars dd ?      ; XREF: sub_140099770+38A/w
dwYCountChars dd ?
dwFillAttribute dd ?
dwFlags dd ?            ; XREF: sub_140099770+3A1/w
                        ; __scrt_get_show_window_mode+22/r
wShowWindow dw ?        ; XREF: sub_140099770+38E/w
                        ; sub_140099770+3A8/w ...
cbReserved2 dw ?
db ? ; undefined
db ? ; undefined
db ? ; undefined
db ? ; undefined
lpReserved2 dq ?        ; offset
hStdInput dq ?          ; XREF: sub_140099770+392/w ; offset
hStdOutput dq ?         ; offset
hStdError dq ?          ; XREF: sub_140099770+396/w ; offset
_STARTUPINFOW ends


_PROCESS_INFORMATION struc ; (sizeof=0x18, align=0x8, copyof_36)
                        ; XREF: sub_140099770/r
hProcess dq ?           ; XREF: sub_140099770+400/r ; offset
hThread dq ?            ; XREF: sub_140099770+3F6/r ; offset
dwProcessId dd ?
dwThreadId dd ?
_PROCESS_INFORMATION ends


RAWINPUTDEVICE struc ; (sizeof=0x10, align=0x8, copyof_37)
                        ; XREF: sub_1400A8BE0/r
                        ; sub_1400A9150/r
usUsagePage dw ?        ; XREF: sub_1400A8BE0+B1/w
                        ; sub_1400A8BE0+DD/w ...
usUsage dw ?
dwFlags dd ?            ; XREF: sub_1400A8BE0+B8/w
                        ; sub_1400A8BE0+E5/w ...
hwndTarget dq ?         ; XREF: sub_1400A8BE0+BF/w
                        ; sub_1400A8BE0+ED/w ... ; offset
RAWINPUTDEVICE ends


_HIDP_CAPS struc ; (sizeof=0x40, align=0x2, copyof_40)
                        ; XREF: sub_1400A9720/r
Usage dw ?
UsagePage dw ?
InputReportByteLength dw ?
OutputReportByteLength dw ?
FeatureReportByteLength dw ?
Reserved dw 17 dup(?)
NumberLinkCollectionNodes dw ?
NumberInputButtonCaps dw ? ; XREF: sub_1400A9720+150/r
NumberInputValueCaps dw ? ; XREF: sub_1400A9720+289/r
                        ; sub_1400A9720+2D1/r ...
NumberInputDataIndices dw ?
NumberOutputButtonCaps dw ?
NumberOutputValueCaps dw ?
NumberOutputDataIndices dw ?
NumberFeatureButtonCaps dw ?
NumberFeatureValueCaps dw ?
NumberFeatureDataIndices dw ?
_HIDP_CAPS ends


XINPUT_STATE struc ; (sizeof=0x10, align=0x4, copyof_42)
dwPacketNumber dd ?
Gamepad XINPUT_GAMEPAD ? ; XREF: sub_1400A9720+3EA/w
                        ; sub_1400A9720+55A/o ...
XINPUT_STATE ends


XINPUT_GAMEPAD struc ; (sizeof=0xC, align=0x2, copyof_44)
                        ; XREF: XINPUT_STATE/r
wButtons dw ?
bLeftTrigger db ?
bRightTrigger db ?
sThumbLX dw ?           ; XREF: sub_1400A9720+3EA/w
                        ; sub_1400A9720+55A/o
sThumbLY dw ?
sThumbRX dw ?
sThumbRY dw ?           ; XREF: sub_1400A9720+579/r
                        ; sub_1400A9720+584/r
XINPUT_GAMEPAD ends


_JBTYPE struc ; (sizeof=0x10, align=0x10, copyof_47)
                        ; XREF: .data:Buf/r
                        ; .data:stru_140253140/r
Part dq 2 dup(?)
_JBTYPE ends


_HIDD_ATTRIBUTES struc ; (sizeof=0xC, align=0x4, copyof_55)
                        ; XREF: sub_14011A1F0/r
                        ; sub_14011A470/r ...
Size dd ?               ; XREF: sub_14011A1F0+182/w
                        ; sub_14011A470+1D6/w ...
VendorID dw ?           ; XREF: sub_14011A1F0+196/r
                        ; sub_14011A470+1EA/r ...
ProductID dw ?          ; XREF: sub_14011A1F0+1A0/r
                        ; sub_14011A470+1F4/r ...
VersionNumber dw ?
db ? ; undefined
db ? ; undefined
_HIDD_ATTRIBUTES ends


_RTL_CRITICAL_SECTION struc ; (sizeof=0x28, align=0x8, copyof_57)
                        ; XREF: .data:CriticalSection/r
                        ; .data:stru_1402A5D38/r ...
DebugInfo dq ?          ; offset
LockCount dd ?
RecursionCount dd ?
OwningThread dq ?       ; offset
LockSemaphore dq ?      ; offset
SpinCount dq ?
_RTL_CRITICAL_SECTION ends


tagRECT struc ; (sizeof=0x10, align=0x4, copyof_63)
                        ; XREF: sub_14011B280/r
left dd ?               ; XREF: sub_14011B280+CA/r
top dd ?                ; XREF: sub_14011B280+107/r
right dd ?              ; XREF: sub_14011B280+C5/r
bottom dd ?             ; XREF: sub_14011B280+102/r
tagRECT ends


_onexit_table_t struc ; (sizeof=0x18, align=0x8, copyof_64)
                        ; XREF: .data:Table/r
                        ; .data:stru_1402A5E68/r
_first dq ?             ; XREF: __scrt_initialize_onexit_tables+53/w
                        ; __scrt_initialize_onexit_tables+62/w ... ; offset
_last dq ?              ; offset
_end dq ?               ; XREF: __scrt_initialize_onexit_tables+5B/w
                        ; __scrt_initialize_onexit_tables+6A/w ; offset
_onexit_table_t ends


HINSTANCE__ struc ; (sizeof=0x4, align=0x4, copyof_66)
unused dd ?
HINSTANCE__ ends


_CONTEXT struc ; (sizeof=0x4D0, align=0x10, copyof_67)
                        ; XREF: .data:ContextRecord/r
                        ; __scrt_fastfail/r
P1Home dq ?
P2Home dq ?
P3Home dq ?
P4Home dq ?
P5Home dq ?
P6Home dq ?
ContextFlags dd ?
_MxCsr dd ?
SegCs dw ?
SegDs dw ?
SegEs dw ?
SegFs dw ?
SegGs dw ?
SegSs dw ?
EFlags dd ?
Dr0 dq ?
Dr1 dq ?
Dr2 dq ?
Dr3 dq ?
Dr6 dq ?
Dr7 dq ?
_Rax dq ?
_Rcx dq ?               ; XREF: __report_gsfailure+59/w
_Rdx dq ?
_Rbx dq ?
_Rsp dq ?               ; XREF: __report_gsfailure+3F/w
                        ; __report_securityfailure+3F/w ...
_Rbp dq ?
_Rsi dq ?
_Rdi dq ?
_R8 dq ?
_R9 dq ?
_R10 dq ?
_R11 dq ?
_R12 dq ?
_R13 dq ?
_R14 dq ?
_R15 dq ?
_Rip dq ?               ; XREF: __report_gsfailure+2F/w
                        ; __report_gsfailure+46/r ...
anonymous_0 _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB ?
VectorRegister M128A 26 dup(?)
VectorControl dq ?
DebugControl dq ?
LastBranchToRip dq ?
LastBranchFromRip dq ?
LastExceptionToRip dq ?
LastExceptionFromRip dq ?
_CONTEXT ends


_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB union ; (sizeof=0x200, align=0x10, copyof_69)
                        ; XREF: _CONTEXT/r
FltSave XMM_SAVE_AREA32 ?
anonymous_0 _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414 ?
_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB ends


XMM_SAVE_AREA32 struc ; (sizeof=0x200, align=0x10, copyof_70)
                        ; XREF: _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB/r
ControlWord dw ?
StatusWord dw ?
TagWord db ?
Reserved1 db ?
ErrorOpcode dw ?
ErrorOffset dd ?
ErrorSelector dw ?
Reserved2 dw ?
DataOffset dd ?
DataSelector dw ?
Reserved3 dw ?
_MxCsr dd ?
MxCsr_Mask dd ?
FloatRegisters M128A 8 dup(?)
XmmRegisters M128A 16 dup(?)
Reserved4 db 96 dup(?)
XMM_SAVE_AREA32 ends


M128A struc ; (sizeof=0x10, align=0x10, copyof_73)
                        ; XREF: XMM_SAVE_AREA32/r
                        ; XMM_SAVE_AREA32/r ...
Low dq ?
High dq ?
M128A ends


_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414 struc ; (sizeof=0x1A0, align=0x10, copyof_77)
                        ; XREF: _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB/r
Header M128A 2 dup(?)
Legacy M128A 8 dup(?)
_Xmm0 M128A ?
_Xmm1 M128A ?
_Xmm2 M128A ?
_Xmm3 M128A ?
_Xmm4 M128A ?
_Xmm5 M128A ?
_Xmm6 M128A ?
_Xmm7 M128A ?
_Xmm8 M128A ?
_Xmm9 M128A ?
_Xmm10 M128A ?
_Xmm11 M128A ?
_Xmm12 M128A ?
_Xmm13 M128A ?
_Xmm14 M128A ?
_Xmm15 M128A ?
_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414 ends


_EXCEPTION_POINTERS struc ; (sizeof=0x10, align=0x8, copyof_78)
                        ; XREF: .rdata:ExceptionInfo/r
                        ; __scrt_fastfail/r
ExceptionRecord dq ?    ; XREF: __scrt_fastfail+105/w ; offset
ContextRecord dq ?      ; XREF: __scrt_fastfail+111/w ; offset
_EXCEPTION_POINTERS ends


_FILETIME struc ; (sizeof=0x8, align=0x4, copyof_83)
                        ; XREF: __security_init_cookie/r
dwLowDateTime dd ?      ; XREF: __security_init_cookie+23/w
                        ; __security_init_cookie+32/r
dwHighDateTime dd ?
_FILETIME ends


LARGE_INTEGER union ; (sizeof=0x8, align=0x8, copyof_84)
                        ; XREF: __security_init_cookie+5C/r
                        ; __security_init_cookie+67/r ...
anonymous_0 _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart dq ?
LARGE_INTEGER ends


_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E struc ; (sizeof=0x8, align=0x4, copyof_86)
                        ; XREF: LARGE_INTEGER/r
                        ; LARGE_INTEGER/r
LowPart dd ?
HighPart dd ?
_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ends


C_SCOPE_TABLE struc ; (sizeof=0x10, mappedto_87)
                        ; XREF: .rdata:000000014020E694/r
                        ; .rdata:000000014020E714/r ...
Begin dd ?              ; offset rva
End dd ?                ; offset rva pastend
Handler dd ?            ; offset rva
Target dd ?             ; offset rva
C_SCOPE_TABLE ends


_SLIST_HEADER union ; (sizeof=0x10, align=0x10, copyof_246)
                        ; XREF: .data:stru_1402A6450/r
anonymous_0 _SLIST_HEADER::$2AAD3A9E0F86A5BF9BE50654CA710F62 ?
HeaderX64 _SLIST_HEADER::$F9F9EB832D628D73E611400623F67F2B ?
_SLIST_HEADER ends


_SLIST_HEADER::$2AAD3A9E0F86A5BF9BE50654CA710F62 struc ; (sizeof=0x10, align=0x8, copyof_247)
                        ; XREF: _SLIST_HEADER/r
Alignment dq ?
Region dq ?
_SLIST_HEADER::$2AAD3A9E0F86A5BF9BE50654CA710F62 ends


_SLIST_HEADER::$F9F9EB832D628D73E611400623F67F2B struc ; (sizeof=0x10, align=0x8, copyof_248)
                        ; XREF: _SLIST_HEADER/r
_bf_0 dq ?
_bf_8 dq ?
_SLIST_HEADER::$F9F9EB832D628D73E611400623F67F2B ends


__m128i union ; (sizeof=0x10, align=0x10, copyof_253)
                        ; XREF: sub_1400A8BE0/r
m128i_i8 db 16 dup(?)
m128i_i16 dw 8 dup(?)
m128i_i32 dd 4 dup(?)
m128i_i64 dq 2 dup(?)
m128i_u8 db 16 dup(?)
m128i_u16 dw 8 dup(?)
m128i_u32 dd 4 dup(?)
m128i_u64 dq 2 dup(?)
__m128i ends


; enum __TI_flags, copyof_4, bitfield, width 4 bytes
TI_IsConst  = 1
TI_IsVolatile  = 2
TI_IsUnaligned  = 4
TI_IsPure  = 8
TI_IsWinRT  = 10h


; enum __CT_flags, copyof_5, bitfield, width 4 bytes
CT_IsSimpleType  = 1
CT_ByReferenceOnly  = 2
CT_HasVirtualBase  = 4
CT_IsWinRTHandle  = 8
CT_IsStdBadAlloc  = 10h ; XREF: .rdata:__CT??_R0?AVbad_alloc@std@@@8_14006A2C0/s

