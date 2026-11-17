/* FUN_007c56a1 - 0x007c56a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c56a1(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_00879bb8();
  iVar7 = DAT_00978368 + 0x3128;
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(int *)(unaff_EBP + -0x18) = iVar7;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_20 = 0x7c56d4;
  uVar5 = FUN_004133f0();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  uStack_20 = 0x7c56df;
  uVar6 = FUN_0043f6fe();
  if (uVar6 < 0x80000000) {
LAB_007c580f:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    uStack_20 = 0x7c56ef;
    iVar7 = FUN_004865cc();
    if (iVar7 != 0) goto LAB_007c580f;
    iVar7 = *(int *)(unaff_EBP + 0xc);
    if ((*(int *)(unaff_EBP + 8) != 0) && (iVar7 == 0)) {
      iVar7 = *(int *)(extraout_ECX + 0x4b0);
    }
    if ((*(uint *)(extraout_ECX + 0x52c) & 0xfffffffe) == 10) {
      iVar7 = (-(uint)(iVar7 != 0) & 0x21) - 1;
    }
    else {
      uStack_20 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_24 = 0;
      iStack_28 = 0;
      uVar5 = FUN_0044dddc(*(undefined4 *)(unaff_EBP + 8));
      iVar7 = FUN_00653e6a(iVar7,uVar5);
    }
    if (-1 < iVar7) {
      uStack_20 = 0;
      uStack_24 = 0;
      iStack_28 = 6;
      FUN_0078c1bd(iVar7);
      uStack_20 = 0;
      iStack_28 = extraout_ECX + 0x4c0;
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_24;
      uStack_24 = extraout_ECX_00;
      FUN_004059fd();
      iStack_28 = 0;
      FUN_007938b4(unaff_EBP + -0x10,0);
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(*piVar1 + -4) >> 1;
      }
      if (uVar6 != 0) {
        uStack_20 = 0x7c57b1;
        uVar6 = FUN_0043f6fe();
        uStack_20 = 0;
        uStack_24 = *(undefined4 *)(unaff_EBP + 8);
        iStack_28 = (uint)(uVar6 < 0x80000000) * 0x3f4;
        iVar2 = *(int *)(iStack_28 + 0x53c + extraout_ECX);
        iVar3 = (&DAT_00978688)[iVar7 * 6];
        iVar4 = (&DAT_00978684)[iVar7 * 6];
        *(int **)(unaff_EBP + 8) = &iStack_28;
        FUN_004059fd(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uVar5 = FUN_0043f900(iVar7);
        iVar8 = FUN_007d1e08(uVar5);
        FUN_0078ceed(iVar8 + (iVar2 * iVar3) / iVar4,uVar5,iVar7);
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          uStack_20 = 0x7c580d;
          FUN_004030b1();
        }
        goto LAB_007c581a;
      }
      if (piVar1 != (int *)0x0) {
        uStack_20 = 0x7c5793;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  uStack_20 = 0x7c581a;
  FUN_007a934b();
LAB_007c581a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


