/* FUN_5180b8e1 - 0x5180b8e1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180b8e1(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_518199e8;
  extraout_ECX[0x16] = &PTR_LAB_518199e0;
  extraout_ECX[0x17] = &PTR_LAB_518199e4;
  piVar4 = (int *)extraout_ECX[0x1a];
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x48))(piVar4);
  }
  iVar1 = extraout_ECX[0x19];
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 0)) && (extraout_ECX[0x1a] != 0)) {
    *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(iVar1 + 0x38);
    FUN_518017b5();
    iVar2 = extraout_ECX[0x19];
    uVar3 = *(uint *)(iVar2 + 0x48);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (uVar3 < 0x10) {
      piVar4 = (int *)FUN_5180ce5f((void *)(iVar2 + 0x40));
      FUN_51804af0(piVar4,(int *)extraout_ECX[0x1a]);
    }
    piVar4 = (int *)(iVar1 + 0x3c);
    *piVar4 = *piVar4 + -1;
    iVar2 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
  }
  if ((undefined4 *)extraout_ECX[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[0x1c])(1);
  }
  if (extraout_ECX[0x1b] != 0) {
    acmStreamClose(extraout_ECX[0x1b],0);
  }
  piVar4 = (int *)extraout_ECX[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  iVar1 = extraout_ECX[0x19];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_51803161((int)(extraout_ECX + 0x18));
    extraout_ECX[0x19] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_5180cc0b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180cb4a(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


