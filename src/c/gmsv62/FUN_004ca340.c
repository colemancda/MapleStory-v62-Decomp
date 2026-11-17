/* FUN_004ca340 - 0x004ca340 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_004ca340(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_006509a1(param_3);
  if ((*(int *)(iVar2 + 0x1ac) == 0) || (iVar1 = *(int *)(*(int *)(iVar2 + 0x1ac) + -4), iVar1 == 0)
     ) {
    if ((*(int *)(param_1 + 0x60) == 0) ||
       (iVar2 = *(int *)(*(int *)(param_1 + 0x60) + -4), iVar2 == 0)) {
      *param_2 = 0;
      return param_2;
    }
    iVar3 = _rand();
    iVar3 = iVar3 % iVar2;
    iVar2 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar3 = _rand();
    iVar3 = iVar3 % iVar1;
    iVar2 = *(int *)(iVar2 + 0x1ac);
  }
  iVar2 = *(int *)(iVar2 + iVar3 * 4);
  *param_2 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  return param_2;
}


