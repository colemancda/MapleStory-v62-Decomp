/* FUN_00846e20 - 0x00846e20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00846e20(void)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iStack_20;
  uint uStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x846e45;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\x01') {
    uStack_1c = 0x846e5a;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    uStack_1c = 0x846e64;
    uVar2 = FUN_00424561();
    uStack_1c = 0x12e;
    iStack_20 = unaff_EBP + -0x14;
    piVar4 = (int *)FUN_00679d22();
    iStack_20 = *piVar4;
    uStack_1c = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      uStack_1c = *(int *)(unaff_EBP + -0x14) + -0xc;
      iStack_20 = 0x846ea7;
      FUN_00434e38();
    }
    if (DAT_00979520 != 0) {
      uStack_1c = 1;
      iStack_20 = 0;
      FUN_00712b76(*(undefined4 *)(unaff_EBP + -0x10));
    }
    if (uVar2 != 0) {
      uStack_1c = 0x12f;
      iStack_20 = unaff_EBP + -0x14;
      piVar4 = (int *)FUN_00679d22();
      iStack_20 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_1c = (uint)uVar2;
      FUN_00434e21(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        uStack_1c = *(int *)(unaff_EBP + -0x14) + -0xc;
        iStack_20 = 0x846ef8;
        FUN_00434e38();
      }
      if (DAT_00979520 != 0) {
        uStack_1c = 1;
        iStack_20 = 3;
        FUN_00712b76(*(undefined4 *)(unaff_EBP + -0x10));
      }
    }
    if (0 < *(int *)(unaff_EBP + 8)) {
      uStack_1c = *(undefined4 *)(unaff_EBP + 8);
      iStack_20 = 0x846f23;
      FUN_00845f10();
    }
    goto LAB_00847126;
  }
  if (cVar1 == '\0') {
    uStack_1c = 0x846f37;
    uVar3 = FUN_0042459a();
    uStack_1c = 0x846f40;
    iVar5 = FUN_0042459a();
    iStack_20 = unaff_EBP + 8;
    uStack_1c = uVar3;
    FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
      uStack_1c = 0x78;
      *(int **)(unaff_EBP + -0x18) = &iStack_20;
      FUN_007d4a9a(&iStack_20,0);
      FUN_007d3a22(unaff_EBP + 8);
      if (iVar5 < 2) {
        uStack_1c = 0x132;
        iStack_20 = unaff_EBP + -0x18;
        piVar4 = (int *)FUN_00679d22();
        uStack_1c = *(undefined4 *)(unaff_EBP + 8);
        iStack_20 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00434e21(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      else {
        uStack_1c = 0x131;
        iStack_20 = unaff_EBP + -0x18;
        puVar6 = (undefined4 *)FUN_00679d22();
        uStack_1c = *(undefined4 *)(unaff_EBP + 8);
        uVar3 = *puVar6;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_20 = iVar5;
        FUN_00434e21(unaff_EBP + -0x10,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      uStack_1c = 0x846ff3;
      FUN_00414ebb();
      if (DAT_00979520 != 0) {
        uStack_1c = 1;
        iStack_20 = 0;
        FUN_00712b76(*(undefined4 *)(unaff_EBP + -0x10));
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == '\x02') {
    uStack_1c = 0x847023;
    uStack_1c = FUN_0042459a();
    iStack_20 = unaff_EBP + 8;
    FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
      uStack_1c = 0x78;
      *(int **)(unaff_EBP + -0x18) = &iStack_20;
      FUN_007d4a9a(&iStack_20,0);
      FUN_007d3a22(unaff_EBP + 8);
      uStack_1c = 0x132;
      iStack_20 = unaff_EBP + -0x18;
      piVar4 = (int *)FUN_00679d22();
      uStack_1c = *(undefined4 *)(unaff_EBP + 8);
      iStack_20 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00434e21(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_1c = 0x847094;
      FUN_00414ebb();
      if (DAT_00979520 != 0) {
        uStack_1c = 1;
        iStack_20 = 0;
        FUN_00712b76(*(undefined4 *)(unaff_EBP + -0x10));
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == -2) {
    if (DAT_00979520 == 0) goto LAB_00847126;
    uStack_1c = 0xb62;
    iStack_20 = unaff_EBP + 8;
    puVar6 = (undefined4 *)FUN_00679d22();
    uVar3 = *puVar6;
    uStack_1c = 1;
    iStack_20 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00712b76(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (DAT_00979520 == 0) goto LAB_00847126;
    uStack_1c = 0x135;
    iStack_20 = unaff_EBP + 8;
    puVar6 = (undefined4 *)FUN_00679d22();
    uVar3 = *puVar6;
    uStack_1c = 1;
    iStack_20 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00712b76(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  uStack_1c = 0x847126;
  FUN_00414ebb();
LAB_00847126:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1c = 0x847132;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


