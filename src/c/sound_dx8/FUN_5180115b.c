/* FUN_5180115b - 0x5180115b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180115b(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_518017b5();
  if (*(int *)(param_1 + 0x14) != 2) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  (*DAT_5181fa10)(*(undefined4 *)(param_1 + 0x18));
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = (*DAT_5181f9e4)();
  if (iVar3 != iVar2) {
    while (*(int *)(param_1 + 0x14) == 1) {
      (*DAT_5181fa24)(1);
    }
  }
  return;
}


