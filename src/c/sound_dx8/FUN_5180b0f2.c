/* FUN_5180b0f2 - 0x5180b0f2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180b0f2(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x88);
    acmStreamUnprepareHeader
              (*(undefined4 *)(param_1 + 0x68),-(uint)(param_1 != 0) & param_1 + 0xcU,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


