/* FUN_00598dac - 0x00598dac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00598dac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = param_2;
  if (*(int *)(param_1 + 0x2c) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)(param_1 + 0x2c) + -4);
  }
  if (local_8 < param_2) {
    FUN_004b9850(param_2,0,(int)&param_2 + 3);
    if (local_8 < iVar1) {
      iVar2 = local_8 * 0x1d;
      iVar1 = iVar1 - local_8;
      do {
        _memset((void *)(iVar2 + *(int *)(param_1 + 0x2c)),0,0x1d);
        iVar2 = iVar2 + 0x1d;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


