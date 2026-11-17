/* FUN_00485ce9 - 0x00485ce9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00485ce9(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_0044da62(*(undefined4 *)(unaff_EBP + 8),*(undefined1 *)(extraout_ECX + 0x98),
                       unaff_EBP + -0x10,0);
  if ((iVar1 == 0) ||
     (((*(int *)(unaff_EBP + -0x10) != 0xe &&
       (iVar1 = FUN_0048651d(*(undefined4 *)(unaff_EBP + -0x10)), iVar1 == 0)) ||
      (*(int *)(unaff_EBP + 8) / 100000 == 0x10)))) goto LAB_00485f2a;
  if (*(int *)(*(int *)(extraout_ECX + 0x414) + 0x4dc) != 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x68) + 4) + 0x1c))(0);
  }
  if ((*(int *)(unaff_EBP + 8) / 10000 == 0x69) && (*(int *)(extraout_ECX + 0x26c) != 0)) {
    *(undefined4 *)(extraout_ECX + 0x26c) = 0;
    *(undefined4 *)(extraout_ECX + 0x270) = 0;
  }
  else if ((*(int *)(extraout_ECX + 0x264) / 10000 == 0x69) && (*(int *)(unaff_EBP + -0x10) == 6)) {
    *(undefined4 *)(extraout_ECX + 0x264) = 0;
    *(undefined4 *)(extraout_ECX + 0x268) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  if (iVar1 == 0xc) {
    FUN_00486191(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(undefined4 *)(unaff_EBP + 0x10));
  }
  else if ((*(int *)(extraout_ECX + 0x23c + iVar1 * 8) == *(int *)(unaff_EBP + 8)) &&
          (*(int *)(unaff_EBP + 0x10) == 0)) {
    *(undefined4 *)(extraout_ECX + 0x240 + iVar1 * 8) = 0;
    *(undefined4 *)(extraout_ECX + 0x23c + *(int *)(unaff_EBP + -0x10) * 8) = 0;
  }
  else {
    *(int *)(extraout_ECX + 0x23c + iVar1 * 8) = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x240 + *(int *)(unaff_EBP + -0x10) * 8) =
         *(undefined4 *)(unaff_EBP + 0xc);
  }
  if (*(int *)(unaff_EBP + -0x10) == 10) {
    iVar1 = FUN_00486dca(*(undefined4 *)(extraout_ECX + 0x294));
    if (iVar1 != 0) {
      *(undefined4 *)(extraout_ECX + 0x294) = 0;
      *(undefined4 *)(extraout_ECX + 0x298) = 0;
    }
  }
  iVar1 = FUN_00486dca(*(undefined4 *)(unaff_EBP + 8));
  if ((iVar1 != 0) && (*(int *)(extraout_ECX + 0x28c) != 0)) {
    *(undefined4 *)(extraout_ECX + 0x28c) = 0;
    *(undefined4 *)(extraout_ECX + 0x290) = 0;
  }
  FUN_00448190(extraout_ECX + 0x8c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar6 = (undefined4 *)(unaff_EBP + -0x1a7);
  puVar2 = (undefined4 *)(extraout_ECX + 0x23c);
  iVar1 = 0x31;
  do {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 2;
    puVar6 = puVar6 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = *(int *)(extraout_ECX + 0x294);
  *(int *)(unaff_EBP + 8) = iVar1;
  if ((iVar1 / 100000 == 0x11) && (iVar1 = FUN_0054e7b3(iVar1), iVar1 != 0)) {
    iVar3 = FUN_0044dddc(*(undefined4 *)(extraout_ECX + 0xd1));
    iVar8 = 1;
    piVar7 = &DAT_00964200;
    iVar9 = iVar8;
    do {
      bVar5 = (byte)iVar9;
      if (*piVar7 == iVar3) goto LAB_00485ed1;
      piVar7 = piVar7 + 1;
      iVar9 = iVar9 + 1;
    } while ((int)piVar7 < 0x964241);
    bVar5 = 0;
LAB_00485ed1:
    uVar4 = 1 << (bVar5 & 0x1f);
    if ((uVar4 & *(uint *)(iVar1 + 0x1a4)) == 0) {
      do {
        if ((*(uint *)(iVar1 + 0x1a4) & 1 << ((byte)iVar8 & 0x1f)) != 0) goto LAB_00485f3a;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x12);
    }
    else {
      do {
        if ((uVar4 & 1 << ((byte)iVar8 & 0x1f)) != 0) goto LAB_00485f3a;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x12);
    }
    iVar1 = 0;
    goto LAB_00485f05;
  }
LAB_00485f14:
  FUN_0043f184(unaff_EBP + -0x1c0);
LAB_00485f2a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_00485f3a:
  iVar1 = (&DAT_009641fc)[iVar8] * 10000 + 0xf4a10;
LAB_00485f05:
  *(int *)(unaff_EBP + -0x17b) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1ab) = *(undefined4 *)(unaff_EBP + 8);
  goto LAB_00485f14;
}


