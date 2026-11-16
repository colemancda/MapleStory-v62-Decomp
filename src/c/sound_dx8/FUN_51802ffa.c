/* FUN_51802ffa - 0x51802ffa in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51802ffa(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int iVar2;
  
  FUN_5180ea30();
  iVar2 = -0x7ff8fff2;
  puVar1 = (undefined4 *)FUN_518033c9();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_51806e96();
    *puVar1 = &PTR_FUN_51818370;
    puVar1[1] = &PTR_FUN_5181836c;
    puVar1[2] = &PTR_FUN_51818368;
    InterlockedIncrement(&DAT_5181f8a0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
      (**(code **)puVar1[1])(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


