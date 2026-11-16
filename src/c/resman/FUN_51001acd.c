/* FUN_51001acd - 0x51001acd in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


uint * FUN_51001acd(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar7;
  
  FUN_51005950();
  uVar6 = *(uint *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (uVar6 < 0x21) {
    uVar7 = (uint)(0x10 < uVar6);
LAB_51001b29:
    if ((int)uVar7 < 0) {
      uVar4 = (*DAT_5100949c)(0,uVar6 + 4);
      puVar5 = (uint *)(*DAT_51009494)(uVar4);
      *puVar5 = uVar6;
      puVar5 = puVar5 + 1;
      goto LAB_51001bbd;
    }
  }
  else {
    if (0x40 < uVar6) {
      uVar7 = (-(uint)(0x80 < uVar6) & 0xfffffffc) + 3;
      goto LAB_51001b29;
    }
    uVar7 = 2;
  }
  if (uVar7 == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x40;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x10;
  }
  else if (uVar7 == 1) {
    *(undefined4 *)(unaff_EBP + 8) = 0x20;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x20;
  }
  else if (uVar7 == 2) {
    *(undefined4 *)(unaff_EBP + 8) = 0x10;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x40;
  }
  else if (uVar7 == 3) {
    *(undefined4 *)(unaff_EBP + 8) = 8;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x80;
  }
  else {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 4);
  FUN_510011e9();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (uint *)(extraout_ECX + 0xc + uVar7 * 4);
  if (*(int *)(extraout_ECX + 0xc + uVar7 * 4) == 0) {
    uVar6 = FUN_51001d97(*(int *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 8));
    iVar3 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(uVar6 - 8) = *(undefined4 *)(iVar3 + 0x1c + uVar7 * 4);
    *(uint *)(iVar3 + 0x1c + uVar7 * 4) = uVar6;
    *puVar2 = uVar6;
  }
  puVar5 = (uint *)*puVar2;
  *puVar2 = *puVar5;
  piVar1 = (int *)(extraout_ECX + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
LAB_51001bbd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


