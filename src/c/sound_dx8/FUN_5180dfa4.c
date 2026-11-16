/* FUN_5180dfa4 - 0x5180dfa4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180dfa4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[10] == 0) {
    FUN_5180e990(0x80004003);
  }
  piVar1 = FUN_5180e91a((int *)param_1[10]);
  param_1[0x19] = 0;
  param_1[0x18] = (int)piVar1;
  iVar2 = (*DAT_5181fadc)();
  param_1[0x1b] = 0;
  param_1[0x1a] = iVar2;
  iVar2 = FUN_51804b19();
  (**(code **)(*param_1 + 0x4c))(*(undefined4 *)(iVar2 + 0x14));
  return;
}


