/* FUN_5180392e - 0x5180392e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5180392e(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  if (*(int *)(extraout_ECX + 0x58) == 0) {
    puVar1 = FUN_518019c0();
    *(uint **)(unaff_EBP + -0x10) = puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar1 == (uint *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_51803e3c();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(extraout_ECX + 0x58) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x20),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_5181a2e0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(extraout_ECX + 0x58);
}


