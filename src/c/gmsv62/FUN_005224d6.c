/* FUN_005224d6 - 0x005224d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005224d6(int param_1,int param_2)

{
  int iVar1;
  int aiStack_24 [5];
  
  if (param_2 == 1) {
    aiStack_24[4] = 0;
    aiStack_24[3] = 0;
    aiStack_24[2] = 0;
    aiStack_24[1] = 0;
    aiStack_24[0] = param_1;
    FUN_00679d22(aiStack_24,0xcc3);
    iVar1 = FUN_007db791();
    if (iVar1 != 6) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      aiStack_24[4] = 0x52252a;
      FUN_00815de9();
    }
  }
  return;
}


