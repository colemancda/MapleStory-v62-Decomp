/* FUN_51806e96 - 0x51806e96 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51806e96(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[3] = 0;
  FUN_51803727(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_5181986c;
  FUN_51807b5c();
  extraout_ECX[6] = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x15] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_51804b19();
  if (iVar2 != 0) {
    FUN_51807c1a(extraout_ECX + 7,iVar2 + 0x6c);
    puVar4 = (undefined4 *)extraout_ECX[8];
    *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
    FUN_518017b5();
    iVar2 = extraout_ECX[8];
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puVar3 = (undefined4 *)FUN_51807d25((void *)(iVar2 + 8));
    *puVar3 = extraout_ECX;
    extraout_ECX[6] = puVar3;
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar4 = 0;
      puVar4 = (undefined4 *)FUN_51806f3a();
      return puVar4;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


