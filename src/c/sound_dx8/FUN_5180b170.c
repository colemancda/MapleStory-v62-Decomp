/* FUN_5180b170 - 0x5180b170 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __fastcall FUN_5180b170(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = acmStreamSize(*(undefined4 *)(param_1 + 0x68),
                        *(int *)(*(int *)(param_1 + 100) + 0x20) -
                        *(int *)(*(int *)(param_1 + 100) + 0x1c),&local_8,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return local_8;
}


