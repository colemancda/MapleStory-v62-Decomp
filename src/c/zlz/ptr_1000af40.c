/* ptr_1000af40 - 0x1000af40 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int __thiscall ptr_1000af40(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    param_3 = 0;
    do {
      while( true ) {
        if (*(int *)(param_1 + 0x20) == 0) {
          FUN_1000afd0(param_1);
        }
        *(int *)(param_1 + 0x10) = param_2;
        *(int *)(param_1 + 0x14) = iVar3;
        uVar1 = FUN_100047c0((int *)(param_1 + 0x10),0);
        if (-1 < (int)uVar1) break;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
        FUN_1000abe0(uVar1);
      }
      iVar2 = iVar3 - *(int *)(param_1 + 0x14);
      param_3 = param_3 + iVar2;
      param_2 = param_2 + iVar2;
      iVar3 = iVar3 - iVar2;
    } while (*(int *)(param_1 + 0x14) != 0);
    return param_3;
  }
  return 0;
}


