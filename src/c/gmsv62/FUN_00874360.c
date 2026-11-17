/* FUN_00874360 - 0x00874360 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_00874360(undefined4 *param_1)

{
  BOOL BVar1;
  HANDLE pvVar2;
  undefined4 *local_4;
  
  if (param_1[1] == -1) {
    return 0;
  }
  local_4 = param_1;
  BVar1 = SetStdHandle(0xfffffff6,(HANDLE)param_1[0x58d]);
  if (BVar1 == 0) {
    return 0;
  }
  BVar1 = SetStdHandle(0xfffffff5,(HANDLE)param_1[0x58e]);
  if (BVar1 == 0) {
    return 0;
  }
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[4] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    return 0;
  }
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00874460,param_1,0,(LPDWORD)&local_4);
  *param_1 = pvVar2;
  return -(uint)(pvVar2 != (HANDLE)0x0) & (uint)local_4;
}


