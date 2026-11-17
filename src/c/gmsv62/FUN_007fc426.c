/* FUN_007fc426 - 0x007fc426 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007fc426(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x240) < 1) {
    iVar1 = _rand();
    if (iVar1 % 5 == 0) {
      iVar1 = _rand();
      *(int *)(param_1 + 0x240) = (iVar1 % 1000 + 500) / 0x5a;
      iVar1 = _rand();
      *(uint *)(param_1 + 0x23c) = (-(uint)(iVar1 % 2 != 0) & 0xfffffffe) + 1;
    }
    else {
      iVar1 = _rand();
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(int *)(param_1 + 0x240) = (iVar1 % 2000 + 1000) / 0x5a;
    }
    FUN_007f7fd3(*(undefined4 *)(param_1 + 0x23c),0);
  }
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
  FUN_007f1845(param_2);
  if (*(int *)(param_1 + 0x23c) != 0) {
    fVar2 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
    fVar3 = (float10)FUN_004f1993(param_1 + 0x80,*(undefined4 *)(param_1 + 0x90));
    if (fVar3 == (float10)(double)fVar2) {
      iVar1 = *(int *)(param_1 + 0x23c);
      *(int *)(param_1 + 0x23c) = -iVar1;
      FUN_007f7fd3(-iVar1,0);
    }
  }
  return 1;
}


