/* FUN_006156e9 - 0x006156e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006156e9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  int iStack_1c;
  
  FUN_00879bb8();
  iStack_1c = 0x615700;
  iVar2 = FUN_00614192();
  if ((*(uint *)(extraout_ECX + 0xe8) < 0x80000000) || (iVar2 < 0xf)) goto LAB_006158da;
  if (*(char *)(DAT_00978368 + 0x2058) != '\0') {
    iStack_1c = 0x36c;
    uVar3 = FUN_00679d22(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_1c = 8;
    FUN_00471102(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_1c = *(int *)(unaff_EBP + -0x18) + -0xc;
      FUN_00434e38();
    }
    goto LAB_006158da;
  }
  iVar1 = *(int *)(extraout_ECX + 0x78);
  iVar9 = 0;
  iVar8 = 0;
  while( true ) {
    iVar6 = 0;
    if (*(int *)(iVar1 + 0x4c) != 0) {
      iVar6 = *(int *)(*(int *)(iVar1 + 0x4c) + -4);
    }
    if (iVar6 <= iVar9) {
      piVar7 = *(int **)(unaff_EBP + -0x18);
      goto LAB_00615797;
    }
    piVar7 = (int *)(*(int *)(iVar1 + 0x4c) + iVar8);
    if ((*piVar7 <= iVar2) && (iVar2 <= piVar7[1])) break;
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0xc;
  }
  piVar7 = piVar7 + 2;
LAB_00615797:
  iVar2 = 0;
  if (*(int *)(iVar1 + 0x4c) != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x4c) + -4);
  }
  if (((iVar9 == iVar2) || (*piVar7 == 0)) ||
     (iVar2 = *(int *)(*piVar7 + -4), *(int *)(unaff_EBP + -0x18) = iVar2, iVar2 == 0))
  goto LAB_006158da;
  iStack_1c = 0x6157cd;
  uVar4 = FUN_004133f0();
  uVar5 = *(uint *)(unaff_EBP + -0x18);
  iVar2 = *piVar7;
  *(int **)(unaff_EBP + -0x18) = &iStack_1c;
  iVar2 = iVar2 + (uVar4 % uVar5) * 8;
  FUN_0040810c(iVar2);
  uVar3 = FUN_0061d152();
  iVar8 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(iVar2 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
    if ((iVar1 == 0) ||
       (iVar1 = *(int *)(iVar1 + -4), *(int *)(unaff_EBP + -0x18) = iVar1, iVar1 == 0)) {
      iStack_1c = 0x61582b;
      uVar5 = FUN_004133f0();
    }
    else {
      iStack_1c = 0x61581b;
      uVar5 = FUN_004133f0();
      uVar5 = uVar5 % *(uint *)(unaff_EBP + -0x18);
    }
    iVar2 = *(int *)(iVar2 + 4);
    iStack_1c = 0x615838;
    FUN_00408b49();
    iStack_1c = 0x615840;
    FUN_00402fa6();
    iVar8 = *(int *)(iVar2 + uVar5 * 4);
    *(int *)(unaff_EBP + -0x10) = iVar8;
  }
  if (-1 < *(int *)(unaff_EBP + -0x14)) {
    iStack_1c = 0x615863;
    iVar2 = FUN_006158e9();
    if (iVar2 == 0) {
      iStack_1c = 0x61587b;
      iVar2 = FUN_00615923();
      if (iVar2 != 0) goto LAB_0061587f;
      uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    else {
LAB_0061587f:
      uVar3 = 8;
    }
    *(undefined4 *)(extraout_ECX + 0xe8) = uVar3;
    iStack_1c = 0x615894;
    FUN_006142ef();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      uVar3 = 0;
    }
    else {
      iStack_1c = 0x6158a0;
      uVar3 = FUN_00409205();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_1c = -1;
    FUN_00414edd(uVar3);
    iStack_1c = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00615697();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_1c = 0x6158ce;
    FUN_00414ebb();
    iVar8 = *(int *)(unaff_EBP + -0x10);
  }
  if (iVar8 != 0) {
    iStack_1c = 0x6158da;
    FUN_004030b1();
  }
LAB_006158da:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


