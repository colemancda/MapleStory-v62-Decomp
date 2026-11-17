/* FUN_0050d09a - 0x0050d09a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050d09a(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  piVar5 = DAT_00978358;
  if (DAT_00978358 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(DAT_00978358[1] + 0x10))();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    iVar6 = extraout_ECX + 0x74c;
    while (iVar2 = (*DAT_0097b57c)(iVar6,*puVar1,puVar1[1]), iVar2 == 0) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar6 = iVar6 + 0x38;
      if (1 < *(int *)(unaff_EBP + -0x10)) goto LAB_0050d13c;
      puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
    }
    if ((*(int *)(extraout_ECX + 0x728) != *(int *)(unaff_EBP + -0x10) + 2) &&
       (iVar6 = FUN_0050d2d6(), iVar6 == 0)) {
      FUN_0060142b(0xb3,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_004751b2(unaff_EBP + -0x3c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
LAB_0050d13c:
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar6 = extraout_ECX + 0x7ac;
    do {
      iVar2 = (*DAT_0097b57c)(iVar6,**(undefined4 **)(unaff_EBP + -0x14),
                              (*(undefined4 **)(unaff_EBP + -0x14))[1]);
      if (iVar2 != 0) {
        iVar6 = *piVar5;
        uVar3 = FUN_004133f0(0x10e,0xfffffef2,0,0,0,0,0);
        (**(code **)(iVar6 + 0x40))(uVar3 % 0xb + 0x1e);
        break;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar6 = iVar6 + 0x28;
    } while (*(int *)(unaff_EBP + -0x10) < 2);
  }
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  piVar5 = *(int **)(extraout_ECX + 0x804);
  if (piVar5 == (int *)0x0) {
LAB_0050d2a1:
    if (*(int *)(extraout_ECX + 0x728) == 1) {
      FUN_0050c46b();
      FUN_0050c46b();
    }
    FUN_004eb96a();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    iVar6 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
    iVar2 = piVar5[2];
    *(int **)(unaff_EBP + -0x14) = piVar5;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
    if (-1 < *(int *)(unaff_EBP + -0x18) - iVar2) {
      iVar6 = *piVar5;
      if (iVar6 == 0) {
        puVar1 = (undefined4 *)(extraout_ECX + 0x74c);
LAB_0050d22f:
        *(undefined4 *)(unaff_EBP + -0x2c) = *puVar1;
        *(undefined4 *)(unaff_EBP + -0x28) = puVar1[1];
        *(undefined4 *)(unaff_EBP + -0x24) = puVar1[2];
        *(undefined4 *)(unaff_EBP + -0x20) = puVar1[3];
      }
      else {
        if (iVar6 == 1) {
          puVar1 = (undefined4 *)(extraout_ECX + 0x784);
          goto LAB_0050d22f;
        }
        if (iVar6 == 2) {
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(extraout_ECX + 0x7ac);
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(extraout_ECX + 0x7b0);
          *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x7b4);
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x7b8);
LAB_0050d202:
          FUN_0050c7c8();
          piVar5 = *(int **)(unaff_EBP + -0x14);
        }
        else if (iVar6 == 3) {
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(extraout_ECX + 0x7d4);
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(extraout_ECX + 0x7d8);
          *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x7dc);
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x7e0);
          goto LAB_0050d202;
        }
      }
      iVar6 = (*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x24)) / 2;
      if (piVar5[1] < 1) {
        FUN_0042a3fc(iVar6,*(undefined4 *)(unaff_EBP + -0x28),0);
      }
      else {
        FUN_00429685(iVar6,*(undefined4 *)(unaff_EBP + -0x28),piVar5[1],0,0);
      }
      uVar4 = FUN_007d3c48(iVar6,*(undefined4 *)(unaff_EBP + -0x28));
      FUN_007d4267(0x18704,0,uVar4);
      FUN_0050d7dc(*(undefined4 *)(unaff_EBP + -0x1c));
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_0050d2a1;
    piVar5 = *(int **)(unaff_EBP + -0x10);
  } while( true );
}


