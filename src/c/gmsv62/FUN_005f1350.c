/* FUN_005f1350 - 0x005f1350 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005f1350(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 0x10);
    iVar2 = *(int *)(iVar2 + 4);
  } while ((iVar1 == 0) || (**(int **)(iVar1 + 0x98) != param_2));
  return iVar1;
}


