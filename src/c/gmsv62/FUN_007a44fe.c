/* FUN_007a44fe - 0x007a44fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a44fe(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_0045e4b8();
  if ((uVar2 & 1) == 0) {
    iVar3 = FUN_00429303();
    uVar2 = *(uint *)(iVar3 + 0x108) >> 0x11 & 1;
    *(uint *)(unaff_EBP + -0x14) = uVar2;
    if (uVar2 != 0) goto LAB_007a4702;
  }
  iVar3 = FUN_007b3bb4();
  if ((((iVar3 != 0) || (iVar3 = FUN_007a44df(), iVar3 != 0)) ||
      (iVar3 = FUN_007a3f46(), iVar3 != 0)) || (uVar2 = FUN_0043f6fe(), uVar2 < 0x80000000))
  goto LAB_007a4702;
  FUN_007d1e08();
  iVar3 = *(int *)(extraout_ECX + 0x1ecc);
  *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978138;
  if ((iVar3 != 0) ||
     (uVar2 = -(uint)(*(int *)(extraout_ECX + 0xd74) != 0) & *(int *)(extraout_ECX + 0xd74) - 0xcU,
     *(int *)(uVar2 + 0x110) == 0)) goto LAB_007a4702;
  puVar4 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  uVar5 = *puVar4;
  uVar1 = puVar4[1];
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  iVar3 = *(int *)(uVar2 + 0x110);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x20) = iVar3;
  if (iVar3 != 0) {
    InterlockedIncrement((LONG *)(iVar3 + 4));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_0079d6ab();
  if (iVar3 == 0) {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 300;
    uVar5 = FUN_0086123f(*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         unaff_EBP + -0x10,0x80000000);
    FUN_007b4259(uVar5);
    if ((*(int *)(unaff_EBP + -0x18) == 0) ||
       (*(int *)(unaff_EBP + -0x18) == *(int *)(unaff_EBP + -0x20))) {
      uVar5 = FUN_00861327(*(undefined4 *)(unaff_EBP + -0x2c),*(int *)(unaff_EBP + -0x28),
                           unaff_EBP + -0x10,*(int *)(unaff_EBP + -0x28) + 300);
      FUN_007b4259(uVar5);
    }
    iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    if ((*(int *)(iVar3 + 4) + -5 < *(int *)(unaff_EBP + -0x10)) &&
       (iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))(),
       *(int *)(unaff_EBP + -0x10) < *(int *)(iVar3 + 4) + 5)) {
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004cd642(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        goto LAB_007a46b8;
      }
    }
    else {
LAB_007a46b8:
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        *(undefined4 *)(extraout_ECX + 0x1ecc) = 1;
        *(undefined4 *)(extraout_ECX + 0x1ed0) = *(undefined4 *)(uVar2 + 0x110);
        FUN_007959eb(1,1);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_004cd642(0);
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBP + -0x18);
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_004cd642(0);
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = *(int *)(unaff_EBP + -0x18);
  }
  if (iVar3 != 0) {
    FUN_004cd642(0);
  }
LAB_007a4702:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


