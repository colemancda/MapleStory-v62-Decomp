/* FUN_51809aa0 - 0x51809aa0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_51809aa0(void)

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
  extraout_ECX[1] = 0;
  FUN_51803727(extraout_ECX + 2);
  *extraout_ECX = &PTR_LAB_51819934;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[5] = 0;
  FUN_5180a3e7((int)(extraout_ECX + 4));
  extraout_ECX[6] = extraout_ECX[5] + 0xc;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 1;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x15] = 0;
  *(undefined4 **)(extraout_ECX[5] + 0x14) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[9] = 0;
  iVar2 = FUN_51804b19();
  if (iVar2 != 0) {
    FUN_5180a3ab(extraout_ECX + 7,iVar2 + 0x74);
    puVar4 = (undefined4 *)extraout_ECX[8];
    *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
    FUN_518017b5();
    iVar2 = extraout_ECX[8];
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puVar3 = (undefined4 *)FUN_5180a40f((void *)(iVar2 + 8));
    *puVar3 = extraout_ECX;
    extraout_ECX[9] = puVar3;
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar4 = 0;
      puVar4 = (undefined4 *)FUN_51809b69();
      return puVar4;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


