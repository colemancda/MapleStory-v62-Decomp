/* FUN_00847720 - 0x00847720 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00847720(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x50) = extraout_ECX;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x38) = uVar3 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x10) = uVar3 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x60) = uVar4;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x5c) = uVar3 & 0xff;
  uVar5 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x58) = uVar5 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
  if ((uVar3 & 0xff) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    uVar3 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x30) = uVar3 & 0xff;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    uVar3 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x24) = uVar3 & 0xff;
  }
  if (*(int *)(unaff_EBP + -0x24) < 1) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    uVar3 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x34) = uVar3 & 0xff;
  }
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x4c) = uVar3 & 0xff;
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x2c);
  *(double *)(unaff_EBP + -0x6c) = (double)*(int *)(unaff_EBP + 8);
  iVar6 = __ftol();
  *(int *)(unaff_EBP + -0x28) = iVar6;
  if ((*(int *)(unaff_EBP + -0x38) == 0) || (*(int *)(unaff_EBP + -0x10) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = (*(int *)(unaff_EBP + -0x5c) * *(int *)(unaff_EBP + 8)) / 100;
  }
  *(uint *)(unaff_EBP + -0x58) =
       ~-(uint)(*(int *)(unaff_EBP + -0x10) != 0) & *(uint *)(unaff_EBP + -0x60);
  iVar7 = __ftol();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x68) = iVar7;
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) - (iVar7 + iVar6);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x24) = (*(int *)(unaff_EBP + -0x24) * iVar1) / 100;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x60,0x126);
  uVar4 = *puVar8;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00434e21(unaff_EBP + -0x14,uVar4,*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x60) + -0xc);
  }
  if (0 < iVar6) {
    if (*(int *)(unaff_EBP + -0x4c) < 1) {
      puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xe6e);
      uVar4 = *puVar8;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00434e21(unaff_EBP + -0x20,uVar4,iVar6);
      iVar6 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 7;
    }
    else {
      *(double *)(unaff_EBP + -100) = (double)*(int *)(unaff_EBP + -0x4c) * _DAT_008e8cd0;
      uVar4 = __ftol();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xe6f);
      uVar4 = *puVar8;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uVar9 = __ftol();
      FUN_00434e21(unaff_EBP + -0x20,uVar4,*(undefined4 *)(unaff_EBP + -0x28),uVar9);
      iVar6 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 7;
    }
    if (iVar6 != 0) {
      FUN_00434e38(iVar6 + -0xc);
    }
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x129);
    uVar4 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00434e21(unaff_EBP + -0x3c,uVar4,*(undefined4 *)(unaff_EBP + -0x2c));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
  }
  iVar6 = *(int *)(unaff_EBP + -0x50);
  if (*(int *)(iVar6 + 0x2050) != 0) {
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x127);
    uVar4 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00434e21(unaff_EBP + -0x48,uVar4,*(undefined4 *)(unaff_EBP + -0x68));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
  }
  if ((*(int *)(unaff_EBP + -0x30) != 0) && (*(int *)(unaff_EBP + -0x38) != 0)) {
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0xe70);
    uVar4 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00434e21(unaff_EBP + -0x44,uVar4,*(undefined4 *)(unaff_EBP + -0x30),
                 *(undefined4 *)(unaff_EBP + -0x54));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
  }
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x128);
    uVar4 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00434e21(unaff_EBP + -0x40,uVar4,*(undefined4 *)(unaff_EBP + -0x58));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x12a);
    uVar4 = *puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00434e21(unaff_EBP + -0x1c,uVar4,*(undefined4 *)(unaff_EBP + -0x24));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,299);
      uVar4 = *puVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00434e21(unaff_EBP + -0x18,uVar4,*(undefined4 *)(unaff_EBP + -0x34));
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
  }
  if ((*(int *)(unaff_EBP + -0x10) == 0) && (DAT_00979520 != 0)) {
    if (*(int *)(unaff_EBP + -0x38) == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 0;
    }
    FUN_00712b76(*(undefined4 *)(unaff_EBP + -0x14),uVar4,1);
    pcVar2 = *(char **)(unaff_EBP + -0x3c);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      FUN_00712b76(pcVar2,3,1);
    }
    pcVar2 = *(char **)(unaff_EBP + -0x20);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      FUN_00712b76(pcVar2,3,1);
    }
    pcVar2 = *(char **)(unaff_EBP + -0x48);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      FUN_00712b76(pcVar2,3,1);
    }
    pcVar2 = *(char **)(unaff_EBP + -0x44);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      FUN_00712b76(pcVar2,3,1);
    }
    pcVar2 = *(char **)(unaff_EBP + -0x40);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      FUN_00712b76(pcVar2,3,1);
    }
    iVar1 = *(int *)(unaff_EBP + -0x5c);
    if ((0 < iVar1) && (*(int *)(iVar6 + 0x3268) != iVar1)) {
      *(int *)(iVar6 + 0x3268) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x68,0xe71);
      uVar4 = *(undefined4 *)(iVar6 + 0x3268);
      uVar9 = *puVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00434e21(unaff_EBP + -0x34,uVar9,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00414ebb();
      FUN_00471102(unaff_EBP + -0x34,0xc);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
  }
  else {
    FUN_00471102(unaff_EBP + -0x14,7);
    if ((*(char **)(unaff_EBP + -0x1c) != (char *)0x0) && (**(char **)(unaff_EBP + -0x1c) != '\0'))
    {
      FUN_00471102(unaff_EBP + -0x1c,7);
    }
    if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0'))
    {
      FUN_00471102(unaff_EBP + -0x18,7);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


