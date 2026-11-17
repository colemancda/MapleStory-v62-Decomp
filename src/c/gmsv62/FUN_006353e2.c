/* FUN_006353e2 - 0x006353e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006353e2(void)

{
  undefined4 uVar1;
  LPRECT lprc;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int *piVar5;
  undefined4 uVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  uVar1 = FUN_007d1e08();
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    do {
      iVar4 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
      uVar1 = *(undefined4 *)(iVar3 + 4);
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar1;
      FUN_00635848();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      lprc = (LPRECT)FUN_004f1aaa(0xffffffff);
      *(LPRECT *)(unaff_EBP + -0x14) = lprc;
      SetRectEmpty(lprc);
      iVar3 = *(int *)(unaff_EBP + -0x3c);
      if ((*(int *)(iVar3 + 0x30) == 0) &&
         (-1 < *(int *)(unaff_EBP + -0x20) - *(int *)(iVar3 + 0x2c))) {
        FUN_00638dca(unaff_EBP + -0x48,*(undefined4 *)(iVar3 + 0x10));
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
          piVar2 = (int *)**(int **)(unaff_EBP + -0x44);
          uVar7 = 0;
          piVar5 = piVar2;
          while( true ) {
            if ((piVar2 == (int *)0x0) || ((uint)piVar2[-1] <= uVar7)) goto LAB_006355fa;
            if ((-1 < *piVar5) && (*piVar5 < 5)) break;
            uVar7 = uVar7 + 1;
            piVar5 = piVar5 + 1;
          }
          FUN_00403191(&DAT_00980690);
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x38);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x28);
          iVar3 = *piVar2;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar2 = (int *)*piVar2;
          iVar3 = *piVar2;
          *(int **)(unaff_EBP + -0x24) = piVar2;
          iVar3 = (**(code **)(iVar3 + 0x8c))
                            (piVar2,*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x14) + 4,0,0,
                             0,0,0,0,*(undefined4 *)(unaff_EBP + -0x68),
                             *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                             *(undefined4 *)(unaff_EBP + -0x5c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x68);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          FUN_00403191(&DAT_00980690);
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x38);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar2 = (int *)FUN_0042bc90(unaff_EBP + -0x2c);
          iVar3 = *piVar2;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar2 = (int *)*piVar2;
          iVar3 = *piVar2;
          *(int **)(unaff_EBP + -0x24) = piVar2;
          iVar3 = (**(code **)(iVar3 + 0x8c))
                            (piVar2,*(int *)(unaff_EBP + -0x14) + 8,
                             *(int *)(unaff_EBP + -0x14) + 0xc,0,0,0,0,0,0,
                             *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x78);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
        }
LAB_006355fa:
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0063587b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00635865();
      iVar3 = DAT_00978358;
      if (*(int *)(unaff_EBP + -0x18) == 0) goto code_r0x0063561a;
      iVar3 = *(int *)(unaff_EBP + -0x18);
    } while( true );
  }
LAB_0063572b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004f1a88();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
code_r0x0063561a:
  if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -4) != 0)) {
    iVar4 = FUN_007ac60d(unaff_EBP + -0x10,unaff_EBP + -0x1c,1);
    if (-1 < iVar4) {
      iVar4 = FUN_00635beb(iVar4);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar4 + 4);
      FUN_00635848();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x30) = 1;
        iVar4 = *(int *)(iVar3 + 0xd74);
        *(uint *)(*(int *)(unaff_EBP + -0x34) + 0x34) =
             (uint)(*(int *)((-(uint)(iVar4 != 0) & iVar4 - 0xcU) + 0x110) != 0) << 1 |
             *(uint *)(iVar3 + 0x52c) & 1;
        iVar3 = *(int *)(unaff_EBP + -0x34);
        iVar4 = FUN_007d1e08();
        *(int *)(iVar3 + 0x28) = iVar4 + *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x24) = 0xfffffffe;
        FUN_0060142b(0xae,0,0);
        uVar6 = **(undefined4 **)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00457d37(uVar6);
        FUN_00457d37(*(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x34));
        FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x1c));
        FUN_004751b2(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0045ebca();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uVar6 = 1;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          FUN_00635891(0);
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
      }
    }
  }
  goto LAB_0063572b;
}


