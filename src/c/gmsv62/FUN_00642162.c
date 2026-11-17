/* FUN_00642162 - 0x00642162 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00642162(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 uVar6;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978368;
  iStack_38 = unaff_EBP + -0x18;
  uStack_3c = 0x642188;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x64219c;
  uVar2 = FUN_0042452b();
  if ((uVar2 & 0xff) != 0) {
    *(uint *)(unaff_EBP + -0x14) = uVar2 & 0xff;
    do {
      iStack_38 = 0x6421ae;
      uVar3 = FUN_0042459a();
      iStack_38 = 0xffffffff;
      uStack_3c = 0x6421ba;
      puVar4 = (undefined4 *)FUN_0045f1e3();
      piVar1 = (int *)(unaff_EBP + -0x14);
      *piVar1 = *piVar1 + -1;
      iVar5 = *piVar1;
      *puVar4 = uVar3;
    } while (iVar5 != 0);
  }
  iStack_38 = 0x69c;
  uStack_3c = 0x6421d0;
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + 0x10) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar5 == 0) {
    iStack_38 = 0;
  }
  else {
    iStack_38 = 0x6421e2;
    iStack_38 = FUN_007e62e9();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_3c = 0x6421f5;
  iVar5 = FUN_005154ad();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar5 + 4);
  iStack_38 = 0x642203;
  FUN_004c26c4();
  iStack_38 = 0;
  uStack_3c = 0;
  *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_40;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450368(unaff_EBP + -0x18);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar6 = 5;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004c2677(5,uVar3);
  FUN_007eddac(uVar6,uVar3);
  puStack_40 = (undefined1 *)&uStack_3c;
  *(undefined4 **)(unaff_EBP + 0x10) = &uStack_3c;
  FUN_00455c59();
  puStack_40 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004c2677();
  FUN_007ee143();
  iStack_38 = 0x64225f;
  FUN_007e6e3c();
  iStack_38 = 0x642267;
  iVar5 = FUN_004bc6a2();
  iStack_38 = 0;
  uStack_3c = 0;
  puStack_40 = (undefined1 *)0x38;
  FUN_0060142b();
  iStack_38 = 8;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_3c = 0x642283;
  FUN_00457cda();
  if (iVar5 == 1) {
    uStack_3c = 0x642291;
    iStack_38 = iVar5;
    FUN_00457cda();
    iStack_38 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xec);
  }
  else {
    iStack_38 = 0;
  }
  uStack_3c = 0x6422a5;
  FUN_00457cda();
  iStack_38 = unaff_EBP + -0x34;
  uStack_3c = 0x6422b4;
  FUN_004751b2();
  iStack_38 = 0x6422bb;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_38 = 0x6422c7;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x6422d3;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_38 = 0x6422de;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_38 = 0x6422ea;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


