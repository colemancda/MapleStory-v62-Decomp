/* FUN_0070ee28 - 0x0070ee28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0070ee28(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_0087a024(*param_2,5);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + (uVar1 % *(uint *)(param_1 + 8)) * 4);
    if (iVar2 != 0) {
      do {
        if (*(int *)(iVar2 + 8) == *param_2) {
          if (param_3 != 0) {
            FUN_0070eda5();
            FUN_0070edc2();
            *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar2 + 0x10);
          }
          return iVar2 + 0xc;
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != 0);
    }
  }
  return 0;
}


