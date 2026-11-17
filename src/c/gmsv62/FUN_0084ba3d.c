/* FUN_0084ba3d - 0x0084ba3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084ba3d(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  FUN_00879bb8();
  uStack_2c = unaff_EBP + -0x18;
  uStack_30 = 0x84ba56;
  FUN_00455c59();
  uVar1 = *(uint *)(unaff_EBP + 8);
  uStack_2c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x10) = uVar1;
  uStack_30 = 0x84ba73;
  iVar2 = FUN_005ee726();
  if (iVar2 != 0) {
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_3c;
    FUN_00679d22(auStack_3c,0xc6e);
    iVar2 = FUN_007db791();
    *(undefined1 *)(unaff_EBP + 0xb) = 0;
    if (iVar2 == 6) goto LAB_0084baaa;
  }
  *(undefined1 *)(unaff_EBP + 0xb) = 1;
LAB_0084baaa:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    uStack_2c = 0;
    uStack_30 = 0x84babc;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  if (*(char *)(unaff_EBP + 0xb) == '\0') {
    uVar3 = 0;
    while( true ) {
      iVar2 = *(int *)(DAT_0097bdc4 + 0x578);
      if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= uVar3)) goto LAB_0084baee;
      if (*(uint *)(iVar2 + uVar3 * 4) == (uVar1 & 0xffff)) break;
      uVar3 = uVar3 + 1;
    }
    uStack_30 = 0x84baee;
    uStack_2c = uVar1;
    FUN_0070328a();
LAB_0084baee:
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0x62;
    uStack_38 = 0x84bafa;
    FUN_0060142b();
    uStack_2c = 3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_30 = 0x84bb0b;
    FUN_00457cda();
    uStack_30 = 0x84bb14;
    uStack_2c = uVar1;
    FUN_0045d247();
    uStack_2c = unaff_EBP + -0x28;
    uStack_30 = 0x84bb23;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_2c = 0x84bb2f;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


