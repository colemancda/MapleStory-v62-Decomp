/* FUN_5180946e - 0x5180946e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180946e(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    (*DAT_5181fc88)(*(int *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x2c) = DAT_51819cf0;
  *(undefined4 *)(param_1 + 0x30) = DAT_51819cf4;
  *(undefined4 *)(param_1 + 0x34) = DAT_51819cf8;
  *(undefined4 *)(param_1 + 0x38) = DAT_51819cfc;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


