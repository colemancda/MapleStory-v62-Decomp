/* FUN_008164fd - 0x008164fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_008164fd(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b3c06(param_2);
  if (iVar1 != 0) {
    if ((param_2 == 0) ||
       (iVar2 = (**(code **)(*(int *)(param_2 + 4) + 0x48))(&DAT_0097913c), iVar1 = param_2,
       iVar2 == 0)) {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x5c) = param_2;
    }
  }
  return;
}


