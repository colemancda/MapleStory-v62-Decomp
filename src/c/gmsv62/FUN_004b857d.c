/* FUN_004b857d - 0x004b857d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b857d(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int *piVar6;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(extraout_ECX + 0xc) = *(undefined1 *)(iVar2 + 0x11);
  *(uint *)(extraout_ECX + 0xd) = (uint)*(byte *)(iVar2 + 0x12);
  *(undefined4 *)(extraout_ECX + 0x11) = *(undefined4 *)(iVar2 + 0x13);
  iVar4 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x19) = *(undefined4 *)(iVar2 + 0x17);
  iVar4 = iVar4 - *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + 8) = 1;
  piVar6 = (int *)(*(int *)(unaff_EBP + 0xc) + 0xc);
  puVar5 = (undefined4 *)(extraout_ECX + 0x1d);
  *(int *)(unaff_EBP + 0xc) = iVar4;
  while( true ) {
    if (((*(int *)(unaff_EBP + 8) == 0xb) || (*(int *)(iVar4 + (int)piVar6) == 0)) && (*piVar6 == 0)
       ) {
      *puVar5 = 0;
    }
    else {
      uVar3 = FUN_0045e2eb();
      *puVar5 = uVar3;
    }
    if (((*piVar6 == 0) || (*(int *)(*(int *)(unaff_EBP + 0xc) + (int)piVar6) == 0)) ||
       (*(int *)(unaff_EBP + 8) == 0xb)) {
      puVar5[0x31] = 0;
    }
    else {
      uVar3 = FUN_0045e2eb();
      puVar5[0x31] = uVar3;
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    piVar6 = piVar6 + 2;
    puVar5 = puVar5 + 1;
    if (0x30 < *(int *)(unaff_EBP + 8)) break;
    iVar4 = *(int *)(unaff_EBP + 0xc);
  }
  if (*(int *)(*(int *)(unaff_EBP + 0x10) + 0x5c) == 0) {
    FUN_0048b92c(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  uVar3 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar1 = *(byte *)(unaff_EBP + -0x10);
  *(undefined4 *)(extraout_ECX + 0x15) = uVar3;
  if (((bVar1 & 1) != 0) && (*(int *)(unaff_EBP + -0x14) != 0)) {
    FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x14));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


