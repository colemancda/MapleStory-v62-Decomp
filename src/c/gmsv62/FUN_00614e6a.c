/* FUN_00614e6a - 0x00614e6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00614e6a(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  int iVar8;
  int unaff_EBP;
  int *piVar9;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x84) == 0) || (*(int *)(*(int *)(extraout_ECX + 0x84) + 0x524) == 0)
     ) {
    iVar3 = FUN_00614192();
    uVar4 = FUN_0042452b();
    uVar4 = uVar4 & 0xff;
    *(uint *)(unaff_EBP + -0x1c) = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)(extraout_ECX + 0xa4) = 0;
      uVar4 = FUN_0042452b();
      piVar9 = (int *)(*(int *)(*(int *)(extraout_ECX + 0x78) + 0x44) + (uVar4 & 0xff) * 0x1c);
      if ((iVar3 < *piVar9) || (piVar9[1] < iVar3)) goto LAB_00615034;
      cVar2 = FUN_0042452b();
      if (cVar2 == '\0') {
        piVar9 = piVar9 + 6;
      }
      else {
        piVar9 = piVar9 + 5;
      }
    }
    else if (uVar4 == 1) {
      iVar5 = *(int *)(extraout_ECX + 0x78);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar8 = 0;
      while( true ) {
        iVar1 = *(int *)(iVar5 + 0x48);
        iVar7 = 0;
        if (iVar1 != 0) {
          iVar7 = *(int *)(iVar1 + -4);
        }
        if (iVar7 <= *(int *)(unaff_EBP + -0x10)) {
          piVar9 = *(int **)(unaff_EBP + 8);
          goto LAB_00614f3d;
        }
        piVar9 = (int *)(iVar8 + *(int *)(iVar5 + 0x48));
        if ((*piVar9 <= iVar3) && (iVar3 <= piVar9[1])) break;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        iVar8 = iVar8 + 0x10;
      }
      cVar2 = FUN_0042452b();
      if (cVar2 == '\0') {
        piVar9 = piVar9 + 3;
      }
      else {
        piVar9 = piVar9 + 2;
      }
LAB_00614f3d:
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x48);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + -4);
      }
      if (*(int *)(unaff_EBP + -0x10) == iVar5) goto LAB_00615034;
    }
    else {
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    if ((*piVar9 != 0) &&
       (iVar3 = *(int *)(*piVar9 + -4), *(int *)(unaff_EBP + -0x10) = iVar3, iVar3 != 0)) {
      uVar4 = FUN_004133f0();
      iVar3 = *piVar9;
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffe0;
      iVar3 = iVar3 + (uVar4 % *(uint *)(unaff_EBP + -0x10)) * 8;
      uStack_24 = 0x614f97;
      FUN_00408b49();
      uStack_24 = 0x614f9f;
      uVar6 = FUN_0061d152();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar5 = *(int *)(iVar3 + 4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((iVar5 != 0) && (*(int *)(iVar5 + -4) != 0)) {
        if ((iVar5 == 0) ||
           (iVar5 = *(int *)(iVar5 + -4), *(int *)(unaff_EBP + -0x10) = iVar5, iVar5 == 0)) {
          uVar4 = FUN_004133f0();
        }
        else {
          uVar4 = FUN_004133f0();
          uVar4 = uVar4 % *(uint *)(unaff_EBP + -0x10);
        }
        piVar9 = (int *)(*(int *)(iVar3 + 4) + uVar4 * 4);
        iVar3 = *piVar9;
        if (iVar3 != 0) {
          uStack_24 = 0x614ff1;
          InterlockedIncrement((LONG *)(iVar3 + 8));
        }
        FUN_00402fa6();
        *(int *)(unaff_EBP + -0x14) = *piVar9;
      }
      FUN_0042452b();
      uStack_24 = 1;
      *(undefined1 **)(unaff_EBP + 8) = auStack_28;
      FUN_004059fd(unaff_EBP + -0x14);
      FUN_00615b8e(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
      }
    }
  }
LAB_00615034:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


