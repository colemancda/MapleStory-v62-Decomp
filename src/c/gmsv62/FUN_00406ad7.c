/* FUN_00406ad7 - 0x00406ad7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00406ad7(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 8) == 0x26) {
    _memset((void *)(unaff_EBP + -0xdc),0,0xc4);
    puVar5 = *(undefined4 **)(unaff_EBP + 0x14);
    *(undefined4 *)(unaff_EBP + -0xdc) = *puVar5;
    *(undefined4 *)(unaff_EBP + -0xd8) = puVar5[1];
    uVar1 = puVar5[4];
    *(undefined4 *)(unaff_EBP + -0xd0) = puVar5[3];
    *(undefined4 *)(unaff_EBP + -0xcc) = uVar1;
    goto LAB_00406c0c;
  }
  FUN_00879c20(unaff_EBP + -0xdc,*(undefined4 *)(unaff_EBP + 0x14));
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  *(undefined4 *)(unaff_EBP + -0xd4) = 0;
  piVar4 = &DAT_00964178;
  do {
    iVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    *(undefined4 *)(unaff_EBP + -0xdc + iVar3 * 4) = 0;
  } while ((int)piVar4 < 0x964188);
  iVar3 = *(int *)(unaff_EBP + -200);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if ((iVar3 / 10000 == 0x69) && (*(int *)(unaff_EBP + -0xc4) != 0)) {
    iVar3 = FUN_005540b6(iVar3);
    if (iVar3 != 0) {
LAB_00406bba:
      iVar3 = *(int *)(unaff_EBP + -200);
      *(undefined4 *)(unaff_EBP + -0xc4) = 0;
      goto LAB_00406bc6;
    }
    iVar3 = FUN_005540b6(*(undefined4 *)(unaff_EBP + -0xc4));
    if (iVar3 == 0) goto LAB_00406bba;
LAB_00406bca:
    iVar3 = (-(uint)(iVar2 != 0) & 0x3f2) + 0xfdea4;
    *(int *)(unaff_EBP + -200) = iVar3;
  }
  else {
LAB_00406bc6:
    if (iVar3 == 0) goto LAB_00406bca;
  }
  if ((*(int *)(unaff_EBP + -0xc4) == 0) && (iVar3 / 10000 != 0x69)) {
    *(uint *)(unaff_EBP + -0xc4) = (-(uint)(iVar2 != 0) & 0x3f5) + 0x102cba;
  }
LAB_00406c0c:
  if (*(int *)(unaff_EBP + -0xd8) == 0xf4aca) {
    *(undefined4 *)(unaff_EBP + -0xd8) = 0;
  }
  if (*(int *)(unaff_EBP + -0xcc) == 0xfbf58) {
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  if (*(int *)(unaff_EBP + -0xc0) == 0x105c19) {
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  }
  if (*(int *)(unaff_EBP + -0xbc) == 0x1082f6) {
    *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  }
  if (*(int *)(unaff_EBP + -0xb8) == 0x10d0d7) {
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  }
  if (*(int *)(unaff_EBP + 0x20) == 0x19f8d3) {
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
  }
  iVar3 = *(int *)(unaff_EBP + 0x24) / 10000;
  if ((iVar3 == 0xbe) || (iVar3 == 0xc1)) {
    *(undefined4 *)(unaff_EBP + -0xb4) = 0;
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0041094e(*(undefined4 *)(unaff_EBP + 0x24),*(undefined4 *)(unaff_EBP + -0x18),
                 unaff_EBP + -0xdc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x28));
    FUN_0040fa53(unaff_EBP + -0xdc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c));
    *(undefined4 *)(unaff_EBP + -0x18) = 0x27;
    if ((*(int *)(unaff_EBP + 8) == 0x24) || (*(int *)(unaff_EBP + 8) == 0x25)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0x25;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00416f40();
  }
  if (*(int *)(unaff_EBP + 8) == 0x4b) {
    *(undefined4 *)(unaff_EBP + -0xb4) = 0;
    *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  }
  if (*(int *)(unaff_EBP + 0x2c) != 0) {
    iVar3 = 0;
    puVar5 = (undefined4 *)(unaff_EBP + -0xdc);
    do {
      if ((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 3)) && (iVar3 != 4)) {
        *puVar5 = 0;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < 0x31);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0040fbf2(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 0x10),
               unaff_EBP + -0xdc,unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x20));
  FUN_0040f898(unaff_EBP + -0xdc,unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00416f40();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


