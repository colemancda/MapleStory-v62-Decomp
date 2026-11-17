/* FUN_00673f33 - 0x00673f33 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char * FUN_00673f33(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xc000008e) {
    if (param_1 == 0xc000008d) {
      return s_FLT_DENORMAL_OPERAND_0096a3b0;
    }
    if (param_1 < 0xc0000007) {
      if (param_1 == 0xc0000006) {
        return s_IN_PAGE_ERROR_0096a434;
      }
      if (param_1 == 0x80000001) {
        return s_GUARD_PAGE_0096a444;
      }
      if (param_1 == 0x80000002) {
        return s_DATATYPE_MISALIGNMENT_0096a450;
      }
      if (param_1 == 0x80000003) {
        return s_BREAKPOINT_0096a468;
      }
      if (param_1 == 0x80000004) {
        return s_SINGLE_STEP_0096a474;
      }
      if (param_1 == 0xc0000005) {
        return s_ACCESS_VIOLATION_0096a480;
      }
    }
    else {
      if (param_1 == 0xc0000008) {
        return s_INVALID_HANDLE_0096a3c8;
      }
      if (param_1 == 0xc000001d) {
        return s_ILLEGAL_INSTRUCTION_0096a3d8;
      }
      if (param_1 == 0xc0000025) {
        return s_NONCONTINUABLE_EXCEPTION_0096a3ec;
      }
      if (param_1 == 0xc0000026) {
        return s_INVALID_DISPOSITION_0096a408;
      }
      if (param_1 == 0xc000008c) {
        return s_ARRAY_BOUNDS_EXCEEDED_0096a41c;
      }
    }
  }
  else if (param_1 < 0xc00000fe) {
    if (param_1 == 0xc00000fd) {
      return s_STACK_OVERFLOW_0096a2f8;
    }
    switch(param_1) {
    case 0xc000008e:
      return s_FLT_DIVIDE_BY_ZERO_0096a39c;
    case 0xc000008f:
      return s_FLT_INEXACT_RESULT_0096a388;
    case 0xc0000090:
      return s_FLT_INVALID_OPERATION_0096a370;
    case 0xc0000091:
      return s_FLT_OVERFLOW_0096a360;
    case 0xc0000092:
      return s_FLT_STACK_CHECK_0096a350;
    case 0xc0000093:
      return s_FLT_UNDERFLOW_0096a340;
    case 0xc0000094:
      return s_INT_DIVIDE_BY_ZERO_0096a32c;
    case 0xc0000095:
      return s_INT_OVERFLOW_0096a31c;
    case 0xc0000096:
      return s_PRIV_INSTRUCTION_0096a308;
    }
  }
  else if (param_1 == 0xe8000001) {
    return s_ZTL_DEADLOCK_0096a2dc;
  }
  DAT_00980a80 = 0;
  uVar1 = (*DAT_0097b380)(s_NTDLL_DLL_0096a2ec,param_1,0,&DAT_00980a80,0x80,0);
  (*DAT_0097b4e8)(0xa00,uVar1);
  return &DAT_00980a80;
}


