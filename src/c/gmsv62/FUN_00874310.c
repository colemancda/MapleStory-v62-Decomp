/* FUN_00874310 - 0x00874310 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00874310(undefined4 *param_1)

{
  HANDLE pvVar1;
  undefined4 *local_4;
  
  local_4 = param_1;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[4] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    return (undefined4 *)0x0;
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00874460,param_1,0,(LPDWORD)&local_4);
  *param_1 = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return local_4;
}


