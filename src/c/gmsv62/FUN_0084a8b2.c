/* FUN_0084a8b2 - 0x0084a8b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0084a8b2(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar7 = *(int **)(unaff_EBP + 8);
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    if ((*piVar7 == 0) || (*(uint *)(*piVar7 + -4) <= uVar6)) {
      uVar5 = 1;
LAB_0084aa81:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar5;
    }
    iVar1 = FUN_0045e2eb();
    if (iVar1 / 10000 == 0x38e) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(uVar6 * 8 + *piVar7 + 4);
      FUN_0045e45d();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00445a30();
      uVar6 = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      while( true ) {
        iVar2 = *(int *)(unaff_EBP + -0x24);
        iVar1 = *(int *)(iVar2 + 0x5c);
        if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar6)) break;
        iVar1 = *(int *)(iVar1 + uVar6 * 4);
        iVar4 = *piVar7;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(int *)(unaff_EBP + -0x20) = iVar1;
        uVar6 = 0;
        piVar3 = (int *)(iVar4 + 4);
        while( true ) {
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar6)) goto LAB_0084a996;
          if (*(int *)(*piVar3 + 0xc) == iVar1) break;
          piVar7 = *(int **)(unaff_EBP + 8);
          uVar6 = uVar6 + 1;
          piVar3 = piVar3 + 2;
        }
        iVar1 = FUN_0045e2eb();
        piVar7 = *(int **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -0x1c) =
             *(undefined4 *)(*(int *)(uVar6 * 8 + 4 + *piVar7) + 0x1c);
        iVar2 = *(int *)(unaff_EBP + -0x24);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        if (iVar1 != 0) goto LAB_0084a9ae;
        iVar1 = *(int *)(unaff_EBP + -0x20);
LAB_0084a996:
        if ((iVar1 < 90000000) || (90999999 < iVar1)) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045e46f();
          goto LAB_0084aa7a;
        }
LAB_0084a9ae:
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        iVar1 = 0;
        for (uVar6 = 0; (*piVar7 != 0 && (uVar6 < *(uint *)(*piVar7 + -4))); uVar6 = uVar6 + 1) {
          iVar2 = FUN_0045e2eb();
          if ((*(int *)(unaff_EBP + -0x18) == iVar2) &&
             ((iVar2 = *(int *)(*piVar7 + 4 + uVar6 * 8),
              *(int *)(unaff_EBP + -0x1c) == *(int *)(iVar2 + 0x1c) &&
              (*(int *)(unaff_EBP + -0x20) <= *(int *)(iVar2 + 0x20))))) {
            iVar1 = *(int *)(iVar2 + 0xc);
            *(int *)(unaff_EBP + -0x20) = *(int *)(iVar2 + 0x20);
          }
          iVar2 = *(int *)(unaff_EBP + -0x24);
        }
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto joined_r0x0084aa6f;
        }
        piVar3 = (int *)FUN_0045f1e3(0xffffffff);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        *piVar3 = iVar1;
        uVar6 = *(uint *)(unaff_EBP + -0x10);
      }
      if (*(int *)(iVar2 + 0x5c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar2 + 0x5c) + -4);
      }
      if (*(int *)(iVar2 + 0x60) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60) + -4);
      }
      if (iVar1 != iVar4) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
joined_r0x0084aa6f:
        if (iVar2 != 0) {
          FUN_0045e794(0);
        }
LAB_0084aa7a:
        uVar5 = 0;
        goto LAB_0084aa81;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (iVar2 != 0) {
        FUN_0045e794(0);
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    uVar6 = *(uint *)(unaff_EBP + -0x14);
  } while( true );
}


