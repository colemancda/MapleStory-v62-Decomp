/* FUN_00457cf8 - 0x00457cf8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00457cf8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 4) + -4);
  }
  uVar2 = param_2 + *(int *)(param_1 + 8);
  if (uVar1 < uVar2) {
    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 4) + -4);
    }
    do {
      uVar1 = uVar1 * 2;
    } while (uVar1 < uVar2);
    FUN_0045ebec(uVar1,0,(int)&param_2 + 3);
  }
  return;
}


