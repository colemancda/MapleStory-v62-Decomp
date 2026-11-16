/* FUN_5180774f - 0x5180774f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180774f(void *param_1)

{
  int *piVar1;
  
  if (*(int *)((int)param_1 + 0x44) != 0) {
    (*DAT_5181fc88)(*(int *)((int)param_1 + 0x44));
  }
  piVar1 = *(int **)((int)param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  memset(param_1,0,0x48);
  return;
}


