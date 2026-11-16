/* FUN_5180ec9f - 0x5180ec9f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5180ec9f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5181fe4c) {
      DAT_5181fe4c = DAT_5181fe4c + -1;
      goto LAB_5180ecb5;
    }
LAB_5180ecdd:
    uVar1 = 0;
  }
  else {
LAB_5180ecb5:
    _DAT_5181ff1c = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5181ff28 = malloc(0x80);
      if (DAT_5181ff28 == (undefined4 *)0x0) goto LAB_5180ecdd;
      *DAT_5181ff28 = 0;
      DAT_5181ff24 = DAT_5181ff28;
      initterm(&DAT_5181e000,&DAT_5181e088);
      DAT_5181fe4c = DAT_5181fe4c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5181ff28, puVar2 = DAT_5181ff24, DAT_5181ff28 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5181ff28;
        }
      }
      free(_Memory);
      DAT_5181ff28 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


