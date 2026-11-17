/* FUN_0072f48a - 0x0072f48a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0072f48a(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_3c;
  int iStack_38;
  code *pcStack_34;
  
  FUN_00879bb8();
  pcStack_34 = (code *)0x0;
  iStack_38 = 1;
  puStack_3c = (undefined4 *)0x6;
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_00789e42(2,3,0x9c);
  DAT_0097be14 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_34 = ptr_0045e147;
  iStack_38 = 6;
  puStack_3c = (undefined4 *)0x8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x15e);
  extraout_ECX[0x16b] = 0;
  extraout_ECX[0x16d] = 0;
  piVar3 = extraout_ECX + 0x16e;
  *piVar3 = 0;
  extraout_ECX[0x16f] = 0;
  extraout_ECX[0x171] = 0;
  extraout_ECX[0x172] = 0;
  extraout_ECX[0x170] = &PTR_FUN_008eac4c;
  extraout_ECX[0x173] = 0;
  extraout_ECX[0x174] = 0;
  extraout_ECX[0x177] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x178] = 0;
  extraout_ECX[0x179] = 0;
  extraout_ECX[0x17a] = 0;
  pcStack_34 = (code *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *extraout_ECX = &PTR_FUN_008f0ef8;
  extraout_ECX[1] = &PTR_FUN_008f0eac;
  extraout_ECX[2] = &PTR_FUN_008f0ea8;
  iStack_38 = 0x72f560;
  piVar2 = (int *)FUN_007d4a9a();
  iVar5 = *piVar3;
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *(int *)(unaff_EBP + 8) = iVar5;
  if (iVar5 != iVar1) {
    *piVar3 = iVar1;
    FUN_0045e787();
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      pcStack_34 = (code *)0x72f587;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcStack_34 = (code *)0x72f598;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  pcStack_34 = (code *)(unaff_EBP + 8);
  iStack_38 = 0x72f5a3;
  piVar3 = (int *)FUN_007d4a9a();
  piVar3 = (int *)*piVar3;
  piVar2 = (int *)extraout_ECX[0x16f];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar2 != piVar3) {
    extraout_ECX[0x16f] = piVar3;
    FUN_0045e787();
    if (piVar2 != (int *)0x0) {
      pcStack_34 = (code *)0x72f5cc;
      (**(code **)(*piVar2 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    pcStack_34 = (code *)0x72f5dd;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  pcStack_34 = (code *)(unaff_EBP + 8);
  extraout_ECX[0x175] = 0;
  iStack_38 = 0x72f5f8;
  puVar4 = (undefined4 *)FUN_00679d86();
  iStack_38 = *puVar4;
  pcStack_34 = (code *)(extraout_ECX + 0x173);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_3c = (undefined4 *)0x72f60c;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00402676();
  pcStack_34 = (code *)0x72f625;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puVar4 = &DAT_00980690;
  iStack_38 = 0x72f633;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    pcStack_34 = (code *)0x72f63f;
    FUN_00878dfb();
    puVar4 = extraout_ECX_00;
  }
  pcStack_34 = (code *)0xff9c6563;
  iStack_38 = 9;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_3c = puVar4;
  FUN_00679e4e(&puStack_3c,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  pcStack_34 = (code *)0x72f681;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    pcStack_34 = (code *)0x72f68c;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  iStack_38 = unaff_EBP + -0x18;
  puStack_3c = (undefined4 *)extraout_ECX[0x155];
  FUN_0047c974();
  pcStack_34 = (code *)0x0;
  iStack_38 = 1;
  puStack_3c = (undefined4 *)0xa;
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),0xb0,0x13b);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


