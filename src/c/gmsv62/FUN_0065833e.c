/* FUN_0065833e - 0x0065833e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065833e(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBP;
  int *piVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 1;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x568;
  piVar6 = (int *)(extraout_ECX + 0x640);
  do {
    if ((int *)piVar6[-0x14] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[-0x14] + 0xc))();
      FUN_00450463();
    }
    if ((int *)*piVar6 != (int *)0x0) {
      (**(code **)(*(int *)*piVar6 + 0xc))();
      FUN_00450463();
    }
    if ((int *)piVar6[0x14] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[0x14] + 0xc))();
      FUN_00450463();
    }
    iVar1 = FUN_0045e2eb();
    iVar2 = FUN_0045e2eb();
    *(int *)(unaff_EBP + -0x1c) = (iVar2 / 3) * 0x22 + 0x5b;
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e0);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x34,0xfd3);
      uVar4 = *puVar3;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar4 = FUN_0041354c(unaff_EBP + -0x28,uVar4,*(undefined4 *)(unaff_EBP + -0x10));
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar2 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + -0x38) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00450382(uVar4);
      iVar2 = **(int **)(iVar2 + 4);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
      iVar5 = *(int *)(unaff_EBP + -0x10) + 1000;
LAB_006585c5:
      (**(code **)(iVar2 + 0x20))
                (*(undefined4 *)(unaff_EBP + -0x14),iVar5,(iVar1 % 3) * 0x27 + 0x10,uVar4,0,
                 unaff_EBP + -0x48);
    }
    else {
      if (iVar2 == 1) {
        puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x30,0xfd4);
        uVar4 = *puVar3;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uVar4 = FUN_0041354c(unaff_EBP + -0x24,uVar4,*(undefined4 *)(unaff_EBP + -0x10));
        FUN_00419192(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iVar2 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x38) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = FUN_00450382(uVar4);
        iVar2 = **(int **)(iVar2 + 4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
        iVar5 = *(int *)(unaff_EBP + -0x10) + 0x3f2;
        goto LAB_006585c5;
      }
      if (iVar2 == 2) {
        puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x2c,0xfd5);
        uVar4 = *puVar3;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uVar4 = FUN_0041354c(unaff_EBP + -0x20,uVar4,*(undefined4 *)(unaff_EBP + -0x10));
        FUN_00419192(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iVar2 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x38) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = FUN_00450382(uVar4);
        iVar2 = **(int **)(iVar2 + 4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x1c);
        iVar5 = *(int *)(unaff_EBP + -0x10) + 0x3fc;
        goto LAB_006585c5;
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0xc;
    piVar6 = piVar6 + 2;
    if (9 < *(int *)(unaff_EBP + -0x10)) {
      FUN_008161f1(0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


