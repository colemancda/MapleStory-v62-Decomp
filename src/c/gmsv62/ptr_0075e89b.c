/* ptr_0075e89b - 0x0075e89b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0075e89b(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 2000) {
    uVar1 = *(uint *)(param_1 + 0x84);
    if (-1 < (int)uVar1) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x7c) != 0) {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x7c) + -4);
      }
      if (uVar1 < uVar2) {
        FUN_0075fa3f(*(undefined4 *)(*(int *)(param_1 + 0x7c) + uVar1 * 4));
      }
    }
  }
  else if ((param_2 == 0x7d1) && (uVar1 = *(uint *)(param_1 + 0x84), -1 < (int)uVar1)) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x7c) + -4);
    }
    if (uVar1 < uVar2) {
      FUN_0075fc82(*(undefined4 *)(*(int *)(param_1 + 0x7c) + uVar1 * 4));
    }
  }
  return;
}


