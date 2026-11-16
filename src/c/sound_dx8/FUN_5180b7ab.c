/* FUN_5180b7ab - 0x5180b7ab in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_5180b7ab(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = FUN_5180d021();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_5180b838();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_51802c9b((void *)(unaff_EBP + -0x24),0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x24),(ThrowInfo *)&DAT_5181a2e0);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = 0;
  iVar1 = FUN_5180d98b(puVar2,(int *)(unaff_EBP + -0x10));
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    FUN_5180e990(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


