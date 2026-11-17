/* FUN_008742a0 - 0x008742a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008742a0(int param_1)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == -1) {
    pvVar1 = GetStdHandle(0xfffffff5);
    *(HANDLE *)(param_1 + 4) = pvVar1;
    pvVar1 = GetStdHandle(0xfffffff6);
    *(HANDLE *)(param_1 + 8) = pvVar1;
    if ((*(int *)(param_1 + 4) != -1) && (pvVar1 != (HANDLE)0xffffffff)) {
      uVar2 = FUN_00874310();
      return uVar2;
    }
    GetLastError();
  }
  return 0;
}


