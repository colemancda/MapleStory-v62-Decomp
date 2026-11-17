/* FUN_0044c5b8 - 0x0044c5b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0044c5b8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x3ef);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x40c);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x40d);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x411);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x412);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x437);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x435);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x436);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x438);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  puVar2 = &DAT_009783cc;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0087b2f0(&DAT_009783cc,4,0xf,FUN_0044cba3,FUN_00403621);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


